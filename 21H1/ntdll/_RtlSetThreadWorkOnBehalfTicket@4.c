/*
 * XREFs of _RtlSetThreadWorkOnBehalfTicket@4 @ 0x4B2B7140
 * Callers:
 *     _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7 (_TppCleanupGroupMemberCallbackProlog@8.c)
 * Callees:
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __stdcall RtlSetThreadWorkOnBehalfTicket(_QWORD *Buf2)
{
  int result; // eax

  if ( !Buf2 )
    return -1073741811;
  result = memcmp(NtCurrentTeb()->WorkingOnBehalfTicket, Buf2, 8u);
  if ( result )
  {
    result = ZwSetInformationThread(-2, 44, Buf2, 8);
    if ( result >= 0 )
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *Buf2;
  }
  return result;
}
