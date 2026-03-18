/*
 * XREFs of VrpAllocateKeyContext @ 0x1405D2C44
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x1405D1A20 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140885DEC (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
