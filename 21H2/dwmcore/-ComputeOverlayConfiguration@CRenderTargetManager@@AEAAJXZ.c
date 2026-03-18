/*
 * XREFs of ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180079A00
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18007CF20 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800555F0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x18005D298 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1800798F8 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$0.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E77C (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBU_LUID@@@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LUID@@QEAU2@AEBU2@@Z @ 0x1800F4AE8 (--$_Emplace_reallocate@AEBU_LUID@@@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LU.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@@Z @ 0x1800F56A8 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@@Z.c)
 *     ??$?0$0?0V?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@$0A@@?$span@U_LUID@@$0?0@gsl@@QEAA@AEAV?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@@Z @ 0x1800F8A4C (--$-0$0-0V-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@$0A@@-$span@U_LUID@@$0-0@gsl@@QEAA@A.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CRenderTargetManager::ComputeOverlayConfiguration(CRenderTargetManager *this)
{
  char v2; // cl
  unsigned int v3; // r15d
  char *v4; // rsi
  int v5; // r13d
  __int64 *v6; // r12
  char *v7; // rbx
  char *v8; // r14
  __int64 *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  gsl::details *v16; // rcx
  bool v17; // zf
  CMILMatrix *v19; // rax
  void (__fastcall ***v20)(_QWORD, __int64 *); // rcx
  _QWORD *v21; // rcx
  RenderTargetInfo *v22; // rax
  __int64 *v23; // rax
  char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+38h] [rbp-D0h]
  _QWORD *v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+58h] [rbp-B0h] BYREF
  char *v32; // [rsp+68h] [rbp-A0h]
  _QWORD v33[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  gsl::details *v35; // [rsp+98h] [rbp-70h] BYREF
  _BYTE *v36; // [rsp+A0h] [rbp-68h]
  __int64 *v37; // [rsp+A8h] [rbp-60h]
  _BYTE v38[128]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+130h] [rbp+28h] BYREF

  v35 = (gsl::details *)v38;
  v2 = *((_BYTE *)this + 580);
  v36 = v38;
  v37 = &v39;
  v32 = 0LL;
  v3 = 0;
  LODWORD(v29) = 0;
  v4 = 0LL;
  v5 = 0;
  v31 = 0LL;
  if ( v2 )
  {
    *((_DWORD *)this + 139) = 1065353216;
    *((_DWORD *)this + 140) = 1065353216;
  }
  v6 = (__int64 *)*((_QWORD *)this + 1);
  v7 = (char *)*((_QWORD *)&v31 + 1);
  v8 = (char *)v31;
  if ( v6 != *((__int64 **)this + 2) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 2);
    do
    {
      v10 = *v6;
      v28 = 0LL;
      if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v10, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v28) >= 0 )
      {
        v27 = v5 + 1;
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v28 + 48LL))(v28);
        if ( v11 )
          *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                       &v35,
                       (v36 - (_BYTE *)v35) >> 3,
                       1uLL) = v11;
        if ( *((_BYTE *)this + 580) )
        {
          v19 = (CMILMatrix *)(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 32LL))(v28);
          CMILMatrix::Get2DScaleDimensions(v19, (float *)&v30, (float *)&v30 + 1);
          if ( *(float *)&v30 > *((float *)this + 139) && *((float *)&v30 + 1) > *((float *)this + 140) )
            *(_QWORD *)((char *)this + 556) = v30;
          v20 = (void (__fastcall ***)(_QWORD, __int64 *))((char *)v28 + *(int *)(v28[1] + 12LL) + 8);
          (**v20)(v20, &v34);
          if ( HIDWORD(v34) * (int)v34 > (unsigned int)v29 )
          {
            LODWORD(v29) = HIDWORD(v34) * v34;
            v21 = v28;
            *((_QWORD *)this + 68) = v34;
            v22 = (RenderTargetInfo *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v21 + 96LL))(v21, v33);
            *((_DWORD *)this + 138) = RenderTargetInfo::IsHDR(v22) ? 8 : 4;
          }
          v23 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v28 + 96LL))(v28, v33);
          v24 = v8;
          v25 = *v23;
          v33[0] = v25;
          if ( v8 == v7 )
            goto LABEL_29;
          do
          {
            if ( *(_QWORD *)v24 == __PAIR64__(HIDWORD(v33[0]), v25) )
              break;
            v24 += 8;
          }
          while ( v24 != v7 );
          if ( v24 == v7 )
          {
LABEL_29:
            if ( v7 == v4 )
            {
              std::vector<_LUID>::_Emplace_reallocate<_LUID const &>(&v31, v7, v33);
              v4 = v32;
              v7 = (char *)*((_QWORD *)&v31 + 1);
              v8 = (char *)v31;
            }
            else
            {
              *(_QWORD *)v7 = v25;
              v7 += 8;
              *((_QWORD *)&v31 + 1) = v7;
            }
          }
        }
        v5 = v27;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
      ++v6;
    }
    while ( v6 != v9 );
    v2 = *((_BYTE *)this + 580);
    v3 = 0;
  }
  *((_BYTE *)this + 577) = v5 == 1;
  if ( v2 && (v7 - v8) >> 3 )
  {
    v26 = gsl::span<_LUID,-1>::span<_LUID,-1>(v33, &v31);
    CDeviceManager::UpdateFeatureLevels(v26);
    v4 = v32;
    v8 = (char *)v31;
    *((_BYTE *)this + 580) = 0;
  }
  v12 = (v36 - (_BYTE *)v35) >> 3;
  if ( v12 )
  {
    v33[0] = (v36 - (_BYTE *)v35) >> 3;
    if ( v12 == -1 || (v33[1] = v35) == 0LL )
    {
      gsl::details::terminate(v35);
      JUMPOUT(0x180079D99LL);
    }
    v13 = COverlayContext::ComputeOverlayConfiguration(v33);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x25Du);
  }
  if ( v8 )
    std::_Deallocate<16,0>(v8, (v4 - v8) & 0xFFFFFFFFFFFFFFF8uLL);
  v15 = (v36 - (_BYTE *)v35) >> 3;
  if ( v15 )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v35,
      0LL,
      v15);
  v16 = v35;
  v17 = v35 == (gsl::details *)v38;
  v35 = 0LL;
  if ( v17 )
    v16 = 0LL;
  DefaultHeap::Free(v16);
  return v3;
}
