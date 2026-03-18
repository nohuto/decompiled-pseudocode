/*
 * XREFs of ??1CCustomBlur@@MEAA@XZ @ 0x1800D879C
 * Callers:
 *     ??_ECCustomBlur@@MEAAPEAXI@Z @ 0x1800D8760 (--_ECCustomBlur@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C5020 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCustomBlur::~CCustomBlur(CCustomBlur *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CCustomBlur::`vftable';
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 3);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
