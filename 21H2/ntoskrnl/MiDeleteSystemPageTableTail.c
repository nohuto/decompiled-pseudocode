/*
 * XREFs of MiDeleteSystemPageTableTail @ 0x1402B9A70
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnSystemCharges @ 0x1402B9B18 (MiReturnSystemCharges.c)
 *     MiFreeUnmappedPageTables @ 0x1402B9C18 (MiFreeUnmappedPageTables.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 */

__int64 __fastcall MiDeleteSystemPageTableTail(__int64 a1)
{
  unsigned int *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-18h]

  v1 = *(unsigned int **)(a1 + 168);
  v7 = 0LL;
  v3 = *((_QWORD *)v1 + 2);
  v8 = 0LL;
  v9 = 0LL;
  MiFlushTbList(v3);
  v4 = *((_QWORD *)v1 + 1);
  if ( v4 )
  {
    MiFreeUnmappedPageTables(v4, &v7);
    *((_QWORD *)v1 + 1) = 0LL;
    if ( *((_QWORD *)&v8 + 1) )
    {
      if ( qword_140C52B28 )
      {
        v6 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 174LL));
        MiReturnCommit(v6, *((_QWORD *)&v8 + 1) - *((_QWORD *)&v7 + 1));
        MiReturnSystemCharges(v6, *((_QWORD *)&v8 + 1), *v1);
      }
    }
  }
  return 0LL;
}
