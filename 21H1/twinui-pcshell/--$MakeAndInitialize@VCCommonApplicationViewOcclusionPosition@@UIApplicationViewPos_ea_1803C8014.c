/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x1803C8014
 * Callers:
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1803CE8EC (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C6B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800462A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x1800463BC (-s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_V.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x180247C00 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x18024AC64 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagRECT &,tagRECT &,int>(
        void **a1,
        __int128 *a2,
        __int128 *a3,
        int *a4)
{
  CCommonApplicationViewOcclusionPosition *v8; // rax
  int CanCastTo; // edi
  volatile int *v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  _DWORD *v16; // rcx
  struct _GUID *v17; // rdx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  _DWORD *v20; // r9
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile int *)CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v8);
    v22 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach(&v22, v10);
    v11 = *a4;
    v12 = v22;
    v13 = *a2;
    v22 = -1LL;
    *(_DWORD *)(v12 + 52) = v11;
    *(_OWORD *)(v12 + 16) = v13;
    *(_DWORD *)(v12 + 48) = 4;
    v14 = *a3;
    *(_DWORD *)(v12 + 56) = 0;
    *(_OWORD *)(v12 + 60) = 0LL;
    *(_OWORD *)(v12 + 76) = 0LL;
    *(_OWORD *)(v12 + 32) = v14;
    *(_QWORD *)(v12 + 92) = 0LL;
    *(_DWORD *)(v12 + 60) = 0;
    v15 = *(_OWORD *)(v12 + 32);
    *(_QWORD *)(v12 + 76) = v22;
    v22 = -1LL;
    *(_QWORD *)(v12 + 68) = -1LL;
    *(_OWORD *)(v12 + 84) = v15;
    *(_DWORD *)(v12 + 64) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState(4);
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = (void *)v12;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v16, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1)
        || InlineIsEqualGUID(v18, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2)
        || InlineIsEqualGUID(v19, v20) )
      {
        *a1 = (void *)v12;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v12 + 104), v17, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
      v12,
      (volatile int *)v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
