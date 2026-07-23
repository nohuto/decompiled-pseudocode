/*
 * XREFs of MiSessionLookupImage @ 0x14024D9E8
 * Callers:
 *     MmIsSessionExecutionValid @ 0x14024D940 (MmIsSessionExecutionValid.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiSharedVaToPartition @ 0x1402E5C9C (MiSharedVaToPartition.c)
 *     MiSessionRemoveImage @ 0x14038B148 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x14039ED50 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x1403A7AC4 (MiSessionReferenceImage.c)
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     MiUnloadApproved @ 0x1407720DC (MiUnloadApproved.c)
 *     MiSessionUnloadAllImages @ 0x14077879C (MiSessionUnloadAllImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14078E418 (MmIsDriverLoadedCurrentSession.c)
 *     MmEnumerateSystemImages @ 0x140797FE0 (MmEnumerateSystemImages.c)
 *     MiSessionApplyNonPagedImageCharges @ 0x1408DAABC (MiSessionApplyNonPagedImageCharges.c)
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
