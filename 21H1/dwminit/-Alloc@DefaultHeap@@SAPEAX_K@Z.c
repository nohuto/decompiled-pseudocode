/*
 * XREFs of ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180004CC8
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180004D34 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall DefaultHeap::Alloc()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, 0x40uLL);
}
