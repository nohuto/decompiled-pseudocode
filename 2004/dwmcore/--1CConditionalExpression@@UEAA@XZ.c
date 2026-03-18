/*
 * XREFs of ??1CConditionalExpression@@UEAA@XZ @ 0x1801BE934
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801BEA30 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@0AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1801BE6CC (--$_Destroy_range@V-$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@.c)
 */

void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &CConditionalExpression::`vftable';
  std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
    *((__int64 **)this + 40),
    *((__int64 **)this + 41));
  *((_QWORD *)this + 41) = *((_QWORD *)this + 40);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 43);
  v2 = (void *)*((_QWORD *)this + 40);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
      *((__int64 **)this + 40),
      *((__int64 **)this + 41));
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 42) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
