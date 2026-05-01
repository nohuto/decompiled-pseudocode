/*
 * XREFs of ??$Make@VCTimer@LambdaHelpers@@AEAW4TIMER_KIND@2@PEAUILambda@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCTimer@LambdaHelpers@@@12@AEAW4TIMER_KIND@LambdaHelpers@@$$QEAPEAUILambda@@@Z @ 0x180249B80
 * Callers:
 *     LambdaHelpers::CTimer::Create__lambda_3ce61c1b5ffbb910afab198a725bb5d9___ @ 0x1800AAD54 (LambdaHelpers--CTimer--Create__lambda_3ce61c1b5ffbb910afab198a725bb5d9___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CTimer@LambdaHelpers@@QEAA@W4TIMER_KIND@1@PEAUILambda@@@Z @ 0x18024BDA0 (--0CTimer@LambdaHelpers@@QEAA@W4TIMER_KIND@1@PEAUILambda@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<LambdaHelpers::CTimer,enum LambdaHelpers::TIMER_KIND &,ILambda *>(
        __int64 *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  void *v6; // rax
  __int64 v7; // rdi

  *a1 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = LambdaHelpers::CTimer::CTimer(v6, *a2, *a3);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v7;
  }
  return a1;
}
