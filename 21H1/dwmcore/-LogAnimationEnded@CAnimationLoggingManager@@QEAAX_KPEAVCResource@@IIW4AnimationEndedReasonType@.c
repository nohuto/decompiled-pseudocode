/*
 * XREFs of ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801B43B4
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180097AAC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED@@@Z @ 0x1801B5208 (-ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMA.c)
 * Callees:
 *     ?TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180091CC8 (-TryGetDebugInfoForResource@CAnimationLoggingManager@@AEAAPEAUResourceDebugInfo@1@PEAVCResource@.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168BDC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpressionValue@@@Z @ 0x18016B04C (-SendAnimationEnded@DiagnosticCallbacksManager@@QEAAJII_KIGW4AnimationEndedReasonType@@AEBVCExpr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@55@Z @ 0x1801B4098 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U3@U3@@-$_tlgWrit.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x1801B4360 (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

int __fastcall CAnimationLoggingManager::LogAnimationEnded(
        wchar_t *a1,
        __int64 a2,
        struct CResource *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  wchar_t *v10; // rbx
  struct CAnimationLoggingManager::ResourceDebugInfo *CommentForObject; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  wchar_t *v15; // rax
  struct CAnimationLoggingManager::ResourceDebugInfo *v16; // rbx
  DiagnosticCallbacksManager *v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-B1h]
  unsigned int v23; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-85h] BYREF
  wchar_t *v25; // [rsp+58h] [rbp-81h] BYREF
  wchar_t *v26; // [rsp+60h] [rbp-79h] BYREF
  wchar_t *v27; // [rsp+68h] [rbp-71h] BYREF
  int v28[2]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v29[64]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-19h]
  int v31; // [rsp+C8h] [rbp-11h]
  char v32; // [rsp+CCh] [rbp-Dh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  if ( a6 )
  {
    switch ( a6 )
    {
      case 1:
        v10 = L"Animation disconnected due to direct property set (API)";
        break;
      case 2:
        v10 = L"Animation disconnected because the target was destroyed";
        break;
      case 3:
        v10 = L"Animation was stopped (StopAnimation)";
        break;
      default:
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
  else
  {
    v10 = L"Animation completed";
  }
  CommentForObject = (struct CAnimationLoggingManager::ResourceDebugInfo *)CAnimationLoggingManager::GetCommentForObject(
                                                                             (CAnimationLoggingManager *)a1,
                                                                             a4);
  if ( (unsigned int)dword_180346EF0 > 5 && (qword_180346F00 & 1) != 0 )
  {
    v14 = qword_180346F08 & 1;
    if ( v14 == qword_180346F08 )
    {
      v25 = (wchar_t *)CommentForObject;
      v15 = a1 + 76;
      if ( *((_QWORD *)a1 + 22) >= 8uLL )
        v15 = *(wchar_t **)v15;
      v26 = v15;
      v27 = v10;
      v23 = a5;
      v24 = a4;
      *(_QWORD *)v28 = a2;
      LODWORD(CommentForObject) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                                    v14,
                                    byte_1802E900C,
                                    v12,
                                    v13,
                                    (__int64)v28,
                                    (__int64)&v24,
                                    (__int64)&v23,
                                    &v27,
                                    &v26,
                                    &v25);
    }
  }
  if ( a3 )
  {
    CommentForObject = CAnimationLoggingManager::TryGetDebugInfoForResource((CAnimationLoggingManager *)a1, a3);
    v16 = CommentForObject;
    if ( CommentForObject )
    {
      if ( *((_DWORD *)CommentForObject + 10) )
      {
        v17 = *(DiagnosticCallbacksManager **)(*((_QWORD *)a1 + 2) + 1088LL);
        memset_0(v29, 0, sizeof(v29));
        v18 = *(_QWORD *)a3;
        v30 = 0LL;
        v31 = 18;
        v32 = 0;
        v19 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(v18 + 144))(a3, a5, v29);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2A1,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v19);
          __debugbreak();
        }
        LODWORD(CommentForObject) = DiagnosticCallbacksManager::SendAnimationEnded(
                                      v17,
                                      *((_DWORD *)v16 + 10),
                                      *((_DWORD *)v16 + 11),
                                      a2,
                                      a5,
                                      v22,
                                      a6,
                                      (CExpressionValue *)v29);
        if ( (int)CommentForObject < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2AB,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)CommentForObject);
          __debugbreak();
        }
        v20 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          LODWORD(CommentForObject) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
  }
  return (int)CommentForObject;
}
