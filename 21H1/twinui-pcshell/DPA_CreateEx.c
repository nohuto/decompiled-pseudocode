/*
 * XREFs of DPA_CreateEx @ 0x180464100
 * Callers:
 *     DPA_Clone @ 0x180464060 (DPA_Clone.c)
 *     DPA_Create @ 0x1804640F0 (DPA_Create.c)
 * Callees:
 *     <none>
 */

HDPA __stdcall DPA_CreateEx(int cpGrow, HANDLE hheap)
{
  HANDLE ProcessHeap; // rbx
  int v4; // edi
  HDPA result; // rax

  ProcessHeap = hheap;
  if ( !hheap )
    ProcessHeap = GetProcessHeap();
  v4 = 8;
  result = (HDPA)HeapAlloc(ProcessHeap, 8u, 0x20uLL);
  if ( result )
  {
    *((_QWORD *)result + 2) = ProcessHeap;
    if ( cpGrow >= 8 )
      v4 = cpGrow;
    *((_DWORD *)result + 7) = v4;
  }
  return result;
}
