/*
 * XREFs of MiSessionLookupImage @ 0x1402DBF3C
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x1402DB994 (MiSessionUpdateImageCharges.c)
 *     MiSessionRemoveImage @ 0x1402DBD88 (MiSessionRemoveImage.c)
 *     MmIsSessionExecutionValid @ 0x1402DBFAC (MmIsSessionExecutionValid.c)
 *     MiSessionReferenceImage @ 0x1402DC164 (MiSessionReferenceImage.c)
 *     MiSharedVaToPartition @ 0x14033D80C (MiSharedVaToPartition.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140761DD8 (MmIsDriverLoadedCurrentSession.c)
 *     MiSessionUnloadAllImages @ 0x140761DF8 (MiSessionUnloadAllImages.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x140761E94 (MiApplyRequiredSessionDriverHotPatches.c)
 *     MiUnloadApproved @ 0x1407623F0 (MiUnloadApproved.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     MiActOnPatchInAllSessions @ 0x140970E00 (MiActOnPatchInAllSessions.c)
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *i; // rdx

  for ( i = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 80); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        return 0LL;
      if ( a1 <= i[6] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( a1 >= (i[5] & 0xFFFFFFFFFFFFFFFCuLL) )
      break;
  }
  return i;
}
