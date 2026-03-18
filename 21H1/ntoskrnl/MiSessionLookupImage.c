/*
 * XREFs of MiSessionLookupImage @ 0x14031F488
 * Callers:
 *     MiSharedVaToPartition @ 0x140226348 (MiSharedVaToPartition.c)
 *     MmIsSessionExecutionValid @ 0x14031F3E0 (MmIsSessionExecutionValid.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiSessionRemoveImage @ 0x140387778 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x14039B6E0 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x1403A4534 (MiSessionReferenceImage.c)
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 *     MiUnloadApproved @ 0x14075D2CC (MiUnloadApproved.c)
 *     MiSessionUnloadAllImages @ 0x140763BDC (MiSessionUnloadAllImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140779A78 (MmIsDriverLoadedCurrentSession.c)
 *     MmEnumerateSystemImages @ 0x140780B00 (MmEnumerateSystemImages.c)
 *     MiSessionApplyNonPagedImageCharges @ 0x1408D600C (MiSessionApplyNonPagedImageCharges.c)
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
