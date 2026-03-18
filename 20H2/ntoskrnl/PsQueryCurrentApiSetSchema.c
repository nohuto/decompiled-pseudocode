/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x140756A60
 * Callers:
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x1407CD8F8 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x1403714E0 (MmQueryApiSetSchema.c)
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
