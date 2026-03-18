/*
 * XREFs of ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180261694
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180261010 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802611D8 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039EB0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800473E8 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x1800474F0 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18006C270 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800A6058 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800A7F44 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800CDFB0 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800D7DA0 (-GetRenderTargetInfo@CRenderTargetBitmap@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18017D24C (McTemplateU0xddddd_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 *     ?CopyBitmapRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJAEBVCRegion@@PEAUID2D1Bitmap1@@1@Z @ 0x180260D24 (-CopyBitmapRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJAEBVCRegion@@PEAUID2D1Bitmap1.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int IsValid; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rax
  char *v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, struct ID2D1Bitmap1 **, _QWORD); // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  const struct RenderTargetInfo *RenderTargetInfo; // rax
  int D2DBitmap; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int RectangleCount; // eax
  struct ID2D1Bitmap1 *v20; // [rsp+48h] [rbp-39h] BYREF
  struct ID2D1Bitmap1 *v21; // [rsp+50h] [rbp-31h] BYREF
  _DWORD v22[2]; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v23; // [rsp+60h] [rbp-21h] BYREF
  void *v24[10]; // [rsp+78h] [rbp-9h] BYREF
  const void *retaddr; // [rsp+E0h] [rbp+5Fh]

  IsValid = CRenderTargetBitmap::IsValid((CRenderTargetBitmap *)(*((_QWORD *)this + 32) + 192LL));
  v4 = IsValid;
  if ( IsValid < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, IsValid, 0x137u, 0LL);
  }
  else if ( !*((_BYTE *)this + 408) )
  {
    v5 = *((_QWORD *)this + 2);
    v21 = 0LL;
    v20 = 0LL;
    v6 = (char *)this + *(int *)(v5 + 16) + 16;
    (**(void (__fastcall ***)(char *, _DWORD *))v6)(v6, v22);
    v23.left = 0;
    v23.top = 0;
    v23.right = v22[0];
    v23.bottom = v22[1];
    CRegion::CRegion((CRegion *)v24, &v23);
    v7 = FastRegion::CRegion::Subtract(
           (const struct FastRegion::Internal::CRgnData **)v24,
           *((const struct FastRegion::Internal::CRgnData ***)this + 49));
    if ( v7 < 0 )
      ModuleFailFastForHRESULT(v7, retaddr);
    v8 = *((_QWORD *)this + 43) + *(int *)(*(_QWORD *)(*((_QWORD *)this + 43) + 16LL) + 16LL);
    v9 = *(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **, _QWORD))(*(_QWORD *)(v8 + 16) + 16LL);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v21);
    v10 = v9(v8 + 16, &v21, 0LL);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x149u, 0LL);
    }
    else
    {
      v12 = *((_QWORD *)this + 32);
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v20);
      RenderTargetInfo = (const struct RenderTargetInfo *)CRenderTargetBitmap::GetRenderTargetInfo(
                                                            *((_QWORD *)this + 32) + 120LL,
                                                            (__int64)&v23);
      D2DBitmap = CRenderTargetBitmap::GetD2DBitmap((CRenderTargetBitmap *)(v12 + 240), RenderTargetInfo, &v20, 0);
      v4 = D2DBitmap;
      if ( D2DBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, D2DBitmap, 0x14Cu, 0LL);
      }
      else
      {
        v16 = CDxHandleAdvancedDirectFlipBitmapRealization::CopyBitmapRegion(
                (FastRegion::Internal::CRgnData **)v24,
                v21,
                v20);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x150u, 0LL);
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v23 = 0LL;
            FastRegion::CRegion::GetBoundingRect((LONG **)v24, &v23);
            RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v24);
            McTemplateU0xddddd_EventWriteTransfer(
              (unsigned int)v23.top,
              &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
              *((unsigned int *)this + 21) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)((char *)this + 84)) << 32),
              RectangleCount,
              v23.left,
              v23.top,
              v23.right,
              v23.bottom);
          }
          *((_BYTE *)this + 408) = 1;
        }
      }
    }
    FastRegion::CRegion::FreeMemory(v24);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v20);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v21);
  }
  return v4;
}
