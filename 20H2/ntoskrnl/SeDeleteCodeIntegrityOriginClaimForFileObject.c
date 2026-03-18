/*
 * XREFs of SeDeleteCodeIntegrityOriginClaimForFileObject @ 0x1405CDD14
 * Callers:
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*SeDeleteCodeIntegrityOriginClaimForFileObject())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C1DA18;
  if ( qword_140C1DA18 )
    return (__int64 (*)(void))qword_140C1DA18();
  return result;
}
