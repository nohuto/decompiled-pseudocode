/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0008230
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C00091B0 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0028EB0 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 272);
  if ( (v1 & 0x7F070) != 0 && dword_1C0013C50 && byte_1C0013C55 )
  {
    __outbyte(dword_1C0013C50, byte_1C0013C55);
    v1 = *(_QWORD *)(a1 + 272);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0013C50 )
    {
      LOBYTE(v1) = byte_1C0013C54;
      if ( byte_1C0013C54 )
        __outbyte(dword_1C0013C50, byte_1C0013C54);
    }
  }
  return v1;
}
