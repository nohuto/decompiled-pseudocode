/*
 * XREFs of ?RuntimeClassInitialize@HotkeyClientRegistration@@QEAAJPEAUIMessageProxy@@_NU_GUID@@@Z @ 0x1801A1E28
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyClientRegistration@@$$QEAPEAUIMessageProxy@@AEA_NAEAU_GUID@@@Z @ 0x18019D338 (--$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180148F0C (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall HotkeyClientRegistration::RuntimeClassInitialize(
        HotkeyClientRegistration *this,
        struct IMessageProxy *a2,
        char a3,
        struct _GUID *a4)
{
  int v8; // ebx
  ULONG_PTR v9; // r8
  ULONG_PTR v10; // rdi
  __int128 v11; // xmm0
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v8 = -2147024809;
    v9 = 34LL;
LABEL_12:
    FailFastWithHR(v8, retaddr, v9);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(struct IMessageProxy *, char *))(*(_QWORD *)a2 + 48LL))(a2, (char *)this + 40);
  if ( v8 < 0 )
  {
    v10 = 36LL;
LABEL_9:
    if ( v8 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, v10);
    v9 = v10;
    goto LABEL_12;
  }
  v8 = (*(__int64 (__fastcall **)(struct IMessageProxy *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 24);
  if ( v8 < 0 )
  {
    v10 = 37LL;
    goto LABEL_9;
  }
  v11 = (__int128)*a4;
  *((_DWORD *)this + 4) = *((_DWORD *)this + 10);
  *((_DWORD *)this + 5) = *((_DWORD *)this + 11);
  *((_BYTE *)this + 80) = a3;
  *(_OWORD *)((char *)this + 84) = v11;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 13);
  v8 = (**(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, char *))a2)(
         a2,
         &GUID_f17ab79d_12a5_4878_ac23_c0eb1c6e1572,
         (char *)this + 104);
  if ( v8 < 0 )
  {
    v10 = 43LL;
    goto LABEL_9;
  }
  return (unsigned int)v8;
}
