/*
 * XREFs of CmpSubtreeEnumeratorCleanup @ 0x140715A40
 * Callers:
 *     CmpPromoteSubtree @ 0x140715408 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140715950 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackCleanup @ 0x1406C8C10 (CmpKeyEnumStackCleanup.c)
 *     CmpCleanupKeyNodeStack @ 0x1406C8D18 (CmpCleanupKeyNodeStack.c)
 */

void __fastcall CmpSubtreeEnumeratorCleanup(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  struct _PRIVILEGE_SET *v5; // rcx

  if ( *(_QWORD *)(a1 + 96) )
  {
    v2 = 0LL;
    v3 = 512LL;
    do
    {
      v4 = *(_QWORD *)(a1 + 96);
      v5 = *(struct _PRIVILEGE_SET **)(v2 + v4 + 48);
      if ( v5 )
        CmSiFreeMemory(v5);
      CmpKeyEnumStackCleanup(v2 + v4 + 56);
      v2 += 408LL;
      --v3;
    }
    while ( v3 );
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 96));
  }
  CmpCleanupKeyNodeStack(a1 + 16);
}
