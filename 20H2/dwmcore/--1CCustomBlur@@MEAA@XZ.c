/*
 * XREFs of ??1CCustomBlur@@MEAA@XZ @ 0x1800D7FEC
 * Callers:
 *     ??_ECCustomBlur@@MEAAPEAXI@Z @ 0x1800D7FB0 (--_ECCustomBlur@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C502C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
