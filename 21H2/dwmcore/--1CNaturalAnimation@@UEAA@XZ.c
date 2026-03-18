/*
 * XREFs of ??1CNaturalAnimation@@UEAA@XZ @ 0x1802258F4
 * Callers:
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x18019F0B0 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CNaturalAnimation::~CNaturalAnimation(CNaturalAnimation *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  v2 = *((_QWORD *)this + 56);
  if ( v2 )
  {
    *((_QWORD *)this + 56) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)this + 55);
  CBaseExpression::~CBaseExpression(this);
}
