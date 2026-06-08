/*
 * XREFs of WriteGenAddr @ 0x1C0008A08
 * Callers:
 *     MWaitIdleCheck @ 0x1C0007DF0 (MWaitIdleCheck.c)
 *     WriteGenAddrEx @ 0x1C0008A78 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x1C0008AF0 (WriteGenAddrHidden.c)
 *     C2Idle @ 0x1C000DCE0 (C2Idle.c)
 *     C3Idle @ 0x1C000DDA0 (C3Idle.c)
 *     C3IdleCheck @ 0x1C000DE80 (C3IdleCheck.c)
 *     SetPerfStateIO @ 0x1C000EF40 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0008858 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0008BF0 (WriteIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, __int64 a2)
{
  __int64 v2; // r11
  _BYTE *v3; // r10
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    if ( a1[2] || a1[1] != a1[3] )
    {
      IoMemRaw = ReadIoMemRaw((__int64)a1);
      v5 = v3[1];
      if ( v5 < 0x40u || v3[2] )
        v2 = IoMemRaw & ~(((1LL << v5) - 1) << v3[2]) | (((1LL << v5) - 1) << v3[2]) & (v2 << v3[2]);
    }
    WriteIoMemRaw(v3, v2);
  }
}
