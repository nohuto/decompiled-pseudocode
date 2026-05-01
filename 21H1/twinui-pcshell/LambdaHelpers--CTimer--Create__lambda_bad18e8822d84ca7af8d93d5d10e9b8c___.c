/*
 * XREFs of LambdaHelpers::CTimer::Create__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___ @ 0x180226C4C
 * Callers:
 *     ?_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x18023227C (-_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCTimer@LambdaHelpers@@AEAW4TIMER_KIND@2@PEAUILambda@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCTimer@LambdaHelpers@@@12@AEAW4TIMER_KIND@LambdaHelpers@@$$QEAPEAUILambda@@@Z @ 0x180227818 (--$Make@VCTimer@LambdaHelpers@@AEAW4TIMER_KIND@2@PEAUILambda@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     LambdaHelpers::CLambda__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___::CLambda__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___ @ 0x180229448 (LambdaHelpers--CLambda__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___--CLambda__lambda_bad18e8822d8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LambdaHelpers::CTimer::Create__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF

  v14 = 0;
  *a1 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
    v8 = LambdaHelpers::CLambda__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___::CLambda__lambda_bad18e8822d84ca7af8d93d5d10e9b8c___(
           v7,
           a4);
  v17 = v8;
  if ( v8 )
  {
    v16[0] = v8;
    v10 = (__int64 *)Microsoft::WRL::Details::Make<LambdaHelpers::CTimer,enum LambdaHelpers::TIMER_KIND &,ILambda *>(
                       &v15,
                       &v14,
                       v16);
    v11 = *v10;
    v16[0] = *v10;
    *v10 = 0LL;
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v11 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, a3);
      if ( v9 >= 0 )
      {
        v16[0] = 0LL;
        *a1 = v11;
      }
    }
    else
    {
      v9 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return (unsigned int)v9;
}
