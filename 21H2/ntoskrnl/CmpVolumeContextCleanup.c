/*
 * XREFs of CmpVolumeContextCleanup @ 0x140863DA8
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x14067BD84 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14068B750 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextCreate @ 0x1408575AC (CmpVolumeContextCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PpPagePathRelease @ 0x140945F80 (PpPagePathRelease.c)
 */

LONG_PTR __fastcall CmpVolumeContextCleanup(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  if ( *(_BYTE *)(a1 + 64) )
    result = PpPagePathRelease(*(_QWORD *)(a1 + 48));
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    return ObfDereferenceObject(v2);
  return result;
}
