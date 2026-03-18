/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x140746300
 * Callers:
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x1407BBEF8 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x14036E960 (MmQueryApiSetSchema.c)
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
