/*
 * XREFs of _GreSetDeviceGammaRamp@16 @ 0xCEB1A
 * Callers:
 *     _RestoreGammaRamp@4 @ 0xCE8E0 (_RestoreGammaRamp@4.c)
 *     _FadeDesktop@16 @ 0xCE936 (_FadeDesktop@16.c)
 *     _NtGdiSetDeviceGammaRamp@8 @ 0x21C706 (_NtGdiSetDeviceGammaRamp@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?GreSetDeviceGammaRampInternal@@YGHPAUHDEV__@@PAXHHPAW4_SETGAMMARAMP_FAILED_REASON@@PAK@Z @ 0xCEC02 (-GreSetDeviceGammaRampInternal@@YGHPAUHDEV__@@PAXHHPAW4_SETGAMMARAMP_FAILED_REASON@@PAK@Z.c)
 *     _DxgkDiagInitializeCodePointPacket@20 @ 0xCEDDC (_DxgkDiagInitializeCodePointPacket@20.c)
 *     ??0DEVLOCKOBJ@@QAE@XZ @ 0xF6A67 (--0DEVLOCKOBJ@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall GreSetDeviceGammaRamp(HDC this, HDEV a2, void *a3)
{
  int v3; // esi
  DEVLOCKOBJ *v4; // ecx
  int CurrentProcessWin32Process; // eax
  int v6; // ecx
  int v8; // [esp-8h] [ebp-90h]
  int v9; // [esp-4h] [ebp-8Ch]
  enum _SETGAMMARAMP_FAILED_REASON *v10; // [esp+0h] [ebp-88h]
  unsigned int *v11; // [esp+4h] [ebp-84h]
  int v12; // [esp+10h] [ebp-78h] BYREF
  int v13[2]; // [esp+14h] [ebp-74h] BYREF
  _DWORD v14[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  _BYTE v15[72]; // [esp+28h] [ebp-60h] BYREF
  CPPEH_RECORD ms_exc; // [esp+70h] [ebp-18h]

  v3 = 0;
  v14[1] = 0;
  v14[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v14, this);
  if ( v14[0] )
  {
    if ( !*(_DWORD *)(v14[0] + 20) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&v15[16]);
      DEVLOCKOBJ::vLockGammaRamp(v4, (struct XDCOBJ *)v14);
      ms_exc.registration.TryLevel = 0;
      v3 = GreSetDeviceGammaRampInternal(a2, a3, (int)&v12, (int)v13, v10, v11);
      v13[1] = v3;
      ms_exc.registration.TryLevel = -2;
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v15[16]);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
  {
    v6 = *(_DWORD *)(CurrentProcessWin32Process + 164);
    if ( (v6 & 1) == 0 )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 164) = v6 | 1;
      memset(v15, 0, 0x40u);
      DxgkDiagInitializeCodePointPacket(v8, v3 != 0 ? 0 : -1073741823, v9);
      DrvDxgkWriteDiagEntry(v15);
    }
  }
  if ( !v3 )
    EngSetLastError(0x57u);
  return v3;
}
