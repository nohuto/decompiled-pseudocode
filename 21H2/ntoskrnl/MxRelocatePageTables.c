/*
 * XREFs of MxRelocatePageTables @ 0x140A57734
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiIncrementPfn @ 0x1403A7A5C (MiIncrementPfn.c)
 *     MxMovePageTables @ 0x140A579B4 (MxMovePageTables.c)
 *     MxSwapPages @ 0x140A58120 (MxSwapPages.c)
 */

__int64 __fastcall MxRelocatePageTables(int a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  MiInitializePageColorBase(0LL, 0, (__int64)&v13);
  v2 = 0xFFFFF6C000000000uLL;
  v3 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 3LL;
  do
  {
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  if ( v2 < v3 )
    MxMovePageTables(v2, v3 - 8, 3, a1, (__int64)&v13);
  v5 = (((unsigned __int64)(MmPfnDatabase + (MxPfnAllocation << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FFFFFFFFF8uLL;
  v7 = 3LL;
  do
  {
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  if ( v5 < v6 )
    MxMovePageTables(v5 + 8, v6, 3, a1, (__int64)&v13);
  MxSwapPages(&v13, 0xFFFFF6FBC0000000uLL);
  v14 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FBC0000000uLL);
  v8 = v14;
  if ( MiPteInShadowRange((unsigned __int64)&v14)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink && ((__int64)*(&Flink->Flink + (((unsigned __int64)&v14 >> 3) & 0x1FF)) & 0x20) != 0 )
      v8 |= 0x20uLL;
  }
  return MiIncrementPfn(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, (__int64)Flink, v10, v11);
}
