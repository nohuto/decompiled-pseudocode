/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x140747E80
 * Callers:
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x1407BF068 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x14036F590 (MmQueryApiSetSchema.c)
 */

__int64 PsQueryCurrentApiSetSchema()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 130);
  MmQueryApiSetSchema(&v1, &v2);
  return *(_QWORD *)v1;
}
