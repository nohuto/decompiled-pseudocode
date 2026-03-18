/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003E174
 * Callers:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800F04C0 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceText.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@7EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800F3920 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@7EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextu.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800F3A60 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180261FB8 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18026410C (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z @ 0x18003E25C (-ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x18003E430 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char *v3; // r14
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  int BitmapInternal; // eax
  __int64 v14; // rcx
  struct IDeviceTexture *v15; // rax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct IDeviceTexture **); // rcx
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (char *)this - 240;
  v7 = CRenderTargetBitmap::ValidateRenderTargetInfo((CRenderTargetBitmap *)((char *)this - 240), a2);
  v10 = v7;
  if ( v7 < 0 )
  {
    v19 = 138;
    goto LABEL_16;
  }
  if ( *((_BYTE *)this - 96) )
  {
    v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDeviceTexture **))(*((_QWORD *)this - 13)
                                                                             + 8LL
                                                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this - 13)
                                                                                                  + 8LL)
                                                                                      + 4LL));
    v7 = (**v17)(v17, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, a3);
    v10 = v7;
    if ( v7 >= 0 )
      return v10;
    v19 = 146;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v19, 0LL);
    return v10;
  }
  *a3 = 0LL;
  LOBYTE(v9) = *((_BYTE *)a2 + 20);
  v11 = *((unsigned int *)a2 + 2);
  v12 = *(_QWORD *)a2;
  v20 = 0LL;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v3, v12, v11, v9, &v20);
  v10 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, BitmapInternal, 0x60u, 0LL);
    if ( v20 )
    {
      v18 = *(int *)(*(_QWORD *)(v20 + 8) + 4LL) + v20 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  else
  {
    if ( v20 )
    {
      v14 = *(int *)(*(_QWORD *)(v20 + 8) + 20LL);
      v15 = (struct IDeviceTexture *)(v14 + v20 + 8);
    }
    else
    {
      v15 = 0LL;
    }
    *a3 = v15;
  }
  if ( (v10 & 0x80000000) != 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v10, 0x8Eu, 0LL);
  return v10;
}
