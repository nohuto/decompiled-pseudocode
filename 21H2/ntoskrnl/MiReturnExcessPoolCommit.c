/*
 * XREFs of MiReturnExcessPoolCommit @ 0x14030B894
 * Callers:
 *     MiCommitPoolMemory @ 0x14030B22C (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x140296934 (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x140296DB0 (MiReturnPoolCharges.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiFreeLargePageChain @ 0x140556A50 (MiFreeLargePageChain.c)
 */

void __fastcall MiReturnExcessPoolCommit(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int128 v12; // [rsp+40h] [rbp-18h]

  v1 = *(_WORD *)(a1 + 78);
  if ( (v1 & 2) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 8);
    if ( v3 != v4 )
      MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 174LL)), v4 - v3);
  }
  else if ( (v1 & 4) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
      MiFreeLargePageChain(v5);
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v6 != v7 )
    {
      v10 = 0LL;
      v11 = v7 - v6;
      v9 = (unsigned __int64)(v7 - v6);
      v12 = 0LL;
      MiReturnPoolCharges((unsigned __int64 *)&v9, 0);
    }
  }
  else if ( (v1 & 0x100) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 )
      MiReturnPhysicalPoolPages(v8, 0);
  }
}
