/*
 * XREFs of ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x140050590
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWin32Heap@ATL@@UEAA@XZ @ 0x14001C7FC (--1CWin32Heap@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001CC5C (--3@YAXPEAX@Z.c)
 */

ATL::CWin32Heap *__fastcall ATL::CWin32Heap::`vector deleting destructor'(ATL::CWin32Heap *this, char a2)
{
  ATL::CWin32Heap::~CWin32Heap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
