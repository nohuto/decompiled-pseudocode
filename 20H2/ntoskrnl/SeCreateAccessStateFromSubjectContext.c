/*
 * XREFs of SeCreateAccessStateFromSubjectContext @ 0x14091FA0C
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140211030 (SepCreateAccessStateFromSubjectContext.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 */

__int64 __fastcall SeCreateAccessStateFromSubjectContext(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        ACCESS_MASK a4,
        GENERIC_MAPPING *a5)
{
  void *v7; // rcx
  int AccessStateFromSubjectContext; // edi

  v7 = *(void **)a1;
  if ( v7 )
    ObfReferenceObject(v7);
  ObfReferenceObject(*(PVOID *)(a1 + 16));
  AccessStateFromSubjectContext = SepCreateAccessStateFromSubjectContext((_OWORD *)a1, a2, a3, a4, a5);
  if ( AccessStateFromSubjectContext < 0 )
  {
    if ( *(_QWORD *)a1 )
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)a1);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 16));
  }
  return (unsigned int)AccessStateFromSubjectContext;
}
