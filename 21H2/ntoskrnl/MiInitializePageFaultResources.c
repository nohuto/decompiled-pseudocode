/*
 * XREFs of MiInitializePageFaultResources @ 0x1403B7B80
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiAllocateInPageSupportBlock @ 0x140251B4C (MiAllocateInPageSupportBlock.c)
 *     MiInsertInPageBlock @ 0x1402745EC (MiInsertInPageBlock.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 */

__int64 MiInitializePageFaultResources()
{
  unsigned int v0; // esi
  __int64 i; // rdi
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned int *v6; // rbx
  unsigned int v7; // ecx
  ULONG_PTR v8; // rax

  v0 = 0;
  for ( i = 0LL; ; ++i )
  {
    v2 = 2LL * v0;
    InitializeSListHead((PSLIST_HEADER)&MiState[v2 + 2100]);
    InitializeSListHead((PSLIST_HEADER)&MiState[v2 + 2104]);
    v3 = v0 != 0 ? 16 : 8;
    *((_BYTE *)&MiState[2108] + i) = v0 != 0 ? 16 : 8;
    v4 = MiAllocateInPageSupportBlock(v0, v3);
    if ( !v4 )
      break;
    MiState[i + 2109] = v4;
    v5 = (-(__int64)(v0 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368;
    MiState[i + 2111] = v4 + v5 * v3;
    v6 = (unsigned int *)(v4 + 192);
    do
    {
      v7 = *v6 | 0x40;
      if ( i )
        v7 = *v6 & 0xFFFFFFBF;
      *v6 = v7;
      MiInsertInPageBlock((PSLIST_ENTRY)v6 - 12);
      v6 = (unsigned int *)((char *)v6 + v5);
      --v3;
    }
    while ( v3 );
    if ( (int)++v0 >= 2 )
    {
      v8 = MiReservePtes((__int64)&qword_140C534C0, 0x10u);
      if ( v8 )
      {
        qword_140C53250 = 0LL;
        qword_140C53248 = v8;
        return 1LL;
      }
      return 0LL;
    }
  }
  return 0LL;
}
