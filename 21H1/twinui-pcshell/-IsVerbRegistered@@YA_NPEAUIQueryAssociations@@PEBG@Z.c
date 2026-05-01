/*
 * XREFs of ?IsVerbRegistered@@YA_NPEAUIQueryAssociations@@PEBG@Z @ 0x18045A5A0
 * Callers:
 *     ?IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z @ 0x18045A654 (-IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall IsVerbRegistered(struct IQueryAssociations *a1, const unsigned __int16 *a2)
{
  bool v3; // di
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v7 = 0LL;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  if ( ((__int64 (__fastcall *)(struct IQueryAssociations *, GUID *, __int64 *))a1->lpVtbl->Init)(
         a1,
         &GUID_d7d31033_ccb5_40e3_8efa_a668f231003f,
         &v7) >= 0 )
  {
    v4 = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    v3 = (*(int (__fastcall **)(__int64, __int64, const wchar_t *, GUID *, __int64 *))(*(_QWORD *)v4 + 64LL))(
           v4,
           35651598LL,
           L"OpenNewWindow",
           &GUID_d8f6ad5b_b44f_4bcc_88fd_eb3473db7502,
           &v6) >= 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v3;
}
