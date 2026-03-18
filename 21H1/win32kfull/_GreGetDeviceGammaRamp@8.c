/*
 * XREFs of _GreGetDeviceGammaRamp@8 @ 0xD0F8E
 * Callers:
 *     _PrepareGammaRampData@12 @ 0xD0E00 (_PrepareGammaRampData@12.c)
 *     _NtGdiGetDeviceGammaRamp@8 @ 0x21C3C2 (_NtGdiGetDeviceGammaRamp@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     _GreGetDeviceGammaRampInternal@8 @ 0xD1014 (_GreGetDeviceGammaRampInternal@8.c)
 *     ??0DEVLOCKOBJ@@QAE@XZ @ 0xF6A67 (--0DEVLOCKOBJ@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall GreGetDeviceGammaRamp(HDC a1, int a2)
{
  int DeviceGammaRampInternal; // esi
  DEVLOCKOBJ *v4; // ecx
  _BYTE v6[48]; // [esp+10h] [ebp-58h] BYREF
  _DWORD v7[4]; // [esp+40h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  DeviceGammaRampInternal = 0;
  v7[1] = 0;
  v7[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( !*(_DWORD *)(v7[0] + 20) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v6);
      DEVLOCKOBJ::vLockGammaRamp(v4, (struct XDCOBJ *)v7);
      ms_exc.registration.TryLevel = 0;
      DeviceGammaRampInternal = GreGetDeviceGammaRampInternal(*(_DWORD *)(v7[0] + 36), a2);
      v7[3] = DeviceGammaRampInternal;
      ms_exc.registration.TryLevel = -2;
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v6);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  if ( !DeviceGammaRampInternal )
    EngSetLastError(0x57u);
  return DeviceGammaRampInternal;
}
