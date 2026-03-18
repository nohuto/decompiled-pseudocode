/*
 * XREFs of CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140872F34
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x140721608 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087C540 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407217C8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x140872FE0 (CmpPrepareDiscardReplacePost.c)
 */

__int64 __fastcall CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  CmpInitializeDelayDerefContext(&v7);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = a1;
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpPrepareDiscardReplacePost,
    (__int64)&v7,
    v4,
    1,
    0);
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 >= 0 )
  {
    CmpPrepareDiscardReplacePost(a1, &v7, a2);
    v5 = 0;
    if ( *(int *)(a2 + 8) < 0 )
      v5 = *(_DWORD *)(a2 + 8);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v7);
  return (unsigned int)v5;
}
