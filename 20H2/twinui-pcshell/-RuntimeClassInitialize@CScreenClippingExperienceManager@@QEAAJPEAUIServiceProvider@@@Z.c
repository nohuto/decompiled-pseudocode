/*
 * XREFs of ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801EA1D4
 * Callers:
 *     ??$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801E691C (--$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ?Close@CScreenClippingExperienceManager@@EEAAJXZ @ 0x1801E7AC0 (-Close@CScreenClippingExperienceManager@@EEAAJXZ.c)
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801E9DD8 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::RuntimeClassInitialize(
        CScreenClippingExperienceManager *this,
        struct IServiceProvider *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  char v6; // si
  int v7; // eax
  unsigned int v8; // ebx
  WINBOOL v10; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-40h] BYREF
  char v12; // [rsp+40h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v10, (LPVOID *)&v11) && v10 )
  {
    v11 = &qword_1805CC2E8;
    qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
    qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
  }
  v5 = (_DWORD *)v11[1];
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_180504804, 0LL, 0LL, 2u, &v13);
  v11 = this;
  v6 = 1;
  v12 = 1;
  v7 = CScreenClippingExperienceManager::RegisterWithServiceProvider(this, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 39, (__int64)this);
    v8 = 0;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v6 )
    CScreenClippingExperienceManager::Close((CScreenClippingExperienceManager *)((char *)this + 16));
  return v8;
}
