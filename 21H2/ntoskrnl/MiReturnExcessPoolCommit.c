/*
 * XREFs of MiReturnExcessPoolCommit @ 0x1403165E4
 * Callers:
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x14021B214 (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x140273E90 (MiReturnPoolCharges.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiFreeLargePageChain @ 0x140556C90 (MiFreeLargePageChain.c)
 */

void __fastcall MiReturnExcessPoolCommit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int128 v16; // [rsp+40h] [rbp-18h]

  v4 = *(_WORD *)(a1 + 78);
  if ( (v4 & 2) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v6 != v7 )
    {
      v12 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 174LL);
      MiReturnCommit(*(_QWORD *)(qword_140C4E688 + 8 * v12), v7 - v6, v12, a4);
    }
  }
  else if ( (v4 & 4) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 )
      MiFreeLargePageChain(v8);
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_QWORD *)(a1 + 8);
    if ( v9 != v10 )
    {
      v14 = 0LL;
      v15 = v10 - v9;
      v13 = (unsigned __int64)(v10 - v9);
      v16 = 0LL;
      MiReturnPoolCharges((unsigned __int64 *)&v13, 0);
    }
  }
  else if ( (v4 & 0x100) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 )
      MiReturnPhysicalPoolPages(v11, 0);
  }
}
