/*
 * XREFs of _RtlClearThreadWorkOnBehalfTicket@0 @ 0x4B2E6710
 * Callers:
 *     <none>
 * Callees:
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __stdcall RtlClearThreadWorkOnBehalfTicket()
{
  int result; // eax
  __int64 Buf2; // [esp+0h] [ebp-8h] BYREF

  HIDWORD(Buf2) = 0;
  result = memcmp(NtCurrentTeb()->WorkingOnBehalfTicket, &Buf2, 8uLL);
  if ( result )
  {
    result = ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadWorkOnBehalfTicket, &Buf2, 8u);
    if ( result >= 0 )
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = Buf2;
  }
  return result;
}
