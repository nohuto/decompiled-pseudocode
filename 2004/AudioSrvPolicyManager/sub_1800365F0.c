/*
 * XREFs of sub_1800365F0 @ 0x1800365F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall sub_1800365F0(_BYTE *lpMem, char a2)
{
  bool v2; // zf
  void *v5; // rcx
  HANDLE ProcessHeap; // rax

  v2 = lpMem[16] == 0;
  *(_QWORD *)lpMem = &off_18003F718;
  if ( !v2 )
  {
    v5 = (void *)*((_QWORD *)lpMem + 1);
    if ( v5 )
      HeapDestroy(v5);
  }
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
