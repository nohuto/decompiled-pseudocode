/*
 * XREFs of MiWalkResetCommitPte @ 0x14052CE30
 * Callers:
 *     <none>
 * Callees:
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiWalkResetCommitPte(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbx
  __int64 v7; // r8

  if ( !a3 && (MI_READ_PTE_LOCK_FREE(a2) & 0xC01) == 0x800 )
  {
    v5 = MiLockTransitionLeafPage(a2, 0LL);
    v6 = v5;
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 && (*(_DWORD *)(v5 + 16) & 4) == 0 && !*(_WORD *)(v5 + 32) )
      {
        MiUnlinkPageFromList(v5, 0);
        MiDiscardTransitionPteEx(v6, 0, v7);
        ++**(_QWORD **)(a1 + 168);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
