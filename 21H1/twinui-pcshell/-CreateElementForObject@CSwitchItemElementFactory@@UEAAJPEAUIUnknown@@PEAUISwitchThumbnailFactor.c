/*
 * XREFs of ?CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x180374B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@$$QEAUSwitchItemElementInitializeArgs@CSwitchItemElement@@@Z @ 0x1803742D0 (--$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializ.c)
 *     ?ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z @ 0x18037EE7C (-ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z.c)
 */

__int64 __fastcall CSwitchItemElementFactory::CreateElementForObject(
        CSwitchItemElementFactory *this,
        struct IUnknown *a2,
        struct ISwitchThumbnailFactory *a3,
        const struct _GUID *a4,
        void **a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // xmm0_8
  int v16; // eax
  unsigned int v17; // eax
  int v18; // edx
  int inited; // eax
  __int64 v20; // rdx
  __int64 (__fastcall ***v22)(_QWORD, const struct _GUID *, void **); // [rsp+20h] [rbp-41h] BYREF
  __int64 v23; // [rsp+28h] [rbp-39h] BYREF
  _DWORD v24[4]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v25; // [rsp+40h] [rbp-21h]
  __int64 v26; // [rsp+48h] [rbp-19h]
  int v27; // [rsp+50h] [rbp-11h]
  int v28; // [rsp+54h] [rbp-Dh]
  char *v29; // [rsp+58h] [rbp-9h] BYREF
  int v30; // [rsp+60h] [rbp-1h]
  _DWORD *v31; // [rsp+68h] [rbp+7h]
  __int64 v32; // [rsp+70h] [rbp+Fh]
  __int64 v33; // [rsp+78h] [rbp+17h]
  __int64 v34; // [rsp+80h] [rbp+1Fh]
  __int64 v35; // [rsp+88h] [rbp+27h]
  struct ISwitchThumbnailFactory *v36; // [rsp+90h] [rbp+2Fh]
  int v37; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]
  __int64 v39; // [rsp+C8h] [rbp+67h] BYREF

  v39 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc,
         &v39);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v23 = 0LL;
    v13 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 40LL))(v39);
    if ( !v13 )
    {
      v10 = -2147418113;
      v12 = 104LL;
      v11 = 2147549183LL;
      goto LABEL_5;
    }
    DwmpQueryWindowThumbnailSourceSize(v13, 0LL, &v23);
    v14 = *((_DWORD *)this + 74);
    v15 = *((_QWORD *)this + 7);
    v22 = 0LL;
    v27 = 0;
    v28 = 0;
    v30 = v14;
    v24[0] = *((_DWORD *)this + 17)
           + *((_DWORD *)this + 26)
           + *((_DWORD *)this + 27)
           + *((_DWORD *)this + 30)
           + *((_DWORD *)this + 31);
    v24[1] = *((_DWORD *)this + 4);
    v24[2] = *((_DWORD *)this + 24) + *((_DWORD *)this + 25);
    v26 = v23;
    v31 = v24;
    v32 = v39;
    v33 = *((_QWORD *)this + 41);
    v34 = *((_QWORD *)this + 38);
    v35 = *((_QWORD *)this + 42);
    v16 = *((_DWORD *)this + 86);
    v29 = (char *)this + 16;
    v37 = v16;
    v25 = v15;
    v36 = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    v17 = Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemElement,IMultitaskingViewElement,CSwitchItemElement::SwitchItemElementInitializeArgs>(
            &v22,
            (const struct CSwitchItemElement::SwitchItemElementInitializeArgs *)&v29);
    inited = SwitchItemTelemetry::ItemInitTelemetry((SwitchItemTelemetry *)v17, v18);
    v10 = inited;
    if ( inited >= 0 )
    {
      inited = (**v22)(v22, a4, a5);
      v10 = inited;
      if ( inited >= 0 )
      {
LABEL_11:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        goto LABEL_12;
      }
      v20 = 122LL;
    }
    else
    {
      v20 = 121LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_11;
  }
  v11 = (unsigned int)v9;
  v12 = 99LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
    (const char *)v11);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
  return v10;
}
