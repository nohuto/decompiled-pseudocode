/*
 * XREFs of sub_18003D0C0 @ 0x18003D0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_18003D0C0()
{
  int *v0; // rdi
  _QWORD *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax

  v0 = (int *)&unk_180050030;
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
    v0 += 2;
  }
  while ( v0 != &dword_180050080 );
}
