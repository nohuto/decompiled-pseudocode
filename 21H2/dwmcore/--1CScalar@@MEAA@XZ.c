/*
 * XREFs of ??1CScalar@@MEAA@XZ @ 0x18023B7CC
 * Callers:
 *     ??_ECScalar@@MEAAPEAXI@Z @ 0x18019F740 (--_ECScalar@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateAnimateValues@CScalar@@UEAAXXZ @ 0x18023B910 (-UpdateAnimateValues@CScalar@@UEAAXXZ.c)
 */

void __fastcall CScalar::~CScalar(CScalar *this)
{
  CScalar *v2; // rcx
  bool v3; // zf
  unsigned int i; // edi
  __int64 v5; // rcx

  *(_QWORD *)this = &CScalar::`vftable'{for `CResource'};
  v2 = (CScalar *)((char *)this + 64);
  v3 = *((_BYTE *)this + 104) == 0;
  *(_QWORD *)v2 = &CScalar::`vftable'{for `IAnimationResource'};
  if ( !v3 )
    CScalar::UpdateAnimateValues(v2);
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 9) + 16LL * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 72, 0x10u);
  CBaseAnimation::~CBaseAnimation(this);
}
