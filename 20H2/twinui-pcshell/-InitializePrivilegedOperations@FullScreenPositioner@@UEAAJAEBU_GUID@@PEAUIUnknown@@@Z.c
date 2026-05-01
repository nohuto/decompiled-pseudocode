/*
 * XREFs of ?InitializePrivilegedOperations@FullScreenPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801A6700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FullScreenPositioner::InitializePrivilegedOperations(
        FullScreenPositioner *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( !v4 )
  {
    v5 = (char *)this + 152;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
      v5);
  }
  return 0LL;
}
