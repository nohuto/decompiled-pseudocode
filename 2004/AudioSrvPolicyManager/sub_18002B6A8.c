/*
 * XREFs of sub_18002B6A8 @ 0x18002B6A8
 * Callers:
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18002B6A8(_QWORD *a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *result; // rax

  ProcessHeap = GetProcessHeap();
  result = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( result )
  {
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = off_18003F3E0;
    *((_QWORD *)result + 2) = a2;
  }
  *a1 = a2;
  a1[1] = result;
  return result;
}
