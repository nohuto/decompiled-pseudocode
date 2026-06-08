/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0001990
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C00016D0 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0021A14 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 272);
  if ( (v1 & 0x7F070) != 0 && dword_1C001CE80 && byte_1C001CE85 )
  {
    __outbyte(dword_1C001CE80, byte_1C001CE85);
    v1 = *(_QWORD *)(a1 + 272);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C001CE80 )
    {
      LOBYTE(v1) = byte_1C001CE84;
      if ( byte_1C001CE84 )
        __outbyte(dword_1C001CE80, byte_1C001CE84);
    }
  }
  return v1;
}
