/*
 * XREFs of MiGetNodeChannelPageCounts @ 0x1402747D0
 * Callers:
 *     MiGetChannelInformation @ 0x14067D1AC (MiGetChannelInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall MiGetNodeChannelPageCounts(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  unsigned int v7; // r10d
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r14
  __int64 *v10; // r8
  __int64 v11; // r11
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 *v19; // r9
  _QWORD *v20; // r8
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r11d
  unsigned __int64 v25; // r9
  __int64 v26; // r8
  unsigned int v27; // ebp
  _QWORD *v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 *result; // rax

  v7 = a3;
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 4544LL * a2);
  if ( a3 == 4 )
    v9 = v8[522];
  else
    v9 = v8[a3 + 518];
  do
  {
    if ( MmNumberOfChannels == 1 || v7 == 4 )
    {
      v12 = v8[516];
      v19 = MiLargePageSizes;
      v14 = v8[517];
      v20 = v8;
      v21 = 3LL;
      do
      {
        v22 = *v19++;
        v23 = *v20 * v22;
        v20 += 134;
        v12 += v23;
        v14 += v22 * *(v20 - 133);
        --v21;
      }
      while ( v21 );
    }
    else
    {
      v10 = MiLargePageSizes;
      v11 = 3LL;
      v12 = v8[2 * v7 + 527];
      v13 = (__int64)&v8[4 * v7 + 6];
      v14 = v8[2 * v7 + 528];
      do
      {
        v15 = *v10;
        v16 = (_QWORD *)v13;
        v17 = 4LL;
        do
        {
          v18 = *v16 + v16[32];
          ++v16;
          v12 += v15 * v18;
          v14 += v15 * (v16[15] + v16[47]);
          --v17;
        }
        while ( v17 );
        ++v10;
        v13 += 1072LL;
        --v11;
      }
      while ( v11 );
    }
    v24 = MmNumberOfChannels;
    v25 = 0LL;
    if ( v7 != 4 )
      v24 = v7 + 1;
    v26 = 0LL;
    if ( v7 != 4 )
      v26 = v7;
    v7 = v26;
LABEL_23:
    if ( (_DWORD)v26 != v24 )
    {
      v27 = 0;
      v28 = &v8[24 * v26 + 407];
      while ( 1 )
      {
        v29 = v25 + *v28;
        if ( v29 < v25 || v29 == -1LL )
          break;
        ++v27;
        v28 += 3;
        v25 = v29;
        if ( v27 >= 8 )
        {
          v26 = (unsigned int)(v26 + 1);
          goto LABEL_23;
        }
      }
      v25 = -2LL;
    }
  }
  while ( v14 + v25 + v12 > v9 );
  *a4 = v12;
  *a5 = v14;
  result = a6;
  *a6 = v25;
  return result;
}
