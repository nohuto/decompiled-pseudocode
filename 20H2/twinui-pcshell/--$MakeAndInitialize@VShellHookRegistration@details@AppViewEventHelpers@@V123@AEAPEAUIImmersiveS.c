/*
 * XREFs of ??$MakeAndInitialize@VShellHookRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIImmersiveShellHookNotification@@@Details@WRL@Microsoft@@YAJPEAPEAVShellHookRegistration@details@AppViewEventHelpers@@AEAPEAUIImmersiveShellHookNotification@@@Z @ 0x1803392EC
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VShellHookRegistration@details@AppViewEventHelpers@@AEAPEAUIImmersiveShellHookNotification@@@wil@@YA?AV?$ComPtr@VShellHookRegistration@details@AppViewEventHelpers@@@WRL@Microsoft@@AEAPEAUIImmersiveShellHookNotification@@@Z @ 0x180339660 (--$MakeAndInitializeOrThrow@VShellHookRegistration@details@AppViewEventHelpers@@AEAPEAUIImmersiv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0ShellHookRegistration@details@AppViewEventHelpers@@QEAA@XZ @ 0x18033ABC0 (--0ShellHookRegistration@details@AppViewEventHelpers@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@@details@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookNotification@@@Z @ 0x18033F754 (-RuntimeClassInitialize@-$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNot.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewEventHelpers::details::ShellHookRegistration,AppViewEventHelpers::details::ShellHookRegistration,IImmersiveShellHookNotification * &>(
        __int64 *a1,
        __int64 *a2)
{
  AppViewEventHelpers::details::ShellHookRegistration *v4; // rax
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (AppViewEventHelpers::details::ShellHookRegistration *)operator new(
                                                                0x48uLL,
                                                                (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = AppViewEventHelpers::details::ShellHookRegistration::ShellHookRegistration(v4);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    v5 = AppViewEventHelpers::details::EventRegistration<IImmersiveShellHookService,IImmersiveShellHookNotification>::RuntimeClassInitialize(
           v6,
           v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
