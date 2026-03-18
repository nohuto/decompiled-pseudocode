/*
 * XREFs of SeDeleteCodeIntegrityOriginClaimMembers @ 0x1405CDD38
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*SeDeleteCodeIntegrityOriginClaimMembers())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C1DA10;
  if ( qword_140C1DA10 )
    return (__int64 (*)(void))qword_140C1DA10();
  return result;
}
