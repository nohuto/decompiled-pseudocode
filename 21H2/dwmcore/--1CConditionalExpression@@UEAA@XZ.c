/*
 * XREFs of ??1CConditionalExpression@@UEAA@XZ @ 0x1801BD3C4
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801BD510 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@0AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1801BD15C (--$_Destroy_range@V-$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@.c)
 */

void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  __int64 *v4; // rdi

  *(_QWORD *)this = &CConditionalExpression::`vftable';
  v2 = (__int64 *)*((_QWORD *)this + 41);
  v3 = (__int64 *)*((_QWORD *)this + 40);
  if ( v3 != v2 )
  {
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 232LL))(*v3, 0LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3[1] + 232LL))(v3[1], 0LL);
      v3 += 2;
    }
    while ( v3 != v2 );
    v2 = (__int64 *)*((_QWORD *)this + 41);
  }
  std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
    *((__int64 **)this + 40),
    v2);
  *((_QWORD *)this + 41) = *((_QWORD *)this + 40);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 43);
  v4 = (__int64 *)*((_QWORD *)this + 40);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
      v4,
      *((__int64 **)this + 41));
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 42) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
