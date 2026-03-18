/*
 * XREFs of ??1CScalar@@MEAA@XZ @ 0x1801E9A5C
 * Callers:
 *     ??_ECScalar@@MEAAPEAXI@Z @ 0x18016F590 (--_ECScalar@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?UpdateAnimateValues@CScalar@@UEAAXXZ @ 0x1801E9B90 (-UpdateAnimateValues@CScalar@@UEAAXXZ.c)
 */

void __fastcall CScalar::~CScalar(CScalar *this)
{
  CScalar *v2; // rcx
  bool v3; // zf
  unsigned int i; // edi
  __int64 v5; // rcx

  *(_QWORD *)this = &CScalar::`vftable'{for `CResource'};
  v2 = (CScalar *)((char *)this + 56);
  v3 = *((_BYTE *)this + 96) == 0;
  *(_QWORD *)v2 = &CScalar::`vftable'{for `IAnimationResource'};
  if ( !v3 )
    CScalar::UpdateAnimateValues(v2);
  for ( i = 0; i < *((_DWORD *)this + 22); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 0x10u);
  CBaseAnimation::~CBaseAnimation(this);
}
