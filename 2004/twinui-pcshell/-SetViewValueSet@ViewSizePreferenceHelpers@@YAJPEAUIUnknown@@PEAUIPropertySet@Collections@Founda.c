/*
 * XREFs of ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CFF48
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1803CE9D0 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewSizePreferenceHelpers::SetViewValueSet(
        __int64 (__fastcall ***this)(ViewSizePreferenceHelpers *, GUID *, __int64 *),
        struct IUnknown *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int PropertySetSerializer; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, struct IUnknown *, __int64 *); // rdi
  int v9; // eax
  __int64 (__fastcall *v10)(ViewSizePreferenceHelpers *, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF

  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  PropertySetSerializer = RoCreatePropertySetSerializer(v14);
  v6 = PropertySetSerializer;
  if ( PropertySetSerializer >= 0 )
  {
    v17 = 0LL;
    v7 = v14[0];
    v8 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64 *))(*(_QWORD *)v14[0] + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
    v9 = v8(v7, a2, &v17);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v9);
LABEL_12:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
      goto LABEL_13;
    }
    v16 = 0LL;
    v10 = **this;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v11 = v10((ViewSizePreferenceHelpers *)this, &GUID_09e04bcd_1f92_43de_a3f2_f9afc6922077, &v16);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v16 + 24LL))(
              v16,
              0LL,
              0LL,
              0LL,
              v17);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v6 = 0;
        goto LABEL_11;
      }
      v12 = 357LL;
    }
    else
    {
      v12 = 356LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v11);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x160,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)PropertySetSerializer);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  return v6;
}
