/*
 * XREFs of ?Localize@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015B118
 * Callers:
 *     ?Invoke@?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@UEAAJPEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@4@PEAUIVectorChangedEventArgs@674@@Z @ 0x18015AC80 (-Invoke@-$GitInvokeHelper@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@App.c)
 *     ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUISplashScreen@Activation@ApplicationModel@4@PEAUIInspectable@@@Z @ 0x180167AF0 (-Invoke@-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Localize(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  *a3 = 0LL;
  v4 = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)v4 )
    return 2147942487LL;
  result = *(unsigned int *)(a1 + 12);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)qword_1805A0778 + 40LL))(
             qword_1805A0778,
             v4,
             a2,
             a3);
  return result;
}
