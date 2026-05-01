/*
 * XREFs of sub_1800470C0 @ 0x1800470C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1800470C0()
{
  char *v0; // rdi
  _QWORD *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax

  v0 = (char *)&unk_18005AE30;
  do
  {
    v1 = *(_QWORD **)v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[1];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *(_QWORD *)v0 = 0LL;
    v0 += 8;
  }
  while ( v0 != &byte_18005AE80 );
}
