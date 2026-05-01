/*
 * XREFs of sub_1800447C0 @ 0x1800447C0
 * Callers:
 *     sub_180047120 @ 0x180047120 (sub_180047120.c)
 * Callees:
 *     <none>
 */

__int64 *sub_1800447C0()
{
  __int64 *v0; // rdi
  __int64 v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  __int64 *result; // rax

  v0 = (__int64 *)&unk_1800B42D0;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = (void *)v1;
      v1 = *(_QWORD *)(v1 + 8);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *v0 = 0LL;
    result = &qword_1800B4320;
    ++v0;
  }
  while ( v0 != &qword_1800B4320 );
  return result;
}
