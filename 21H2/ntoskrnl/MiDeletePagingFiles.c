/*
 * XREFs of MiDeletePagingFiles @ 0x1408D059C
 * Callers:
 *     MiDeletePartitionResources @ 0x140561918 (MiDeletePartitionResources.c)
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x1408D048C (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 *v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rcx

  v1 = *(_DWORD *)(a1 + 6936);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    v5 = (__int64 *)(a1 + 6944);
    v6 = v1;
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( (*(_BYTE *)(v7 + 204) & 0x50) == 0 )
        {
          v3 += *(_QWORD *)v7;
          v2 += 2LL;
        }
        MiDeletePagefile(v7, 1);
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( v2 )
      MiReturnCommit(a1, v2);
  }
  return v3;
}
