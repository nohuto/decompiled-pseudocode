/*
 * XREFs of ExpGetPoolTagInfoTarget @ 0x1402141E0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall ExpGetPoolTagInfoTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  __int64 *v9; // r9
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  signed __int32 v14; // ebp
  unsigned int v15; // ebx
  __int64 result; // rax
  _QWORD *i; // rax
  int v18; // [rsp+58h] [rbp+10h] BYREF
  int j; // [rsp+68h] [rbp+20h] BYREF

  v18 = 0;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v18);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
    memmove(*(void **)a2, ExPoolTagTables, 56LL * *(_QWORD *)(a2 + 8));
    v9 = (__int64 *)&unk_140C16BA8;
    v10 = 1279LL;
    v11 = *(_QWORD *)a2 + 56LL * *(_QWORD *)(a2 + 8);
    do
    {
      v12 = *v9;
      if ( *v9 )
      {
        for ( i = *(_QWORD **)a2; i != (_QWORD *)v11; v12 += 56LL )
        {
          if ( *(_DWORD *)v12 )
          {
            i[2] += *(_QWORD *)(v12 + 16);
            i[3] += *(_QWORD *)(v12 + 24);
            i[1] += *(_QWORD *)(v12 + 8);
            i[5] += *(_QWORD *)(v12 + 40);
            i[6] += *(_QWORD *)(v12 + 48);
            i[4] += *(_QWORD *)(v12 + 32);
          }
          i += 7;
        }
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    v13 = *(_QWORD *)(a2 + 24);
    if ( v13 )
      memmove(*(void **)(a2 + 16), PoolTrackTableExpansion, 56 * v13);
  }
  v14 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v15 = ~v14 & 0x80000000;
  if ( (v14 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v15 )
        break;
    }
  }
  else
  {
    result = v15 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
