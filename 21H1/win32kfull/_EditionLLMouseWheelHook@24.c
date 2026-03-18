/*
 * XREFs of _EditionLLMouseWheelHook@24 @ 0x147BBA
 * Callers:
 *     <none>
 * Callees:
 *     _PhkFirstValid@8 @ 0x12974 (_PhkFirstValid@8.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     ?MSGLUA_GPQFOREGROUND@@YGXXZ @ 0xC5904 (-MSGLUA_GPQFOREGROUND@@YGXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YG_N_NABUtagUIPI_INFO_INT@@@Z @ 0x146B56 (-IsGpqForegroundAccessibleOnInputThread@@YG_N_NABUtagUIPI_INFO_INT@@@Z.c)
 */

int __stdcall EditionLLMouseWheelHook(int a1, struct tagHOOK *a2, int a3, int a4, int a5, int a6)
{
  char v6; // bl
  char v7; // bl
  int v8; // ecx
  int v9; // esi
  unsigned int v10; // ecx
  size_t v11; // eax
  _DWORD *v13; // [esp-Ch] [ebp-44h]
  int *v14; // [esp+0h] [ebp-38h]
  bool v15; // [esp+4h] [ebp-34h]
  int *v16; // [esp+10h] [ebp-28h] BYREF
  int v17; // [esp+14h] [ebp-24h]
  unsigned int v18; // [esp+18h] [ebp-20h] BYREF
  int Valid; // [esp+1Ch] [ebp-1Ch]
  _DWORD v20[5]; // [esp+20h] [ebp-18h] BYREF

  v6 = *(_BYTE *)(a1 + 12);
  v17 = a1;
  v7 = v6 & 1;
  v20[0] = a3;
  v20[1] = a4;
  v20[2] = a5;
  if ( (unsigned __int8)IsInputThread() )
    v8 = _gptiRit;
  else
    v8 = _gptiCurrent;
  Valid = PhkFirstValid(v8, 14);
  if ( Valid )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v16, "LowLevelMouseWheelHook", 0);
    v9 = *(_DWORD *)(_gptiCurrent + 788);
    v18 = 0;
    v10 = Valid;
    v13 = (_DWORD *)v17;
    *(_DWORD *)(_gptiCurrent + 788) = v17;
    v11 = xxxCallHook2(0, v10, a2, v13, (int *)&v18, 0, v14, v15);
    *(_DWORD *)(_gptiCurrent + 788) = v9;
    if ( v11 )
    {
LABEL_9:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v16);
      return 1;
    }
    if ( a6 && !IsGpqForegroundAccessibleOnInputThread(v7, (int)v20) )
    {
      MSGLUA_GPQFOREGROUND();
      goto LABEL_9;
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v16);
  }
  return 0;
}
