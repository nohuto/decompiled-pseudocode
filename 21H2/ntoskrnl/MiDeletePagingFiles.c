/*
 * XREFs of MiDeletePagingFiles @ 0x1408D06FC
 * Callers:
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     MiShutdownSystem @ 0x1409B0CE8 (MiShutdownSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x1408D05EC (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rcx

  v4 = *(_DWORD *)(a1 + 6936);
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    v8 = (__int64 *)(a1 + 6944);
    v9 = v4;
    do
    {
      v10 = *v8;
      if ( *v8 )
      {
        if ( (*(_BYTE *)(v10 + 204) & 0x50) == 0 )
        {
          v6 += *(_QWORD *)v10;
          v5 += 2LL;
        }
        MiDeletePagefile(v10, 1LL, a3, a4);
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    if ( v5 )
      MiReturnCommit(a1, v5);
  }
  return v6;
}
