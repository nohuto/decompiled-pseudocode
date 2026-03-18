/*
 * XREFs of MiDeleteSystemPageTableTail @ 0x140316970
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiReturnSystemCharges @ 0x140316A18 (MiReturnSystemCharges.c)
 *     MiFreeUnmappedPageTables @ 0x140316B18 (MiFreeUnmappedPageTables.c)
 */

__int64 __fastcall MiDeleteSystemPageTableTail(__int64 a1, _KPROCESS *a2)
{
  unsigned int *v2; // rdi
  unsigned int *v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-18h]

  v2 = *(unsigned int **)(a1 + 168);
  v8 = 0LL;
  v4 = (unsigned int *)*((_QWORD *)v2 + 2);
  v9 = 0LL;
  v10 = 0LL;
  MiFlushTbList(v4, a2);
  v5 = *((_QWORD *)v2 + 1);
  if ( v5 )
  {
    MiFreeUnmappedPageTables(v5, &v8);
    *((_QWORD *)v2 + 1) = 0LL;
    if ( *((_QWORD *)&v9 + 1) )
    {
      if ( qword_140C529A8 )
      {
        v7 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 174LL));
        MiReturnCommit(v7, *((_QWORD *)&v9 + 1) - *((_QWORD *)&v8 + 1));
        MiReturnSystemCharges(v7, *((_QWORD *)&v9 + 1), *v2);
      }
    }
  }
  return 0LL;
}
