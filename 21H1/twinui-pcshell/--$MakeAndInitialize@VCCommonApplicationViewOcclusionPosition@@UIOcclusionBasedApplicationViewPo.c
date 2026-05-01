/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1803C81EC
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180045EAC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     _lambda_28e991405a2b461f36746747a980db10_::operator() @ 0x180048328 (_lambda_28e991405a2b461f36746747a980db10_--operator().c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1803C9780 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C6B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800462A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x180247C00 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x18024AC64 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z @ 0x180255670 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
        void **a1,
        __int128 *a2)
{
  CCommonApplicationViewOcclusionPosition *v4; // rax
  int CanCastTo; // edi
  volatile int *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  CCommonApplicationViewOcclusionPosition *v9; // rbx
  volatile int *v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // r9
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  const struct _GUID *v15; // r9
  struct tagWINDOWPLACEMENT v17; // [rsp+20h] [rbp-38h] BYREF
  CCommonApplicationViewOcclusionPosition *v18; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile int *)CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v4);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach((__int64 *)&v18, v6);
    v7 = *a2;
    v8 = a2[1];
    v17.rcNormalPosition.bottom = *((_DWORD *)a2 + 10);
    *(_OWORD *)&v17.length = v7;
    *(_QWORD *)&v7 = *((_QWORD *)a2 + 4);
    v9 = v18;
    *(_OWORD *)&v17.ptMinPosition.y = v8;
    *(_QWORD *)&v17.rcNormalPosition.top = v7;
    CanCastTo = CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(v18, &v17);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v9;
        (*(void (__fastcall **)(CCommonApplicationViewOcclusionPosition *))(*(_QWORD *)v9 + 8LL))(v9);
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v11, v12)
          || InlineIsEqualGUID(v13, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2)
          || InlineIsEqualGUID(v14, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6) )
        {
          *a1 = v9;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                        (CCommonApplicationViewOcclusionPosition *)((char *)v9 + 104),
                        v15,
                        a1);
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
        }
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
        (__int64)v9,
        v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
