/*
 * XREFs of ??1CWin32Heap@ATL@@UEAA@XZ @ 0x180069CE8
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for__g_strheap__ @ 0x18007DA00 (ATL--_dynamic_atexit_destructor_for__g_strheap__.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x180133020 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CWin32Heap::~CWin32Heap(ATL::CWin32Heap *this)
{
  bool v1; // zf
  void *v2; // rcx

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &ATL::CWin32Heap::`vftable';
  if ( !v1 )
  {
    v2 = (void *)*((_QWORD *)this + 1);
    if ( v2 )
      HeapDestroy(v2);
  }
}
