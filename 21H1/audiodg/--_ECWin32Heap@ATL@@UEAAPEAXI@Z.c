/*
 * XREFs of ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x140045D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWin32Heap@ATL@@UEAA@XZ @ 0x14001C4CC (--1CWin32Heap@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001C8EC (--3@YAXPEAX@Z.c)
 */

ATL::CWin32Heap *__fastcall ATL::CWin32Heap::`vector deleting destructor'(ATL::CWin32Heap *this, char a2)
{
  ATL::CWin32Heap::~CWin32Heap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
