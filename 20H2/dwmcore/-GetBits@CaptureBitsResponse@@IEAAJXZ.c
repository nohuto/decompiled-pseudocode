/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180050014
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1800501A0 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x180192FC0 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003D42C (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180049318 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18004FCDC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800A6094 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C07A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  int RenderTargetBitmap; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // eax
  FastRegion::Internal::CRgnData *v14; // rcx
  int v15; // eax
  int v17; // eax
  unsigned int v18; // ecx
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
      &Microsoft_Windows_Dwm_Core_Provider_Context,
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
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, 0LL, 0, v15, 0xB8u, 0LL);
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
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_RTCAPTURE_Stop,
      v10,
      1u,
      &v25);
  return v7;
}
