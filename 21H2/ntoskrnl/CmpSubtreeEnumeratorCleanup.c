/*
 * XREFs of CmpSubtreeEnumeratorCleanup @ 0x14065C63C
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14065B6A0 (CmpPromoteSubtree.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpKeyEnumStackCleanup @ 0x14069F024 (CmpKeyEnumStackCleanup.c)
 *     CmpCleanupKeyNodeStack @ 0x14069F150 (CmpCleanupKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorCleanup(__int64 a1)
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
  return CmpCleanupKeyNodeStack(a1 + 16);
}
