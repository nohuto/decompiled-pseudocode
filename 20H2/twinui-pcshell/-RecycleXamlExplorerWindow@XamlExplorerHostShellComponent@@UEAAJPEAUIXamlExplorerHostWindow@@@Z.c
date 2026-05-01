/*
 * XREFs of ?RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z @ 0x1802EA880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180179274 (--$_Emplace_reallocate@AEBV-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 *     ??$RecycleXamlExplorerWindow@_K_K@XamlExplorerHostTelemetry@@SAX$$QEA_K0@Z @ 0x1802E7FF0 (--$RecycleXamlExplorerWindow@_K_K@XamlExplorerHostTelemetry@@SAX$$QEA_K0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EA9A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@details@wil@@QEAAX_N.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlExplorerHostShellComponent::RecycleXamlExplorerWindow(
        XamlExplorerHostShellComponent *this,
        struct IXamlExplorerHostWindow *a2)
{
  struct IXamlExplorerHostWindow *v2; // rsi
  __int64 *v4; // rdx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  struct IXamlExplorerHostWindow *v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::GetImpl'::`2'::impl,
      a2);
    AcquireSRWLockExclusive((PSRWLOCK)this + 13);
    v8 = (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3;
    v9 = v2;
    XamlExplorerHostTelemetry::RecycleXamlExplorerWindow<unsigned __int64,unsigned __int64>((__int64 *)&v9, &v8);
    v8 = (__int64)v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
    v4 = (__int64 *)*((_QWORD *)this + 10);
    if ( *((__int64 **)this + 11) == v4 )
    {
      std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow> const &>(
        (__int64 **)this + 9,
        v4,
        &v8);
    }
    else
    {
      *v4 = (__int64)v2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
      *((_QWORD *)this + 10) += 8LL;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    if ( this != (XamlExplorerHostShellComponent *)-104LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE9,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v5);
  }
  return result;
}
