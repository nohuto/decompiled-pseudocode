/*
 * XREFs of ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x1801B1888
 * Callers:
 *     _lambda_3440248c42f2751644268d737f23a18f_::_lambda_invoker_cdecl_ @ 0x1801B09E0 (_lambda_3440248c42f2751644268d737f23a18f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180096870 (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A3DC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016607C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z @ 0x1801686D0 (-SendDebugStart@DiagnosticCallbacksManager@@QEAAJII_KIAEBVCExpressionValue@@@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1801B19DC (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

void __fastcall CAnimationLoggingManager::DeferredSendDebugStart(
        CAnimationLoggingManager *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v8; // rdi
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  struct CAnimationLoggingManager::ResourceDebugInfo *v10; // rbx
  __int64 v11; // rax
  DiagnosticCallbacksManager *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  const char *v15; // [rsp+20h] [rbp-98h]
  _BYTE v16[64]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v17; // [rsp+70h] [rbp-48h]
  int v18; // [rsp+78h] [rbp-40h]
  char v19; // [rsp+7Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(*(CResourceTable **)(*((_QWORD *)this + 6) + 24LL), a2);
  v8 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, ResourceWithoutType);
    v10 = DebugInfoForResource;
    if ( DebugInfoForResource )
    {
      if ( *((_DWORD *)DebugInfoForResource + 10) )
      {
        memset_0(v16, 0, sizeof(v16));
        v11 = *((_QWORD *)this + 2);
        v17 = 0LL;
        v18 = 18;
        v19 = 0;
        v12 = *(DiagnosticCallbacksManager **)(v11 + 1088);
        if ( (*(int (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(*(_QWORD *)v8 + 144LL))(v8, a4, v16) < 0 )
        {
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0x139,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            "Unexpectedly failed to get property.",
            v15);
          JUMPOUT(0x1801B19D4LL);
        }
        v13 = DiagnosticCallbacksManager::SendDebugStart(
                v12,
                *((_DWORD *)v10 + 10),
                *((_DWORD *)v10 + 11),
                a3,
                a4,
                (const struct CExpressionValue *)v16);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x133,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        v14 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
  }
}
