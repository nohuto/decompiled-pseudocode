/*
 * XREFs of ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x1800641DC
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180063CB4 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x180018C58 (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     ??0CSplashScreen@@QEAA@XZ @ 0x180064320 (--0CSplashScreen@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801409F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
        CSplashScreen **a1,
        _QWORD *a2,
        char *a3,
        __int64 *a4,
        __int64 (__fastcall ****a5)(_QWORD, GUID *, __int64 *))
{
  CSplashScreen *v9; // rax
  int v10; // edi
  CSplashScreen *v11; // rbx
  __int64 v12; // rdi
  char v13; // bp
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CSplashScreen *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = CSplashScreen::CSplashScreen(v9);
    v12 = *a4;
    v13 = *a3;
    v14 = *a5;
    *((_QWORD *)v11 + 18) = *a2;
    v15 = *((_QWORD *)v11 + 15);
    if ( v15 != v12 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v15 = *((_QWORD *)v11 + 15);
      }
      v21 = v15;
      *((_QWORD *)v11 + 15) = v12;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    }
    *((_BYTE *)v11 + 168) = v13;
    v16 = *((_QWORD *)v11 + 20);
    *((_QWORD *)v11 + 20) = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v10 = Microsoft::WRL::AsWeak<IInspectable>(v14, (__int64 *)v11 + 20);
    if ( v10 >= 0 )
    {
      v18 = *((_QWORD *)v11 + 8);
      while ( v18 >= 0 )
      {
        if ( (_DWORD)v18 != 0x7FFFFFFF )
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 8, v18 + 1, v18);
          if ( v19 != v18 )
            continue;
        }
        goto LABEL_16;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v18 + 16));
LABEL_16:
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(
      v11,
      v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
