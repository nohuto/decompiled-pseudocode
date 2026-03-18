/*
 * XREFs of ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180194320
 * Callers:
 *     <none>
 * Callees:
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000FEA0 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180010070 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18009A920 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x180194AE0 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1801B3D40 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801B3E8C (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x180202B10 (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 */

__int64 __fastcall CGlobalDrawingContext::DrawMesh2D(
        CGlobalDrawingContext *this,
        struct CGeometry2D *a2,
        struct CImageSource *a3)
{
  int v6; // edi
  struct ID2D1Effect *v7; // r14
  int v8; // ebx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r8d
  int v19; // r9d
  struct IBitmapRealization *v20; // rbx
  __int64 (__fastcall *v21)(struct IBitmapRealization *, char *, __int64 *, __int64); // rsi
  char *v22; // rcx
  char v23; // di
  __int64 v24; // r9
  int MeshData; // eax
  __int64 v26; // rcx
  unsigned int v27; // esi
  __int64 v28; // rdi
  LPVOID v29; // rax
  void *v30; // rbx
  int v31; // r9d
  unsigned int *v32; // r8
  _OWORD *v33; // rcx
  struct MilVertexXYZDUV2 *v34; // r9
  __int64 v35; // rax
  __int128 v36; // xmm1
  int CachedEffectNoRef; // eax
  __int64 v38; // rcx
  float v39; // xmm6_4
  float v40; // xmm8_4
  float v41; // xmm10_4
  float v42; // xmm7_4
  float v43; // xmm11_4
  float v44; // xmm9_4
  float v45; // xmm7_4
  float v46; // xmm6_4
  float v47; // xmm8_4
  float v48; // xmm9_4
  float v49; // xmm10_4
  float v50; // xmm11_4
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  enum D2D1_COMPOSITE_MODE v57; // r8d
  int v58; // eax
  __int64 v59; // rcx
  unsigned int v61; // [rsp+28h] [rbp-E0h]
  unsigned int v62[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct IBitmapRealization *v63; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v65[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Effect *v66; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v67[16]; // [rsp+78h] [rbp-90h] BYREF
  int v68; // [rsp+B8h] [rbp-50h]
  struct MilVertexXYZDUV2 *v69[2]; // [rsp+C8h] [rbp-40h] BYREF
  float v70; // [rsp+D8h] [rbp-30h]
  float v71; // [rsp+DCh] [rbp-2Ch]
  unsigned int *v72[2]; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v73[4]; // [rsp+F8h] [rbp-10h] BYREF

  v62[0] = 0;
  v6 = 0;
  v66 = 0LL;
  v7 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      7,
      *((_DWORD *)this + 1986));
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 184LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 192LL))(a2);
      if ( v8 )
      {
        if ( v9 )
        {
          CDrawingContext::RecordBitmapResourceInfo(
            (CGlobalDrawingContext *)((char *)this - 16),
            (struct CImageSource *)((char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64));
          v10 = (__int64 *)((char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64);
          v11 = *v10;
          v63 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64 *, struct IBitmapRealization **))(v11 + 56))(v10, &v63);
          v62[0] = v12;
          v6 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xD4u);
            goto LABEL_41;
          }
          v14 = CDrawingContext::ApplyRenderStateInternal((CGlobalDrawingContext *)((char *)this - 16), 0);
          v62[0] = v14;
          v6 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0xD6u);
            goto LABEL_41;
          }
          CDrawingContext::RecordBitmapRealizationInfo((CGlobalDrawingContext *)((char *)this - 16), v63);
          if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
          {
            v16 = *(_QWORD *)a2;
            *(_OWORD *)v72 = 0LL;
            (*(void (__fastcall **)(struct CGeometry2D *, unsigned int **))(v16 + 200))(a2, v72);
            v68 = 0;
            *(_OWORD *)v69 = 0LL;
            CMatrixStack::Top((__int64)this + 352, (__int64)v67);
            CMILMatrix::Transform2DBoundsHelper<0>((__int64)v67, (__int64)v72, (float *)v69, v17);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              McTemplateU0ffff_EventWriteTransfer(
                (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
                (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
                v18,
                v19,
                (char)v69[1],
                SBYTE4(v69[1]));
          }
          v20 = v63;
          v64 = 0LL;
          v21 = *(__int64 (__fastcall **)(struct IBitmapRealization *, char *, __int64 *, __int64))(*(_QWORD *)v63 + 56LL);
          v22 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64;
          v23 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v22 + 16LL))(v22);
          wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v64);
          LOBYTE(v24) = v23;
          MeshData = v21(v20, (char *)this + 40, &v64, v24);
          v62[0] = MeshData;
          v6 = MeshData;
          if ( MeshData < 0 )
          {
            v61 = 238;
          }
          else
          {
            v69[0] = 0LL;
            v62[0] = 0;
            v72[0] = 0LL;
            v65[0] = 0;
            MeshData = CGeometry2D::GetMeshData(a2, v69, v62, (const unsigned int **const)v72, v65);
            v62[0] = MeshData;
            v6 = MeshData;
            if ( MeshData >= 0 )
            {
              v27 = v65[0];
              v28 = v65[0];
              v29 = DefaultHeap::Alloc(saturated_mul(v65[0], 0x20uLL));
              v30 = v29;
              if ( v29 )
              {
                if ( v27 )
                {
                  v32 = v72[0];
                  v33 = v29;
                  v34 = v69[0];
                  do
                  {
                    v35 = *v32++;
                    v35 *= 32LL;
                    v36 = *(_OWORD *)((char *)v34 + v35 + 16);
                    *v33 = *(_OWORD *)((char *)v34 + v35);
                    v33[1] = v36;
                    v33 += 2;
                    --v28;
                  }
                  while ( v28 );
                }
                CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)this + 3) + 16LL, 4u, &v66);
                v62[0] = CachedEffectNoRef;
                v6 = CachedEffectNoRef;
                if ( CachedEffectNoRef < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, CachedEffectNoRef, 0x104u);
                  DefaultHeap::Free(v30);
                  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v64);
                  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v63);
                  v7 = v66;
                  goto LABEL_42;
                }
                v39 = 0.0;
                v40 = 0.0;
                v41 = 0.0;
                LODWORD(v42) = (_DWORD)FLOAT_1_0;
                v43 = 0.0;
                v68 = 0;
                LODWORD(v44) = (_DWORD)FLOAT_1_0;
                v73[0] = _xmm;
                v73[1] = _xmm;
                v73[2] = _xmm;
                v73[3] = _xmm;
                if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, _QWORD))(*(_QWORD *)v63 + 8LL))(
                       v63,
                       v67,
                       0LL) )
                {
                  v45 = *(float *)v67;
                  v46 = *(float *)&v67[1];
                  v47 = *(float *)&v67[4];
                  v48 = *(float *)&v67[5];
                  v49 = *(float *)&v67[12];
                  v50 = *(float *)&v67[13];
                  (**(void (__fastcall ***)(struct IBitmapRealization *, struct MilVertexXYZDUV2 **))v63)(v63, v69);
                  v39 = v46 * (float)SHIDWORD(v69[0]);
                  v42 = v45 * (float)SLODWORD(v69[0]);
                  v40 = v47 * (float)SLODWORD(v69[0]);
                  v41 = v49 * (float)SLODWORD(v69[0]);
                  v44 = v48 * (float)SHIDWORD(v69[0]);
                  v43 = v50 * (float)SHIDWORD(v69[0]);
                }
                v7 = v66;
                v51 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v66 + 72LL))(
                        v66,
                        0LL,
                        0LL,
                        v73,
                        64);
                v62[0] = v51;
                v6 = v51;
                if ( v51 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0LL, v51, 0x11Bu);
                }
                else
                {
                  v69[0] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v39), LODWORD(v42));
                  v69[1] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v44), LODWORD(v40));
                  v70 = v41;
                  v71 = v43;
                  v53 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct MilVertexXYZDUV2 **, int))(*(_QWORD *)v7 + 72LL))(
                          v7,
                          1LL,
                          0LL,
                          v69,
                          24);
                  v62[0] = v53;
                  v6 = v53;
                  if ( v53 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0LL, v53, 0x11Eu);
                  }
                  else
                  {
                    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v7 + 112LL))(
                      v7,
                      0LL,
                      v64,
                      1LL);
                    v55 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v7 + 64LL))(
                            v7,
                            L"vertices",
                            0LL,
                            v30,
                            32 * v27);
                    v62[0] = v55;
                    v6 = v55;
                    if ( v55 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0LL, v55, 0x125u);
                    }
                    else
                    {
                      v57 = D2D1_COMPOSITE_MODE_MASK_INVERT;
                      if ( *((_DWORD *)this + 78) != 2 )
                        v57 = D2D1_COMPOSITE_MODE_SOURCE_OVER;
                      v58 = CD2DContext::FillEffect(
                              (ID2D1DeviceContext **)(*((_QWORD *)this + 3) + 16LL),
                              (const struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != (CGlobalDrawingContext *)16)),
                              v7,
                              0LL,
                              0LL,
                              D2D1_INTERPOLATION_MODE_LINEAR,
                              v57);
                      v62[0] = v58;
                      v6 = v58;
                      if ( v58 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0LL, v58, 0x12Cu);
                    }
                  }
                }
                DefaultHeap::Free(v30);
                goto LABEL_17;
              }
              v6 = -2147024882;
              v31 = -2147024882;
              v61 = 252;
              v62[0] = -2147024882;
LABEL_16:
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v31, v61);
LABEL_17:
              wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v64);
LABEL_41:
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v63);
              goto LABEL_42;
            }
            v61 = 249;
          }
          v31 = MeshData;
          goto LABEL_16;
        }
      }
    }
  }
LABEL_42:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      (const EVENT_DESCRIPTOR *)"3",
      7,
      *((_DWORD *)this + 1986));
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 112LL))(v7, 0LL, 0LL, 1LL);
  TranslateDXGIorD3DErrorInContext(v6, 0, v62);
  return v62[0];
}
