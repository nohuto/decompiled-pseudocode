/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18008B768
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18008B700 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x180197810 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180029AC8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007ACF4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18008B8F4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18008BC74 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BB450 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  int RenderTargetBitmap; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // eax
  FastRegion::Internal::CRgnData *v14; // rcx
  int v15; // eax
  int v17; // eax
  __int64 v18; // rcx
  _BYTE v19[8]; // [rsp+30h] [rbp-9h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-1h]
  _DWORD *v21; // [rsp+40h] [rbp+7h]
  __int64 v22; // [rsp+48h] [rbp+Fh]
  int v23; // [rsp+50h] [rbp+17h]
  _DWORD v24[4]; // [rsp+60h] [rbp+27h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+70h] [rbp+37h] BYREF

  v3 = *((_DWORD *)this + 417);
  v24[0] = 0;
  v24[1] = 0;
  v24[2] = v3;
  v24[3] = *((_DWORD *)this + 418);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_GETBITS,
      a3,
      1u,
      &v25);
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v7 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, RenderTargetBitmap, 0x9Eu, 0LL);
  }
  else
  {
    v8 = CaptureBitsResponse::RenderForCapture(this);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xA1u, 0LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 200LL))(*((_QWORD *)this + 6)) )
    {
      FastRegion::Internal::CRgnData::BeginIterator(
        *(FastRegion::Internal::CRgnData **)(*((_QWORD *)this + 6) + 5800LL),
        (struct FastRegion::CRegion::Iterator *)v19);
      while ( (unsigned __int64)v21 < v20 )
      {
        v25 = 0LL;
        HIDWORD(v25.Ptr) = *v21;
        v25.Reserved = v21[2];
        v11 = 2 * v23;
        LODWORD(v25.Ptr) = *(_DWORD *)(v22 + 4 * v11);
        v12 = *(_DWORD *)(v22 + 4 * v11 + 4);
        LODWORD(v11) = *((_DWORD *)this + 416);
        v13 = *((_DWORD *)this + 415);
        HIDWORD(v25.Ptr) -= v11;
        LODWORD(v25.Ptr) -= v13;
        v25.Reserved -= v11;
        v25.Size = v12 - v13;
        if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v25, v24) )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 8) + 48LL))(
                  *((_QWORD *)this + 8),
                  &v25,
                  *((_QWORD *)this + 214),
                  LODWORD(v25.Ptr),
                  HIDWORD(v25.Ptr));
          v7 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v15, 0xB8u, 0LL);
            break;
          }
        }
        FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v19);
      }
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 8) + 48LL))(
              *((_QWORD *)this + 8),
              v24,
              *((_QWORD *)this + 214),
              0LL,
              0);
      v7 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xBEu, 0LL);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_Stop,
      v10,
      1u,
      &v25);
  return v7;
}
