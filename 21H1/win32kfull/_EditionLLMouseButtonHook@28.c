/*
 * XREFs of _EditionLLMouseButtonHook@28 @ 0x1479C6
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

int __stdcall EditionLLMouseButtonHook(int a1, _DWORD *a2, struct tagHOOK *a3, int a4, int a5, int a6, int a7)
{
  bool v7; // zf
  int v8; // edi
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  _DWORD *v12; // edx
  int v13; // eax
  _DWORD *v14; // edx
  int v15; // ecx
  size_t v16; // eax
  int *v18; // [esp+0h] [ebp-50h]
  bool v19; // [esp+4h] [ebp-4Ch]
  char v20; // [esp+14h] [ebp-3Ch]
  int *v21; // [esp+18h] [ebp-38h] BYREF
  unsigned int v22; // [esp+1Ch] [ebp-34h] BYREF
  unsigned int Valid; // [esp+20h] [ebp-30h]
  int v24; // [esp+24h] [ebp-2Ch]
  int v25; // [esp+28h] [ebp-28h]
  int v26; // [esp+2Ch] [ebp-24h]
  int v27; // [esp+30h] [ebp-20h]
  int v28; // [esp+34h] [ebp-1Ch]
  _DWORD v29[2]; // [esp+38h] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-10h]

  v7 = *(_DWORD *)(a1 + 88) == 2;
  v29[0] = a4;
  v29[1] = a5;
  v30 = a6;
  if ( v7 )
    v8 = *(_DWORD *)(a1 + 80);
  else
    v8 = 0;
  if ( (unsigned __int8)IsInputThread() )
    v9 = _gptiRit;
  else
    v9 = _gptiCurrent;
  v10 = a2[3] & 1;
  Valid = PhkFirstValid(v9, 14);
  if ( Valid )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v21, "LowLevelMouseButtonHook", 0);
    v11 = *(_DWORD *)(_gptiCurrent + 788);
    v22 = 0;
    v12 = a2;
    v28 = v11;
    v24 = *(_DWORD *)(_gptiCurrent + 772);
    v25 = *(_DWORD *)(_gptiCurrent + 776);
    v26 = *(_DWORD *)(_gptiCurrent + 780);
    v13 = *(_DWORD *)(_gptiCurrent + 784);
    v20 = 0;
    *(_DWORD *)(_gptiCurrent + 788) = a2;
    v27 = v13;
    if ( v8 )
    {
      v14 = *(_DWORD **)(*(_DWORD *)(v8 + 8) + 232);
      if ( *v14 == _gpepCSRSS )
      {
        *(_DWORD *)(_gptiCurrent + 784) = 0;
        *(_DWORD *)(_gptiCurrent + 780) = 0x2000;
      }
      else
      {
        *(_DWORD *)(_gptiCurrent + 780) = v14[124];
        *(_DWORD *)(_gptiCurrent + 784) = v14[125];
      }
      v12 = a2;
      v20 = 1;
    }
    else
    {
      *(_DWORD *)(_gptiCurrent + 780) = -1;
      *(_DWORD *)(_gptiCurrent + 784) = -1;
    }
    if ( !v10 || v30 )
    {
      *(_DWORD *)(_gptiCurrent + 772) = -1;
      *(_DWORD *)(_gptiCurrent + 776) = -1;
    }
    else
    {
      v15 = *(_DWORD *)(_gptiCurrent + 232);
      *(_DWORD *)(_gptiCurrent + 772) = *(_DWORD *)(v15 + 496);
      *(_DWORD *)(_gptiCurrent + 776) = *(_DWORD *)(v15 + 500);
    }
    v16 = xxxCallHook2(0, Valid, a3, v12, (int *)&v22, v20, v18, v19);
    *(_DWORD *)(_gptiCurrent + 772) = v24;
    *(_DWORD *)(_gptiCurrent + 776) = v25;
    *(_DWORD *)(_gptiCurrent + 780) = v26;
    *(_DWORD *)(_gptiCurrent + 784) = v27;
    *(_DWORD *)(_gptiCurrent + 788) = v28;
    if ( v16 )
      goto LABEL_22;
    if ( a7 && !IsGpqForegroundAccessibleOnInputThread(v10, (int)v29) )
    {
      MSGLUA_GPQFOREGROUND();
LABEL_22:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v21);
      return 1;
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v21);
  }
  return 0;
}
