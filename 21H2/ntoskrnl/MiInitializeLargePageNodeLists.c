/*
 * XREFs of MiInitializeLargePageNodeLists @ 0x14079CF1C
 * Callers:
 *     MiInitializePartition @ 0x14079C85C (MiInitializePartition.c)
 * Callees:
 *     MiInitializeColorTable @ 0x1403B0E8C (MiInitializeColorTable.c)
 */

__int64 __fastcall MiInitializeLargePageNodeLists(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  __int64 result; // rax
  _DWORD *v4; // rsi
  int *v5; // rdx
  __int64 v6; // r10
  _QWORD *v7; // r8
  __int64 v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // rcx

  v1 = *(_QWORD **)(a1 + 5096);
  v2 = 0;
  result = 0LL;
  if ( dword_140C4E620 )
  {
    do
    {
      v1[1] = v1;
      result = (unsigned int)(result + 1);
      *v1 = v1;
      v1 += 3;
    }
    while ( (unsigned int)result < dword_140C4E620 );
    v1 = *(_QWORD **)(a1 + 5096);
  }
  if ( KeNumberNodes )
  {
    v4 = (_DWORD *)(*(_QWORD *)(a1 + 16) + 4336LL);
    do
    {
      v5 = dword_140C4DFC0;
      v6 = 3LL;
      v7 = v4 - 944;
      do
      {
        v8 = 2LL;
        v9 = v7;
        v10 = 24LL * (unsigned int)*v5;
        do
        {
          v11 = 2LL;
          do
          {
            v12 = 4LL;
            do
            {
              v13 = 4LL;
              do
              {
                *v9 = v1;
                v1 = (_QWORD *)((char *)v1 + v10);
                ++v9;
                --v13;
              }
              while ( v13 );
              --v12;
            }
            while ( v12 );
            --v11;
          }
          while ( v11 );
          --v8;
        }
        while ( v8 );
        ++v5;
        v7 += 134;
        --v6;
      }
      while ( v6 );
      MiInitializeColorTable(v4, v2);
      result = (unsigned __int16)KeNumberNodes;
      v4 += 1136;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
