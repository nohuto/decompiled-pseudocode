/*
 * XREFs of SeCreateAccessStateFromSubjectContext @ 0x140919D8C
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086C570 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140299240 (SepCreateAccessStateFromSubjectContext.c)
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
