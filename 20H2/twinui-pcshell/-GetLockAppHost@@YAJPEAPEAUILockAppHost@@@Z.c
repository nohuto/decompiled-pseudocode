/*
 * XREFs of ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x1801F2C7C
 * Callers:
 *     ?ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801F408C (-ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801C0E98 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetLockAppHost(struct ILockAppHost **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int ActivationFactory; // eax
  int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  char v12[4]; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a1 = 0LL;
  v12[0] = 0;
  v13 = 0;
  if ( (int)wil::wnf_query_nothrow<unsigned long>((__int64)&WNF_SHEL_LOCKAPPHOST_ACTIVE, v12, (__int64)&v13, a4) < 0
    || !v12[0]
    || !v13 )
  {
    return 2147500037LL;
  }
  v15 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"lockframework.LockAppBroker",
    0x1Cu,
    0x1Bu);
  v5 = v17;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_fcc7498e_d8cf_4993_a9ae_804193af19d7, &v15);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenAppInterop.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_10:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    return (unsigned int)v7;
  }
  v14 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
  v9 = **v15;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v10 = v9(v8, &GUID_91398107_1c08_44be_8b18_79322a23a71d, &v14);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenAppInterop.h",
      (const char *)(unsigned int)v10);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, struct ILockAppHost **))(*(_QWORD *)v14 + 24LL))(v14, a1);
  if ( v7 < 0 )
    goto LABEL_9;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return 0LL;
}
