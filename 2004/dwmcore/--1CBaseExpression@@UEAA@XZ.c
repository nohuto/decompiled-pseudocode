/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x18009B384
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800986C8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18009A688 (--1CExpression@@UEAA@XZ.c)
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x18016EDB0 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x1801BE934 (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x1801C5FCC (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x1801DB0C0 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180202820 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800987CC (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009BE90 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x1800A3470 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  void *v2; // rcx
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CBaseExpression::`vftable';
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 22);
  if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL) + 160LL);
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 24) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 60); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 27) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 216, 8LL);
  CSparseStorage::~CSparseStorage((CBaseExpression *)((char *)this + 304));
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 37) - v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    *((_QWORD *)this + 37) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 216);
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
