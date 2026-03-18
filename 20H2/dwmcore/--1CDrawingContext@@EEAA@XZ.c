/*
 * XREFs of ??1CDrawingContext@@EEAA@XZ @ 0x18004AED4
 * Callers:
 *     ??_ECDrawingContext@@EEAAPEAXI@Z @ 0x18004AE90 (--_ECDrawingContext@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800630A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800642F0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18006DC90 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180098994 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180098C48 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(CDrawingContext *this)
{
  CD3DDevice *v2; // rcx

  *(_QWORD *)this = &CDrawingContext::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 3) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  CDrawingContext::PopAllStacks(this);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawingContext *)((char *)this + 3616));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 3576);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 3544);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 3512);
  operator delete(*((void **)this + 433));
  operator delete(*((void **)this + 418));
  operator delete(*((void **)this + 410));
  operator delete(*((void **)this + 406));
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 936));
  operator delete(*((void **)this + 402));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 1808);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 936);
  operator delete(*((void **)this + 115));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 840);
  CLightStack::~CLightStack((CDrawingContext *)((char *)this + 600));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 536);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 472);
  operator delete(*((void **)this + 57));
  operator delete(*((void **)this + 53));
  operator delete(*((void **)this + 49));
  v2 = (CD3DDevice *)*((_QWORD *)this + 5);
  if ( v2 )
    CD3DDevice::Release(v2);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((char *)this + 32);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
