/*
 * XREFs of sub_180037130 @ 0x180037130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180037130(_QWORD *lpMem, char a2)
{
  HANDLE ProcessHeap; // rax

  *lpMem = &off_18003F7D0;
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
