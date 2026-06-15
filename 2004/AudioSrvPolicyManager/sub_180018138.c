/*
 * XREFs of sub_180018138 @ 0x180018138
 * Callers:
 *     sub_180014EDC @ 0x180014EDC (sub_180014EDC.c)
 * Callees:
 *     sub_180018B08 @ 0x180018B08 (sub_180018B08.c)
 *     sub_180018D3C @ 0x180018D3C (sub_180018D3C.c)
 *     sub_180018F1C @ 0x180018F1C (sub_180018F1C.c)
 */

int __fastcall sub_180018138(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rbx
  __int64 i; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  HANDLE ProcessHeap; // rax
  int result; // eax
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx

  ++*(_DWORD *)(a1 + 48);
  v2 = *(void **)a1;
  v3 = v2;
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v5 = *((_QWORD *)v2 + i);
      v3 = v2;
      if ( v5 )
      {
        do
        {
          v6 = v5;
          v5 = *(_QWORD *)(v5 + 16);
          sub_180018F1C(a1, v6);
        }
        while ( v5 );
        v2 = *(void **)a1;
        v3 = *(void **)a1;
      }
    }
  }
  ProcessHeap = GetProcessHeap();
  result = HeapFree(ProcessHeap, 0, v3);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v9 = sub_180018D3C(a1, 0LL);
    result = sub_180018B08(a1, v9, 0LL);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v10 = *(_QWORD **)(a1 + 56);
  if ( v10 )
  {
    do
    {
      v11 = (_QWORD *)*v10;
      result = _o_free(v10);
      v10 = v11;
    }
    while ( v11 );
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  --*(_DWORD *)(a1 + 48);
  return result;
}
