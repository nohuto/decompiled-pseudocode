/*
 * XREFs of ?Present@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x1801C4D3C
 * Callers:
 *     ?Present@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1801061F0 (-Present@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 *     ?Present@CCaptureRenderTarget@@$4PPPPPPPM@FA@EAAJ_N@Z @ 0x180106210 (-Present@CCaptureRenderTarget@@$4PPPPPPPM@FA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x1801C4B6C (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801C4B90 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlip.c)
 */

__int64 __fastcall CCaptureRenderTarget::Present(struct CD3DDevice **this)
{
  CCaptureRenderTarget *v2; // rsi
  int v3; // ebx
  struct CD3DDevice *D3DDeviceNoRef; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  char v17; // [rsp+20h] [rbp-29h]
  unsigned int v18; // [rsp+50h] [rbp+7h] BYREF
  __int64 v19; // [rsp+58h] [rbp+Fh] BYREF
  int v20; // [rsp+60h] [rbp+17h]
  int v21; // [rsp+64h] [rbp+1Bh]
  __int128 v22; // [rsp+68h] [rbp+1Fh] BYREF
  int v23; // [rsp+78h] [rbp+2Fh]
  __int64 *v24; // [rsp+80h] [rbp+37h]

  v2 = (CCaptureRenderTarget *)(this - 263);
  v3 = 0;
  v18 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
                     this - 29,
                     (const struct _LUID *)this - 28,
                     *(this - 18));
  if ( D3DDeviceNoRef && CCaptureRenderTarget::GetCurrentFrameBuffer(v2) )
  {
    v5 = *((unsigned int *)this - 44);
    v6 = *((_QWORD *)*(this - 261) + 76);
    v20 = *((_DWORD *)this - 500);
    v21 = *((_DWORD *)this - 499);
    v19 = v6;
    v7 = (__int64)*(this - 17);
    v24 = &v19;
    v22 = xmmword_180377DA8;
    v23 = 16;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           *((_QWORD *)*(this - 12) + v5),
           1LL,
           &v22);
    v18 = v8;
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x245u);
    }
    else
    {
      *(this - 20) = (struct CD3DDevice *)((char *)*(this - 20) + 1);
      v10 = (__int64)*(this - 20);
      v11 = (__int64)*(this - 21);
      *((_BYTE *)D3DDeviceNoRef + 1507) = 0;
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)D3DDeviceNoRef + 28) + 152LL))(
              *((_QWORD *)D3DDeviceNoRef + 28),
              v11,
              v10);
      v18 = v12;
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x249u);
      }
      else
      {
        v17 = 0;
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, _DWORD, _QWORD, _QWORD))(*(_QWORD *)*(this - 18) + 72LL))(
                *(this - 18),
                *(this - 21),
                *(this - 20),
                0LL,
                v17,
                0,
                0LL,
                0LL);
        v18 = v14;
        v3 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x253u);
      }
    }
  }
  if ( CCaptureRenderTarget::GetCurrentFrameBuffer(v2) )
  {
    *((_DWORD *)this - 44) = -1;
    (*(void (**)(void))(*(_QWORD *)v2 + 272LL))();
  }
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v3, 0, &v18);
    return v18;
  }
  return (unsigned int)v3;
}
