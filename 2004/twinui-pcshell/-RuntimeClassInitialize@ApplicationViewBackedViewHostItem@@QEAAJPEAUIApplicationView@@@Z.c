/*
 * XREFs of ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x18025A8A0
 * Callers:
 *     ?CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@AEAVAsyncEventSerialInvocationContextToken@7@PEAUIServiceProvider@@@Z @ 0x180257D7C (-CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UIViewHo.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800259B4 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180085C40 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C178 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$As@UIImmersiveApplicationHolographic@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationHolographic@@@WRL@Microsoft@@@Details@12@@Z @ 0x18019567C (--$As@UIImmersiveApplicationHolographic@@@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationViewBackedViewHostItem::RuntimeClassInitialize(
        ApplicationViewBackedViewHostItem *this,
        struct IApplicationView *a2)
{
  _QWORD *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, char *); // rdi
  char *v9; // r15
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, const wchar_t **); // rbx
  unsigned __int64 v12; // rsi
  int v13; // eax
  const wchar_t *v14; // rdx
  UINT32 v15; // r8d
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64, GUID *, __int64 *); // rbx
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h]
  __int64 v27; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v29; // [rsp+90h] [rbp+40h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v3 = (_QWORD *)((char *)this + 200);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 25, (__int64)a2);
  v31 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(v3, &v31);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v31;
    v8 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 24LL);
    v9 = (char *)this + 208;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
    v4 = v8(v7, (char *)this + 208);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 49LL;
      goto LABEL_5;
    }
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v10 = *v3;
    v11 = *(__int64 (__fastcall **)(__int64, const wchar_t **))(*(_QWORD *)*v3 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
    v12 = -1LL;
    v26 = -1LL;
    v27 = -1LL;
    v13 = v11(v10, &v25);
    v5 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v13);
LABEL_27:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
      goto LABEL_28;
    }
    v14 = v25;
    if ( v25 )
    {
      do
        ++v12;
      while ( v25[v12] );
      if ( v12 > 0xFFFFFFFF )
      {
LABEL_14:
        v29 = 0LL;
        v16 = *(_QWORD *)v9;
        v17 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(**(_QWORD **)v9 + 24LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
        v18 = v17(v16, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v29);
        v19 = v18;
        if ( v18 < 0 )
        {
          v5 = -2147019873;
          if ( v18 != -2147019873 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3C,
              (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
              (const char *)(unsigned int)v18);
            v5 = v19;
          }
          goto LABEL_26;
        }
        v24 = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 32LL))(v29, &v24);
        v5 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3F,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
            (const char *)(unsigned int)v20);
LABEL_26:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
          goto LABEL_27;
        }
        *((_DWORD *)this + 58) = v24;
        v30 = 0LL;
        v21 = Microsoft::WRL::ComPtr<IImmersiveApplication>::As<IImmersiveApplicationHolographic>(
                (_QWORD *)this + 26,
                &v30);
        v5 = v21;
        if ( v21 >= 0 )
        {
          v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 32LL))(v30, (char *)this + 32);
          v5 = v21;
          if ( v21 >= 0 )
          {
            v5 = 0;
            goto LABEL_25;
          }
          v22 = 69LL;
        }
        else
        {
          v22 = 68LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
          (const char *)(unsigned int)v21);
LABEL_25:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
        goto LABEL_26;
      }
      v15 = v12;
    }
    else
    {
      v15 = 0;
      v14 = &szAgent;
    }
    Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 28, v14, v15);
    goto LABEL_14;
  }
  v6 = 48LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v4);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  return v5;
}
