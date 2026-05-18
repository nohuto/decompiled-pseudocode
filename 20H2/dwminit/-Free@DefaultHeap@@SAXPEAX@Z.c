/*
 * XREFs of ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180004CF8
 * Callers:
 *     ??3@YAXPEAX@Z @ 0x180004D60 (--3@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DefaultHeap::Free(void *lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
