/*
 * XREFs of ?GetPosition@VoiceAssistantPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E1390
 * Callers:
 *     ?GetPosition@VoiceAssistantPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FDD40 (-GetPosition@VoiceAssistantPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801849CC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 */

__int64 __fastcall VoiceAssistantPositioner::GetPosition(
        VoiceAssistantPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  const char *v6; // r9
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  void *v11; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( !GetWindowRect(a2, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x109,
             (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
             v6);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
         &v11,
         &Rect);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v11)(v11, a3, a4);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_9;
    }
    v10 = 269LL;
  }
  else
  {
    v10 = 268LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v9;
}
