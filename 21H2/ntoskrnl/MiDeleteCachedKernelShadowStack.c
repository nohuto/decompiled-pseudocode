/*
 * XREFs of MiDeleteCachedKernelShadowStack @ 0x1405A50AC
 * Callers:
 *     MiAdjustCachedStacks @ 0x140268E74 (MiAdjustCachedStacks.c)
 *     MiPruneCachedStackList @ 0x1402690B4 (MiPruneCachedStackList.c)
 *     MiEmptyKernelStackCache @ 0x1405A54BC (MiEmptyKernelStackCache.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1405A57F0 (MiRemoveNonIdealCachedStacks.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCachedKernelShadowStack(union _SLIST_HEADER *a1, struct _SLIST_ENTRY *a2, int a3)
{
  PSLIST_ENTRY result; // rax

  result = (PSLIST_ENTRY)MiDeleteKernelShadowStack((((unsigned __int64)a2[1].Next >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
  if ( a3 )
    return RtlpInterlockedPushEntrySList(a1 + 28, a2);
  return result;
}
