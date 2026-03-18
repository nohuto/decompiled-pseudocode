/*
 * XREFs of GreGetDeviceGammaRamp @ 0x1C00534B8
 * Callers:
 *     PrepareGammaRampData @ 0x1C0053570 (PrepareGammaRampData.c)
 *     NtGdiGetDeviceGammaRamp @ 0x1C02B6D80 (NtGdiGetDeviceGammaRamp.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00177B4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetDeviceGammaRampInternal @ 0x1C0053440 (GreGetDeviceGammaRampInternal.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0075A3C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDeviceGammaRamp(HDC a1, _WORD *a2)
{
  unsigned int DeviceGammaRampInternal; // ebx
  __int64 v5; // [rsp+28h] [rbp-70h] BYREF
  int v6; // [rsp+30h] [rbp-68h]
  int v7; // [rsp+34h] [rbp-64h]
  _BYTE v8[88]; // [rsp+40h] [rbp-58h] BYREF

  DeviceGammaRampInternal = 0;
  v6 = 0;
  v7 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v5, a1);
  if ( v5 )
  {
    if ( !*(_DWORD *)(v5 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v8);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v8, (struct XDCOBJ *)&v5);
      DeviceGammaRampInternal = GreGetDeviceGammaRampInternal(*(_QWORD *)(v5 + 48), a2);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v8);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v5);
  }
  if ( !DeviceGammaRampInternal )
    EngSetLastError(0x57u);
  return DeviceGammaRampInternal;
}
