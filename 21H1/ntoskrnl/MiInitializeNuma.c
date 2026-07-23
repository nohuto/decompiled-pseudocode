/*
 * XREFs of MiInitializeNuma @ 0x1403AD7D4
 * Callers:
 *     MiInitializePartition @ 0x140783F50 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x1402C1F70 (InitializeSListHead.c)
 *     MiInitializeChannelOrdering @ 0x1407845F0 (MiInitializeChannelOrdering.c)
 */

void __fastcall MiInitializeNuma(ULONG_PTR *a1)
{
  ULONG_PTR v1; // rdi
  PSLIST_HEADER v3; // rbp
  unsigned int i; // ebx
  int v5; // esi
  int *v6; // r14
  _SLIST_HEADER *v7; // r15
  int v8; // eax
  unsigned int v9; // edx
  _DWORD *v10; // r8
  unsigned __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r8

  v1 = a1[2];
  v3 = SListHead;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; v3 += 11 )
  {
    *(_DWORD *)(v1 + 4212) = i;
    *(_BYTE *)(v1 + 3248) = 8;
    *(_BYTE *)(v1 + 3250) = 8;
    *(_QWORD *)(v1 + 4296) = 0LL;
    *(_QWORD *)(v1 + 4328) = 0LL;
    *(_DWORD *)(v1 + 4208) = i << byte_140C4DDCC;
    if ( a1 == &MiSystemPartition )
    {
      v5 = 0;
      v6 = (int *)&v3[1];
      v7 = v3;
      do
      {
        InitializeSListHead(v7);
        v8 = -(v5++ != 1);
        v7 += 2;
        *v6 = v8 & 5;
        v6 += 8;
      }
      while ( v5 < 2 );
    }
    MiInitializeChannelOrdering(a1, i);
    v9 = 0;
    v10 = (_DWORD *)(v1 + 4032);
    do
    {
      *v10 = dword_140C4DE38 + 1;
      v10 += 4;
      v11 = (unsigned __int64)(v9++ << 8) >> 5;
      *((_QWORD *)v10 - 1) = v1 + 4 * (v11 + 1016);
    }
    while ( v9 < 2 );
    v12 = (_QWORD *)(v1 + 3264);
    v13 = 8LL;
    do
    {
      v14 = v12;
      v15 = 4LL;
      do
      {
        *(v14 - 1) = 0LL;
        *v14 = 0xFFFFFFFFFLL;
        v14[1] = 0xFFFFFFFFFLL;
        v14 += 24;
        --v15;
      }
      while ( v15 );
      v12 += 3;
      --v13;
    }
    while ( v13 );
    ++i;
    v1 += 4544LL;
  }
}
