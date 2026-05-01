/*
 * XREFs of ?ShouldHandlePresentationRequest@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1801A78B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall FullScreenPositioner::ShouldHandlePresentationRequest(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  BOOL v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  v7 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         &v7) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 24LL))(v7, &v8) >= 0 )
    {
      v4 = v8 == 2;
      goto LABEL_8;
    }
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v9) >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) == 3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  v4 = 0;
LABEL_8:
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
