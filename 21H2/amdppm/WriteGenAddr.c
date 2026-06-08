/*
 * XREFs of WriteGenAddr @ 0x1C0003104
 * Callers:
 *     WriteGenAddrEx @ 0x1C0003174 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x1C00031EC (WriteGenAddrHidden.c)
 *     C2Idle @ 0x1C0003E80 (C2Idle.c)
 *     C3Idle @ 0x1C0003F60 (C3Idle.c)
 *     C3IdleCheck @ 0x1C0004060 (C3IdleCheck.c)
 *     SetPerfStateIO @ 0x1C000C650 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0002F10 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C00032EC (WriteIoMemRaw.c)
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
