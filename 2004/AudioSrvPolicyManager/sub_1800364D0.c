/*
 * XREFs of sub_1800364D0 @ 0x1800364D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800364D0(_QWORD *lpMem, char a2)
{
  HANDLE ProcessHeap; // rax

  *lpMem = &off_18003F6E8;
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
