/*
 * XREFs of MiSessionLookupImage @ 0x14035CF98
 * Callers:
 *     MiSharedVaToPartition @ 0x1402B8FC8 (MiSharedVaToPartition.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MmIsSessionExecutionValid @ 0x14035CEF0 (MmIsSessionExecutionValid.c)
 *     MiSessionRemoveImage @ 0x1403886E8 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x14039BE70 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x1403A4CB4 (MiSessionReferenceImage.c)
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 *     MiUnloadApproved @ 0x14075F6F8 (MiUnloadApproved.c)
 *     MiSessionUnloadAllImages @ 0x1407655FC (MiSessionUnloadAllImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14077BE88 (MmIsDriverLoadedCurrentSession.c)
 *     MmEnumerateSystemImages @ 0x140780120 (MmEnumerateSystemImages.c)
 *     MiSessionApplyNonPagedImageCharges @ 0x1408D735C (MiSessionApplyNonPagedImageCharges.c)
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
