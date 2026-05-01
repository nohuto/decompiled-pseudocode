/*
 * XREFs of ?IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z @ 0x18047E6A8
 * Callers:
 *     _lambda_ad1c2e3ff12b6fb3c427626c13364f68_::operator() @ 0x18026B4E0 (_lambda_ad1c2e3ff12b6fb3c427626c13364f68_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTargetItem @ 0x18047E508 (_anonymous_namespace_--GetTargetItem.c)
 *     ?IsVerbRegistered@@YA_NPEAUIQueryAssociations@@PEBG@Z @ 0x18047E5F4 (-IsVerbRegistered@@YA_NPEAUIQueryAssociations@@PEBG@Z.c)
 */

bool __fastcall IsVerbRegistered(struct IShellItem *a1, const unsigned __int16 *a2)
{
  bool v3; // di
  const unsigned __int16 *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rbx
  const unsigned __int16 *v7; // rdx
  __int64 v9; // [rsp+40h] [rbp+10h] BYREF
  struct IQueryAssociations *v10; // [rsp+48h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  if ( ((int (__fastcall *)(struct IShellItem *, _QWORD, const GUID *, GUID *, struct IQueryAssociations **))a1->lpVtbl->BindToHandler)(
         a1,
         0LL,
         &BHID_AssociationArray,
         &GUID_c46ca590_3c3f_11d2_bee6_0000f805ca57,
         &v10) >= 0 )
  {
    v3 = IsVerbRegistered(v10, v4);
    if ( !v3 )
    {
      v9 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      if ( (int)anonymous_namespace_::GetTargetItem((__int64)a1, v5, &v9) >= 0 )
      {
        v6 = v9;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
        if ( (*(int (__fastcall **)(__int64, _QWORD, const GUID *, GUID *, struct IQueryAssociations **))(*(_QWORD *)v6 + 24LL))(
               v6,
               0LL,
               &BHID_AssociationArray,
               &GUID_c46ca590_3c3f_11d2_bee6_0000f805ca57,
               &v10) >= 0 )
          v3 = IsVerbRegistered(v10, v7);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v3;
}
