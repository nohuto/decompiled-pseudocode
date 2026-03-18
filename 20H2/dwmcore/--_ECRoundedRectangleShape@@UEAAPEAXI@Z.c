/*
 * XREFs of ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x18001EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180018F20 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::`vector deleting destructor'(
        CRoundedRectangleShape *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 9);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
