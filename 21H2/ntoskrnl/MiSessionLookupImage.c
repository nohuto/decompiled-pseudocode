/*
 * XREFs of MiSessionLookupImage @ 0x1402CF668
 * Callers:
 *     MiSharedVaToPartition @ 0x14024144C (MiSharedVaToPartition.c)
 *     MmIsSessionExecutionValid @ 0x1402CF5C0 (MmIsSessionExecutionValid.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiSessionRemoveImage @ 0x14038AFF8 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x14039EC00 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x1403A7974 (MiSessionReferenceImage.c)
 *     MiResolveImageReferences @ 0x14075D20C (MiResolveImageReferences.c)
 *     MiUnloadApproved @ 0x140771F1C (MiUnloadApproved.c)
 *     MiSessionUnloadAllImages @ 0x1407785DC (MiSessionUnloadAllImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14078E258 (MmIsDriverLoadedCurrentSession.c)
 *     MmEnumerateSystemImages @ 0x140797DE0 (MmEnumerateSystemImages.c)
 *     MiSessionApplyNonPagedImageCharges @ 0x1408DA95C (MiSessionApplyNonPagedImageCharges.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 88);
  while ( v1 )
  {
    if ( a1 > v1[6] )
    {
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      if ( a1 >= (v1[5] & 0xFFFFFFFFFFFFFFFCuLL) )
        return v1;
      v1 = (_QWORD *)*v1;
    }
  }
  return 0LL;
}
