/*
 * XREFs of AcquireBiosPpmControl @ 0x1C00081F0
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0009170 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0027B70 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 272);
  if ( (v1 & 0x7F070) != 0 && dword_1C0013C40 && byte_1C0013C45 )
  {
    __outbyte(dword_1C0013C40, byte_1C0013C45);
    v1 = *(_QWORD *)(a1 + 272);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0013C40 )
    {
      LOBYTE(v1) = byte_1C0013C44;
      if ( byte_1C0013C44 )
        __outbyte(dword_1C0013C40, byte_1C0013C44);
    }
  }
  return v1;
}
