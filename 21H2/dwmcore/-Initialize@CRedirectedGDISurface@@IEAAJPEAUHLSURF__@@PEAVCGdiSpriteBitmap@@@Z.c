/*
 * XREFs of ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800D1CFC
 * Callers:
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800D1C64 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180079DA4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180156394 (McTemplateU0xx_EventWriteTransfer.c)
 */

__int64 __fastcall CRedirectedGDISurface::Initialize(
        CRedirectedGDISurface *this,
        HLSURF a2,
        struct CGdiSpriteBitmap *a3)
{
  __int64 v5; // rcx
  _QWORD *inserted; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // rcx
  signed int LastError; // eax
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int NewElement; // [rsp+60h] [rbp+10h] BYREF

  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = a3;
  Buffer[1] = this;
  v5 = *((_QWORD *)this + 2);
  Buffer[0] = a2;
  LOBYTE(NewElement) = 0;
  Buffer[2] = a3;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 8), Buffer, 0x18u, (PBOOLEAN)&NewElement);
  if ( inserted )
  {
    if ( !(_BYTE)NewElement )
    {
      inserted[2] = a3;
      inserted[1] = this;
    }
    v8 = *((_QWORD *)this + 3);
    v9 = 0;
    NewElement = 0;
    *((_BYTE *)this + 40) = 1;
    if ( (unsigned int)DwmHLSurfOpenCompositorRef(v8) )
    {
      *((_BYTE *)this + 41) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xx_EventWriteTransfer(
          v10,
          &EVTDESC_PROCESS_GDISPRITE_LOGICALSURFACE_ASSOCIATION,
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 3));
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
      {
        v9 = (unsigned __int16)LastError | 0x80070000;
        NewElement = v9;
      }
      else
      {
        NewElement = LastError;
      }
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x2Au, 0LL);
    NewElement = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x48u, 0LL);
  }
  TranslateDXGIorD3DErrorInContext(v9, 10, &NewElement);
  return NewElement;
}
