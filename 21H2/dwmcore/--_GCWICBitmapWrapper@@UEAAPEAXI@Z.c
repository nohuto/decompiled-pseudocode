/*
 * XREFs of ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x18003D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmap@@UEAA@XZ @ 0x18003CDF4 (--1CBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

CWICBitmapWrapper *__fastcall CWICBitmapWrapper::`scalar deleting destructor'(CWICBitmapWrapper *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 33);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x130uLL);
  return this;
}
