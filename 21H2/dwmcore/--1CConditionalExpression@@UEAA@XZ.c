/*
 * XREFs of ??1CConditionalExpression@@UEAA@XZ @ 0x18021072C
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1802108A0 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_905892157@@@details@wil@@QEAA_NXZ @ 0x180103FA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_905892157@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1802104C8 (--$_Destroy_range@V-$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@.c)
 */

void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  __int64 *v4; // rcx

  *(_QWORD *)this = &CConditionalExpression::`vftable';
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_905892157>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_905892157>::GetImpl'::`2'::impl) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 44);
    for ( i = (_QWORD *)*((_QWORD *)this + 43); i != v2; i += 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 216LL))(*i, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)i[1] + 216LL))(i[1], 0LL);
    }
  }
  std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
    *((__int64 **)this + 43),
    *((__int64 **)this + 44));
  *((_QWORD *)this + 44) = *((_QWORD *)this + 43);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
  v4 = (__int64 *)*((_QWORD *)this + 43);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
      v4,
      *((__int64 **)this + 44));
    std::_Deallocate<16,0>(
      *((void **)this + 43),
      (*((_QWORD *)this + 45) - *((_QWORD *)this + 43)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 45) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
