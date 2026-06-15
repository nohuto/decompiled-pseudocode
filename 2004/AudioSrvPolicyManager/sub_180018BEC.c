/*
 * XREFs of sub_180018BEC @ 0x180018BEC
 * Callers:
 *     sub_180018DD8 @ 0x180018DD8 (sub_180018DD8.c)
 *     sub_180018F1C @ 0x180018F1C (sub_180018F1C.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180018B08 @ 0x180018B08 (sub_180018B08.c)
 *     sub_180018D3C @ 0x180018D3C (sub_180018D3C.c)
 *     sub_180018FD4 @ 0x180018FD4 (sub_180018FD4.c)
 *     memset @ 0x18003A7D8 (memset.c)
 */

void __fastcall sub_180018BEC(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  SIZE_T v4; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  __int64 i; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  void *v12; // rbx
  HANDLE v13; // rax

  v2 = a2;
  if ( !a2 )
    v2 = sub_180018D3C(a1, *(_QWORD *)(a1 + 8));
  if ( v2 != *(_DWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
    {
      v4 = 8LL * v2;
      if ( !is_mul_ok(v2, 8uLL) )
        v4 = -1LL;
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 0, v4);
      v7 = v6;
      if ( !v6 )
        sub_18000A174(-2147024882);
      memset(v6, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
        if ( v9 )
        {
          do
          {
            v10 = *(_QWORD *)(v9 + 16);
            v11 = *(_DWORD *)(v9 + 24) % v2;
            *(_QWORD *)(v9 + 16) = v7[v11];
            v7[(unsigned int)v11] = v9;
            v9 = v10;
          }
          while ( v10 );
        }
      }
      v12 = *(void **)a1;
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v12);
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 16) = v2;
      sub_180018FD4(a1);
    }
    else
    {
      sub_180018B08(a1, v2, 0);
    }
  }
}
