/*
 * XREFs of MiSessionLookupImage @ 0x14032DA58
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiSharedVaToPartition @ 0x14028EF98 (MiSharedVaToPartition.c)
 *     MmIsSessionExecutionValid @ 0x14032D9B0 (MmIsSessionExecutionValid.c)
 *     MiSessionRemoveImage @ 0x14038A8A8 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x14039EFC0 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x1403A70B4 (MiSessionReferenceImage.c)
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 *     MiUnloadApproved @ 0x14076DD68 (MiUnloadApproved.c)
 *     MiSessionUnloadAllImages @ 0x14077462C (MiSessionUnloadAllImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14078A488 (MmIsDriverLoadedCurrentSession.c)
 *     MmEnumerateSystemImages @ 0x14078DA30 (MmEnumerateSystemImages.c)
 *     MiSessionApplyNonPagedImageCharges @ 0x1408DD19C (MiSessionApplyNonPagedImageCharges.c)
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
