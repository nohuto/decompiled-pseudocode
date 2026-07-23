/*
 * XREFs of MiInitializePageFaultResources @ 0x1403CA918
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiAllocateInPageSupportBlock @ 0x14024777C (MiAllocateInPageSupportBlock.c)
 *     InitializeSListHead @ 0x1402A3310 (InitializeSListHead.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiInsertInPageBlock @ 0x1403076AC (MiInsertInPageBlock.c)
 */

__int64 MiInitializePageFaultResources()
{
  int v0; // edi
  __int64 i; // rsi
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned int *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  ULONG_PTR v12; // rax

  v0 = 0;
  for ( i = 0LL; ; ++i )
  {
    v2 = 2LL * v0;
    InitializeSListHead((PSLIST_HEADER)&MiState[v2 + 1154]);
    InitializeSListHead((PSLIST_HEADER)&MiState[v2 + 1158]);
    v3 = v0 != 0 ? 16 : 8;
    *((_BYTE *)&MiState[1162] + i) = v0 != 0 ? 16 : 8;
    v6 = MiAllocateInPageSupportBlock(v0, v3, v4, v5);
    if ( !v6 )
      break;
    MiState[i + 1163] = v6;
    v7 = (-(__int64)(v0 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368;
    MiState[i + 1165] = v6 + v7 * v3;
    v8 = (unsigned int *)(v6 + 192);
    do
    {
      v9 = *v8 | 0x40;
      if ( i )
        v9 = *v8 & 0xFFFFFFBF;
      *v8 = v9;
      MiInsertInPageBlock((PSLIST_ENTRY)v8 - 12);
      v8 = (unsigned int *)((char *)v8 + v7);
      --v3;
    }
    while ( v3 );
    if ( ++v0 >= 2 )
    {
      v12 = MiReservePtes((__int64)&qword_140C4EF80, 0x10u, v10, v11);
      if ( v12 )
      {
        qword_140C4ED80 = 0LL;
        qword_140C4ED78 = v12;
        return 1LL;
      }
      return 0LL;
    }
  }
  return 0LL;
}
