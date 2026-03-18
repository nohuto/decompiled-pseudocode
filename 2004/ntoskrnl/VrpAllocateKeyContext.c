/*
 * XREFs of VrpAllocateKeyContext @ 0x1405CC5E4
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C9A44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x1405CB3C0 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14088029C (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

_OWORD *__fastcall VrpAllocateKeyContext(PVOID Object)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x67655256u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    ObfReferenceObjectWithTag(Object, 0x67655256u);
    *((_QWORD *)v3 + 5) = Object;
  }
  return v3;
}
