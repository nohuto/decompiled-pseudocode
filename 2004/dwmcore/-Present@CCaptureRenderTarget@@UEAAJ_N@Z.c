/*
 * XREFs of ?Present@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180188E2C
 * Callers:
 *     ?Present@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800EF770 (-Present@CCaptureRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 *     ?Present@CCaptureRenderTarget@@$4PPPPPPPM@EI@EAAJ_N@Z @ 0x1800EF780 (-Present@CCaptureRenderTarget@@$4PPPPPPPM@EI@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180065D28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x1800E7FD8 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x180188DD4 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Present(CCaptureRenderTarget *this)
{
  CCaptureRenderTarget *v1; // rsi
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
  char v18; // [rsp+28h] [rbp-21h]
  unsigned int v19; // [rsp+50h] [rbp+7h] BYREF
  __int64 v20; // [rsp+58h] [rbp+Fh] BYREF
  int v21; // [rsp+60h] [rbp+17h]
  int v22; // [rsp+64h] [rbp+1Bh]
  __int128 v23; // [rsp+68h] [rbp+1Fh] BYREF
  int v24; // [rsp+78h] [rbp+2Fh]
  __int64 *v25; // [rsp+80h] [rbp+37h]

  v1 = (CCaptureRenderTarget *)((char *)this - 2136);
  v3 = 0;
  v19 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)((char *)this - 2136));
  if ( D3DDeviceNoRef && CCaptureRenderTarget::GetCurrentFrameBuffer(v1) )
  {
    v5 = *((unsigned int *)this - 48);
    v6 = *(_QWORD *)(*((_QWORD *)this - 265) + 456LL);
    v21 = *((_DWORD *)this - 514);
    v22 = *((_DWORD *)this - 513);
    v25 = &v20;
    v20 = v6;
    v7 = *((_QWORD *)this - 19);
    v23 = xmmword_1802E1218;
    v24 = 16;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           *(_QWORD *)(*((_QWORD *)this - 13) + 8 * v5),
           1LL,
           &v23);
    v19 = v8;
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x223u, 0LL);
    }
    else
    {
      v10 = ++*((_QWORD *)this - 22);
      v11 = *((_QWORD *)this - 23);
      *((_BYTE *)D3DDeviceNoRef + 1435) = 0;
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)D3DDeviceNoRef + 33) + 152LL))(
              *((_QWORD *)D3DDeviceNoRef + 33),
              v11,
              v10);
      v19 = v12;
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x227u, 0LL);
      }
      else
      {
        v18 = 0;
        v17 = 0;
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, char, _DWORD, _QWORD, _QWORD))(**((_QWORD **)this - 20) + 72LL))(
                *((_QWORD *)this - 20),
                *((_QWORD *)this - 23),
                *((_QWORD *)this - 22),
                0LL,
                v17,
                v18,
                0,
                0LL,
                0LL);
        v19 = v14;
        v3 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x232u, 0LL);
      }
    }
  }
  if ( CCaptureRenderTarget::GetCurrentFrameBuffer(v1) )
  {
    *((_DWORD *)this - 48) = -1;
    (*(void (**)(void))(*(_QWORD *)v1 + 272LL))();
  }
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v3, 0, &v19);
    return v19;
  }
  return (unsigned int)v3;
}
