/*
 * XREFs of ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18018D7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18000EC50 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039EB0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180060C64 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEAAXPEAVIBitmapResource@@@Z @ 0x180063500 (-RecordBitmapResourceInfo@CDrawingContext@@QEAAXPEAVIBitmapResource@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180084B34 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008AC90 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180091760 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800C9B50 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801523A8 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018DEB0 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1801B3FCC (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawMesh2D(CDrawingContext *this, struct CGeometry2D *a2, struct CImageSource *a3)
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
  int v17; // r8d
  int v18; // r9d
  struct IBitmapRealization *v19; // rbx
  __int64 (__fastcall *v20)(struct IBitmapRealization *, char *, __int64 *, __int64); // rsi
  __int64 v21; // rdx
  char v22; // di
  __int64 v23; // r9
  int MeshData; // eax
  __int64 v25; // rcx
  unsigned int v26; // esi
  __int64 v27; // rdi
  LPVOID v28; // rax
  void *v29; // rbx
  int v30; // r9d
  unsigned int *v31; // r8
  _OWORD *v32; // rcx
  struct MilVertexXYZDUV2 *v33; // r9
  __int64 v34; // rax
  __int128 v35; // xmm1
  int CachedEffectNoRef; // eax
  __int64 v37; // rcx
  float v38; // xmm6_4
  float v39; // xmm8_4
  float v40; // xmm7_4
  float v41; // xmm10_4
  float v42; // xmm9_4
  float v43; // xmm11_4
  float v44; // xmm7_4
  float v45; // xmm6_4
  float v46; // xmm8_4
  float v47; // xmm9_4
  float v48; // xmm10_4
  float v49; // xmm11_4
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  enum D2D1_COMPOSITE_MODE v54; // r8d
  unsigned int v56; // [rsp+28h] [rbp-E0h]
  unsigned int v57; // [rsp+28h] [rbp-E0h]
  unsigned int v58[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct IBitmapRealization *v59; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v61[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Effect *v62; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v63[20]; // [rsp+78h] [rbp-90h] BYREF
  struct MilVertexXYZDUV2 *v64[2]; // [rsp+C8h] [rbp-40h] BYREF
  float v65; // [rsp+D8h] [rbp-30h]
  float v66; // [rsp+DCh] [rbp-2Ch]
  unsigned int *v67[2]; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v68[4]; // [rsp+F8h] [rbp-10h] BYREF

  v58[0] = 0;
  v6 = 0;
  v62 = 0LL;
  v7 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      7,
      *((_DWORD *)this + 1482));
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 200LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 208LL))(a2);
      if ( v8 )
      {
        if ( v9 )
        {
          CDrawingContext::RecordBitmapResourceInfo(
            (CDrawingContext *)((char *)this - 16),
            (struct CImageSource *)((char *)a3 + *(int *)(*((_QWORD *)a3 + 7) + 8LL) + 56));
          v10 = (__int64 *)((char *)a3 + *(int *)(*((_QWORD *)a3 + 7) + 8LL) + 56);
          v11 = *v10;
          v59 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64 *, struct IBitmapRealization **))(v11 + 48))(v10, &v59);
          v58[0] = v12;
          v6 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x27u, 0LL);
            goto LABEL_42;
          }
          v14 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)((char *)this - 16), 0);
          v58[0] = v14;
          v6 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x29u, 0LL);
            goto LABEL_42;
          }
          CDrawingContext::RecordBitmapRealizationInfo((CDrawingContext *)((char *)this - 16), v59);
          if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
          {
            v16 = *(_QWORD *)a2;
            *(_OWORD *)v67 = 0LL;
            (*(void (__fastcall **)(struct CGeometry2D *, unsigned int **))(v16 + 216))(a2, v67);
            *(_OWORD *)v64 = 0LL;
            CMILMatrix::Transform2DBoundsHelper<0>((CDrawingContext *)((char *)this + 288), (__int64)v67, (float *)v64);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0ffff_EventWriteTransfer(
                (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
                (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
                v17,
                v18,
                (char)v64[1],
                SBYTE4(v64[1]));
          }
          v19 = v59;
          v60 = 0LL;
          v20 = *(__int64 (__fastcall **)(struct IBitmapRealization *, char *, __int64 *, __int64))(*(_QWORD *)v59 + 56LL);
          v21 = *(int *)(*((_QWORD *)a3 + 7) + 8LL);
          v22 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)((char *)a3 + v21 + 56) + 16LL))((char *)a3 + v21 + 56);
          wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v60);
          LOBYTE(v23) = v22;
          MeshData = v20(v19, (char *)this + 40, &v60, v23);
          v58[0] = MeshData;
          v6 = MeshData;
          if ( MeshData < 0 )
          {
            v56 = 64;
          }
          else
          {
            v64[0] = 0LL;
            v58[0] = 0;
            v67[0] = 0LL;
            v61[0] = 0;
            MeshData = CGeometry2D::GetMeshData(a2, v64, v58, (const unsigned int **const)v67, v61);
            v58[0] = MeshData;
            v6 = MeshData;
            if ( MeshData >= 0 )
            {
              v26 = v61[0];
              v27 = v61[0];
              v28 = DefaultHeap::Alloc(saturated_mul(v61[0], 0x20uLL));
              v29 = v28;
              if ( !v28 )
              {
                v6 = -2147024882;
                v30 = -2147024882;
                v56 = 78;
                v58[0] = -2147024882;
LABEL_16:
                MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v30, v56, 0LL);
LABEL_17:
                wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v60);
LABEL_42:
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v59);
                goto LABEL_43;
              }
              if ( v26 )
              {
                v31 = v67[0];
                v32 = v28;
                v33 = v64[0];
                do
                {
                  v34 = *v31++;
                  v34 *= 32LL;
                  v35 = *(_OWORD *)((char *)v33 + v34 + 16);
                  *v32 = *(_OWORD *)((char *)v33 + v34);
                  v32[1] = v35;
                  v32 += 2;
                  --v27;
                }
                while ( v27 );
              }
              CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)this + 3) + 16LL, 4u, &v62);
              v58[0] = CachedEffectNoRef;
              v6 = CachedEffectNoRef;
              if ( CachedEffectNoRef < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, CachedEffectNoRef, 0x56u, 0LL);
                operator delete(v29);
                wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v60);
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v59);
                v7 = v62;
                goto LABEL_43;
              }
              v38 = 0.0;
              v63[16] = 0;
              v39 = 0.0;
              LODWORD(v40) = (_DWORD)FLOAT_1_0;
              v41 = 0.0;
              v68[0] = _xmm;
              LODWORD(v42) = (_DWORD)FLOAT_1_0;
              v43 = 0.0;
              v68[1] = _xmm;
              v68[2] = _xmm;
              v68[3] = _xmm;
              if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, _QWORD))(*(_QWORD *)v59 + 8LL))(
                     v59,
                     v63,
                     0LL) )
              {
                v44 = *(float *)v63;
                v45 = *(float *)&v63[1];
                v46 = *(float *)&v63[4];
                v47 = *(float *)&v63[5];
                v48 = *(float *)&v63[12];
                v49 = *(float *)&v63[13];
                (**(void (__fastcall ***)(struct IBitmapRealization *, struct MilVertexXYZDUV2 **))v59)(v59, v64);
                v38 = v45 * (float)SHIDWORD(v64[0]);
                v40 = v44 * (float)SLODWORD(v64[0]);
                v39 = v46 * (float)SLODWORD(v64[0]);
                v41 = v48 * (float)SLODWORD(v64[0]);
                v42 = v47 * (float)SHIDWORD(v64[0]);
                v43 = v49 * (float)SHIDWORD(v64[0]);
              }
              v7 = v62;
              v50 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v62 + 72LL))(
                      v62,
                      0LL,
                      0LL,
                      v68,
                      64);
              v58[0] = v50;
              v6 = v50;
              if ( v50 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x6Du, 0LL);
              }
              else
              {
                v64[0] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v38), LODWORD(v40));
                v64[1] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v42), LODWORD(v39));
                v65 = v41;
                v66 = v43;
                v52 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct MilVertexXYZDUV2 **, int))(*(_QWORD *)v7 + 72LL))(
                        v7,
                        1LL,
                        0LL,
                        v64,
                        24);
                v58[0] = v52;
                v6 = v52;
                if ( v52 < 0 )
                {
                  v57 = 112;
                }
                else
                {
                  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v7 + 112LL))(
                    v7,
                    0LL,
                    v60,
                    1LL);
                  v52 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v7 + 64LL))(
                          v7,
                          L"vertices",
                          0LL,
                          v29,
                          32 * v26);
                  v58[0] = v52;
                  v6 = v52;
                  if ( v52 < 0 )
                  {
                    v57 = 119;
                  }
                  else
                  {
                    v54 = D2D1_COMPOSITE_MODE_MASK_INVERT;
                    if ( *((_DWORD *)this + 71) != 2 )
                      v54 = D2D1_COMPOSITE_MODE_SOURCE_OVER;
                    v52 = CD2DContext::FillEffect(
                            (ID2D1DeviceContext **)(*((_QWORD *)this + 3) + 16LL),
                            (const struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != (CDrawingContext *)16)),
                            v7,
                            0LL,
                            0LL,
                            D2D1_INTERPOLATION_MODE_LINEAR,
                            v54);
                    v58[0] = v52;
                    v6 = v52;
                    if ( v52 >= 0 )
                      goto LABEL_30;
                    v57 = 126;
                  }
                }
                MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, v57, 0LL);
              }
LABEL_30:
              operator delete(v29);
              goto LABEL_17;
            }
            v56 = 75;
          }
          v30 = MeshData;
          goto LABEL_16;
        }
      }
    }
  }
LABEL_43:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      7,
      *((_DWORD *)this + 1482));
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 112LL))(v7, 0LL, 0LL, 1LL);
  TranslateDXGIorD3DErrorInContext(v6, 0, v58);
  return v58[0];
}
