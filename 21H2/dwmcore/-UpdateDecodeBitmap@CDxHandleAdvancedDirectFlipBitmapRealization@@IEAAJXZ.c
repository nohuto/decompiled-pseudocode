/*
 * XREFs of ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802A3EE8
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802A3770 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802A3984 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180069C74 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180081FE4 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800B84E0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x1800BB1AC (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x1801B8AB0 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x1802A661C (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  int IsValid; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  char *v5; // rcx
  __int64 v6; // r8
  CDecodeBitmap *v7; // rdi
  unsigned int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD); // rcx
  struct ID3D11Texture2D *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int RectangleCount; // eax
  _DWORD v15[2]; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp-21h] BYREF
  void *v17[10]; // [rsp+68h] [rbp-9h] BYREF

  IsValid = CRenderTargetBitmap::IsValid((CRenderTargetBitmap *)(*((_QWORD *)this + 36) + 192LL));
  v4 = IsValid;
  if ( IsValid < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, IsValid, 0x114u);
  }
  else if ( *((_BYTE *)this + 440) )
  {
    v5 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16;
    (**(void (__fastcall ***)(char *, _DWORD *))v5)(v5, v15);
    v16.left = 0;
    v16.top = 0;
    v16.right = v15[0];
    v16.bottom = v15[1];
    CRegion::CRegion((CRegion *)v17, (const struct MilRectU *)&v16);
    CRegion::Subtract(
      (const struct FastRegion::Internal::CRgnData **)v17,
      *((const struct FastRegion::Internal::CRgnData ***)this + 53));
    v6 = *((_QWORD *)this + 47);
    v7 = (CDecodeBitmap *)*((_QWORD *)this + 36);
    v8 = *(_DWORD *)(v6 + 240);
    v9 = (__int64 (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v6 + 16) + 20LL) + v6 + 16);
    v10 = (struct ID3D11Texture2D *)(**v9)(v9);
    v11 = CDecodeBitmap::CopyRegion(v7, (const struct CRegion *)v17, v10, v8);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x127u);
    }
    else
    {
      *(_BYTE *)(*((_QWORD *)this + 36) + 152LL) = 1;
      *((_BYTE *)this + 440) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
      {
        v16 = 0LL;
        FastRegion::CRegion::GetBoundingRect((LONG **)v17, &v16);
        RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v17);
        McTemplateU0xddddd_EventWriteTransfer(
          (unsigned int)v16.top,
          &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENT,
          *((unsigned int *)this + 21) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)((char *)this + 84)) << 32),
          RectangleCount,
          v16.left,
          v16.top,
          v16.right,
          v16.bottom);
      }
    }
    FastRegion::CRegion::FreeMemory(v17);
  }
  return v4;
}
