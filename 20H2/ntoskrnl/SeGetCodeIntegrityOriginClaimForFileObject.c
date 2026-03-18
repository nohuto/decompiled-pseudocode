/*
 * XREFs of SeGetCodeIntegrityOriginClaimForFileObject @ 0x1405CDD5C
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 SeGetCodeIntegrityOriginClaimForFileObject()
{
  if ( qword_140C1DA08 )
    return qword_140C1DA08();
  else
    return 3221226021LL;
}
