/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0008A20
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C00099A0 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C002A3A0 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 272);
  if ( (v1 & 0x7F070) != 0 && dword_1C0014C60 && byte_1C0014C65 )
  {
    __outbyte(dword_1C0014C60, byte_1C0014C65);
    v1 = *(_QWORD *)(a1 + 272);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0014C60 )
    {
      LOBYTE(v1) = byte_1C0014C64;
      if ( byte_1C0014C64 )
        __outbyte(dword_1C0014C60, byte_1C0014C64);
    }
  }
  return v1;
}
