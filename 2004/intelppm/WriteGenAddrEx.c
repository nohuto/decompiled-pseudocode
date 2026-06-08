/*
 * XREFs of WriteGenAddrEx @ 0x1C0008A78
 * Callers:
 *     WriteGenAddrHiddenEx @ 0x1C0008B94 (WriteGenAddrHiddenEx.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0008BC0 (WriteGenAddrMaybeHiddenEx.c)
 *     PerfControlCpc @ 0x1C0009350 (PerfControlCpc.c)
 * Callees:
 *     ReadIoMemRawEx @ 0x1C00088E0 (ReadIoMemRawEx.c)
 *     WriteGenAddr @ 0x1C0008A08 (WriteGenAddr.c)
 *     WriteIoMemRawEx @ 0x1C0008C80 (WriteIoMemRawEx.c)
 */

void __fastcall WriteGenAddrEx(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // r11
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  v2 = a2;
  v3 = a1;
  if ( *a1 == 10 )
  {
    if ( a1[2] || a1[1] != 64 )
    {
      IoMemRaw = ReadIoMemRawEx((__int64)a1);
      v5 = v3[1];
      if ( v5 < 0x40u || v3[2] )
        v2 = IoMemRaw & ~(((1LL << v5) - 1) << v3[2]) | (((1LL << v5) - 1) << v3[2]) & (v2 << v3[2]);
    }
    WriteIoMemRawEx(v3, v2);
  }
  else
  {
    WriteGenAddr(a1, a2);
  }
}
