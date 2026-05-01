/*
 * XREFs of ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x180420450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9_____lambda_ad40a3d6588798e2e5bb6594e13f754d__&__lambda_8282e43d19605b8bda0fa017156e9de9__&_IDCompBatchAnimationCallback___&_ @ 0x18041F6E4 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ad40a3d65.c)
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x180420550 (-Solidify@GhostDivider@@UEAAXXZ.c)
 */

__int64 __fastcall GhostDivider::Show(GhostDivider *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  IApplicationViewChangeListener *v6; // rbx
  int v7; // edi
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  IApplicationViewChangeListener *v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v16 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ad40a3d6588798e2e5bb6594e13f754d___lambda_8282e43d19605b8bda0fa017156e9de9_____lambda_ad40a3d6588798e2e5bb6594e13f754d_____lambda_8282e43d19605b8bda0fa017156e9de9____IDCompBatchAnimationCallback_____(
    &v13,
    v4,
    v5,
    &v16);
  v6 = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
LABEL_4:
    v9 = (unsigned int)v7;
    v10 = 128LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)v9);
    goto LABEL_11;
  }
  v7 = (**(__int64 (__fastcall ***)(IApplicationViewChangeListener *, GUID *, __int64 *))v13)(
         v13,
         &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6,
         &v15);
  (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 < 0 )
    goto LABEL_4;
  v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(**((_QWORD **)a1 + 7) + 32LL))(
          *((_QWORD **)a1 + 7),
          v8,
          4 * (a2 & 1u),
          v15);
  v7 = v11;
  if ( v11 < 0 )
  {
    v9 = (unsigned int)v11;
    v10 = 131LL;
    goto LABEL_7;
  }
  if ( (a2 & 2) != 0 )
    GhostDivider::Solidify(a1);
  v7 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return (unsigned int)v7;
}
