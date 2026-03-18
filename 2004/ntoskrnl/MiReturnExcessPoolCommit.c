/*
 * XREFs of MiReturnExcessPoolCommit @ 0x140258A84
 * Callers:
 *     MiCommitPoolMemory @ 0x1402586AC (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiReturnPoolCharges @ 0x14026B470 (MiReturnPoolCharges.c)
 *     MiReturnPhysicalPoolPages @ 0x14032E1F4 (MiReturnPhysicalPoolPages.c)
 *     MiFreeLargePageChain @ 0x1405515B0 (MiFreeLargePageChain.c)
 */

void __fastcall MiReturnExcessPoolCommit(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int128 v11; // [rsp+40h] [rbp-18h]

  v1 = *(_WORD *)(a1 + 78);
  if ( (v1 & 2) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 8);
    if ( v3 != v4 )
      MiReturnCommit(*(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 174LL)), v4 - v3);
  }
  else if ( (v1 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 16) )
      MiFreeLargePageChain();
    v5 = *(_QWORD *)(a1 + 24);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v5 != v6 )
    {
      v9 = 0LL;
      v10 = v6 - v5;
      v8 = (unsigned __int64)(v6 - v5);
      v11 = 0LL;
      MiReturnPoolCharges(&v8, 0LL);
    }
  }
  else if ( (v1 & 0x100) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 )
      MiReturnPhysicalPoolPages(v7, 0LL);
  }
}
