/*
 * XREFs of ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802BD868
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x1802C11C0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019594 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     memcpy_s_1 @ 0x18018B40C (memcpy_s_1.c)
 *     ??$MakeCBuffer@P6AXPEAX@Z@Streams@Storage@Windows@@YAJIIPEAEP6AXPEAX@ZPEAPEAUIBuffer@012@@Z @ 0x1802BB618 (--$MakeCBuffer@P6AXPEAX@Z@Streams@Storage@Windows@@YAJIIPEAEP6AXPEAX@ZPEAPEAUIBuffer@012@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeserializePropertySet(
        struct MsgBlob *a1,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  unsigned int v4; // esi
  void *v5; // rbx
  unsigned int v6; // edi
  char *v7; // r8
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  int v16[2]; // [rsp+40h] [rbp-40h] BYREF
  void *v17; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a2 = 0LL;
  if ( a1 )
    v4 = *(_DWORD *)a1 & 0x1FFFFFFF;
  else
    v4 = 0;
  v5 = CoTaskMemAlloc(v4);
  v17 = v5;
  if ( !v5 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)0x8007000ELL);
    goto LABEL_26;
  }
  if ( a1 )
  {
    v8 = *(_DWORD *)a1 & 0xE0000000;
    if ( v8 == 1610612736 )
    {
      v7 = (char *)a1 + 8;
    }
    else
    {
      if ( v8 != -1610612736 )
        __debugbreak();
      v7 = (char *)*((_QWORD *)a1 + 1);
    }
  }
  else
  {
    v7 = 0LL;
  }
  memcpy_s_1(v5, v4, v7, v4);
  *(_QWORD *)v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v16);
  v9 = Windows::Storage::Streams::MakeCBuffer<void (*)(void *)>(v4, v4, v5, CoTaskMemFree, v16);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v5 = 0LL;
    v17 = 0LL;
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v10 = RoCreatePropertySetSerializer(&v15);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
        (const char *)(unsigned int)v10);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      goto LABEL_25;
    }
    v14 = 0LL;
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.PropertySet",
      0x2Bu,
      0x2Au);
    v11 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v19,
            &v14);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *, _QWORD))(*(_QWORD *)v15 + 56LL))(
              v15,
              v14,
              *(_QWORD *)v16);
      v6 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
        *a2 = v14;
        v6 = 0;
        goto LABEL_23;
      }
      v12 = 288LL;
    }
    else
    {
      v12 = 287LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v11);
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x116,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
    (const char *)(unsigned int)v9);
LABEL_25:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v16);
LABEL_26:
  if ( v5 )
    CoTaskMemFree(v5);
  return v6;
}
