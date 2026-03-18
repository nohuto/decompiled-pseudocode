/*
 * XREFs of ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x18008FFA4
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18008FCA4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18008DD08 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x1800900C4 (-SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterForSignaling(CGdiSpriteBitmap *this)
{
  char v1; // si
  int v2; // edi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+3Ch] [rbp-14h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+48h] [rbp-8h]
  unsigned int v16; // [rsp+60h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 129);
  v2 = 0;
  v16 = 0;
  if ( *((_BYTE *)this + 127) )
  {
    v1 = 1;
  }
  else
  {
    v4 = *((_QWORD *)this + 11);
    if ( *((_QWORD *)this + 49) )
    {
      v16 = 1;
      v9 = CRedirectedGDISurface::SetInformation(v4, 1LL, 4LL, &v16);
      v16 = v9;
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802DCCB0, 2u, v9, 0x3BCu, 0LL);
        goto LABEL_7;
      }
      v1 = 1;
    }
    else
    {
      v5 = *((_DWORD *)this + 24);
      v11 = 0LL;
      v13 = v5;
      v14 = *((_QWORD *)this + 57);
      v15 = *((_QWORD *)this + 56);
      v12 = 1;
      v6 = CRedirectedGDISurface::SetInformation(v4, 4LL, 32LL, &v11);
      v16 = v6;
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802DCCB0, 2u, v6, 0x3B4u, 0LL);
        goto LABEL_7;
      }
    }
    *((_BYTE *)this + 127) = 1;
  }
  if ( v1 )
    CGdiSpriteBitmap::DirtyFromAccum(this);
LABEL_7:
  TranslateDXGIorD3DErrorInContext(v2, 9, &v16);
  return v16;
}
