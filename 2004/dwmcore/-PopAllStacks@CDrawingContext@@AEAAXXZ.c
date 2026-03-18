/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180079AF4
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007B624 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180099404 (--1CDrawingContext@@EEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003BFE0 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ @ 0x180079A8C (-Optimize@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x180079D40 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180079DA8 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180079E4C (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AAF50 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v2; // eax
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdi
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  void *v26; // [rsp+50h] [rbp+20h] BYREF

  *((_DWORD *)this + 94) = 0;
  v2 = *((_DWORD *)this + 96);
  v3 = 64LL;
  if ( v2 == 10 )
  {
    v13 = *((_DWORD *)this + 100);
    v14 = 64LL;
    if ( v13 > 0x40 )
      v14 = v13;
    if ( (unsigned __int64)(3 * v14) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v14) <= *((_DWORD *)this + 95) )
      {
        v26 = 0LL;
        v18 = HrMalloc(0x10uLL, (unsigned int)v14, &v26);
        if ( v18 >= 0 )
        {
          operator delete(*((void **)this + 49));
          *((_QWORD *)this + 49) = v26;
          *((_DWORD *)this + 95) = v14;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xFEu, 0LL);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    *((_DWORD *)this + 100) = 0;
    v4 = 0;
  }
  else
  {
    v4 = v2 + 1;
  }
  *((_DWORD *)this + 96) = v4;
  v5 = 8LL;
  *((_DWORD *)this + 102) = 0;
  v6 = *((_DWORD *)this + 104);
  if ( v6 == 8 )
  {
    v12 = *((_DWORD *)this + 108);
    if ( v12 > 8 )
      v5 = v12;
    if ( (unsigned __int64)(3 * v5) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v5) <= *((_DWORD *)this + 103) )
    {
      v26 = 0LL;
      v20 = HrMalloc(0x44uLL, (unsigned int)v5, &v26);
      if ( v20 >= 0 )
      {
        operator delete(*((void **)this + 53));
        *((_QWORD *)this + 53) = v26;
        *((_DWORD *)this + 103) = v5;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 108) = 0;
    v7 = 0;
  }
  else
  {
    v7 = v6 + 1;
  }
  *((_DWORD *)this + 104) = v7;
  *((_DWORD *)this + 110) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 440);
  while ( *((_DWORD *)this + 124) )
    CDrawingContext::PopLayerInternal((__int64)this);
  CLightStack::Clear((CDrawingContext *)((char *)this + 600));
  *((_DWORD *)this + 216) = 0;
  *((_DWORD *)this + 226) = 0;
  v8 = *((_DWORD *)this + 228);
  if ( v8 == 10 )
  {
    v15 = *((_DWORD *)this + 232);
    v16 = 64LL;
    if ( v15 > 0x40 )
      v16 = v15;
    if ( (unsigned __int64)(3 * v16) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v16) <= *((_DWORD *)this + 227) )
      {
        v26 = 0LL;
        v22 = HrMalloc(0x1CuLL, (unsigned int)v16, &v26);
        if ( v22 >= 0 )
        {
          operator delete(*((void **)this + 115));
          *((_QWORD *)this + 115) = v26;
          *((_DWORD *)this + 227) = v16;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xFEu, 0LL);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    *((_DWORD *)this + 232) = 0;
    v9 = 0;
  }
  else
  {
    v9 = v8 + 1;
  }
  *((_DWORD *)this + 228) = v9;
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 936));
  *((_DWORD *)this + 808) = 0;
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize((__int64)this + 3232);
  *((_DWORD *)this + 862) = 0;
  v10 = *((_DWORD *)this + 864);
  if ( v10 == 10 )
  {
    v17 = *((_DWORD *)this + 868);
    if ( v17 > 0x40 )
      v3 = v17;
    if ( (unsigned __int64)(3 * v3) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 863) )
      {
        v26 = 0LL;
        v24 = HrMalloc(0x10uLL, (unsigned int)v3, &v26);
        if ( v24 >= 0 )
        {
          operator delete(*((void **)this + 433));
          *((_QWORD *)this + 433) = v26;
          *((_DWORD *)this + 863) = v3;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xFEu, 0LL);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    *((_DWORD *)this + 868) = 0;
    v11 = 0;
  }
  else
  {
    v11 = v10 + 1;
  }
  *((_DWORD *)this + 864) = v11;
  *((_DWORD *)this + 816) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 3264);
}
