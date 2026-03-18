/*
 * XREFs of MiInitializeLargePageNodeLists @ 0x14081DB50
 * Callers:
 *     MiInitializePartition @ 0x14081D450 (MiInitializePartition.c)
 * Callees:
 *     MiInitializeColorTable @ 0x14025BFE0 (MiInitializeColorTable.c)
 */

__int64 __fastcall MiInitializeLargePageNodeLists(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 result; // rax
  _DWORD *v5; // r14
  int *v6; // rdx
  __int64 v7; // r10
  _QWORD *v8; // r8
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rcx
  _DWORD *v15; // rsi
  __int64 v16; // rbp

  v1 = *(_QWORD **)(a1 + 15848);
  v2 = 0;
  v3 = 0;
  if ( dword_140C51E60 )
  {
    do
    {
      v1[1] = v1;
      ++v3;
      *v1 = v1;
      v1 += 3;
    }
    while ( v3 < dword_140C51E60 );
    v1 = *(_QWORD **)(a1 + 15848);
  }
  result = *(_QWORD *)(a1 + 16);
  if ( KeNumberNodes )
  {
    v5 = (_DWORD *)(result + 22852);
    do
    {
      v6 = dword_140C507C0;
      v7 = 3LL;
      v8 = v5 - 5573;
      do
      {
        v9 = 2LL;
        v10 = v8;
        v11 = 24LL * (unsigned int)*v6;
        do
        {
          v12 = 2LL;
          do
          {
            v13 = 4LL;
            do
            {
              v14 = 4LL;
              do
              {
                *v10 = v1;
                v1 = (_QWORD *)((char *)v1 + v11);
                ++v10;
                --v14;
              }
              while ( v14 );
              --v13;
            }
            while ( v13 );
            --v12;
          }
          while ( v12 );
          --v9;
        }
        while ( v9 );
        ++v6;
        v8 += 134;
        --v7;
      }
      while ( v7 );
      v15 = v5;
      v16 = 3LL;
      do
      {
        MiInitializeColorTable(v15, v2);
        v15 += 4;
        --v16;
      }
      while ( v16 );
      result = (unsigned __int16)KeNumberNodes;
      v5 += 6128;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
