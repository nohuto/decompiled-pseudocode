/*
 * XREFs of CmpLightWeightCreateModificationData @ 0x14087C13C
 * Callers:
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087C2E4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087C540 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087C6F4 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14087BA30 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14087C20C (CmpLightWeightDuplicateParentLists.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14087CC68 (CmpLightWeightUpdateModificationActions.c)
 */

__int64 __fastcall CmpLightWeightCreateModificationData(
        __int64 a1,
        unsigned int **a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  ULONG_PTR v6; // rbp
  unsigned int *TransientPoolWithTag; // rax
  unsigned int *v8; // rbx
  int updated; // edi

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  TransientPoolWithTag = (unsigned int *)CmpAllocateTransientPoolWithTag(PagedPool, 0x14uLL, 0x77554D43u, a4);
  v8 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    *(_QWORD *)TransientPoolWithTag = 0LL;
    TransientPoolWithTag[2] = 0;
    ++*TransientPoolWithTag;
    TransientPoolWithTag[3] = -1;
    TransientPoolWithTag[4] = -1;
    updated = CmpLightWeightDuplicateParentLists(v6);
    if ( updated >= 0 )
    {
      updated = CmpLightWeightUpdateModificationActions(
                  v8,
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL),
                  *(_QWORD *)(a1 + 56));
      if ( updated >= 0 )
      {
        updated = 0;
        *a2 = v8;
        v8 = 0LL;
      }
    }
    if ( v8 )
      CmpLightWeightCleanupModifyKeyDataUoW(v6, v8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)updated;
}
