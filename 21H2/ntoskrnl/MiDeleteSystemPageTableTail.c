/*
 * XREFs of MiDeleteSystemPageTableTail @ 0x140237C80
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnSystemCharges @ 0x140237D28 (MiReturnSystemCharges.c)
 *     MiFreeUnmappedPageTables @ 0x140237E28 (MiFreeUnmappedPageTables.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 */

__int64 __fastcall MiDeleteSystemPageTableTail(__int64 a1)
{
  unsigned int *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+40h] [rbp-18h]

  v1 = *(unsigned int **)(a1 + 168);
  v9 = 0LL;
  v3 = *((_QWORD *)v1 + 2);
  v10 = 0LL;
  v11 = 0LL;
  MiFlushTbList(v3);
  v4 = *((_QWORD *)v1 + 1);
  if ( v4 )
  {
    MiFreeUnmappedPageTables(v4, &v9);
    *((_QWORD *)v1 + 1) = 0LL;
    if ( *((_QWORD *)&v10 + 1) )
    {
      if ( qword_140C52B68 )
      {
        v8 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 174LL));
        MiReturnCommit(v8, *((_QWORD *)&v10 + 1) - *((_QWORD *)&v9 + 1), v6, v7);
        MiReturnSystemCharges(v8, *((_QWORD *)&v10 + 1), *v1);
      }
    }
  }
  return 0LL;
}
