/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008DF84
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800499A8 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18008C2EC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18008C388 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ @ 0x18008DF1C (-Optimize@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18008E188 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800D5494 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
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
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // eax
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

  *((_DWORD *)this + 84) = 0;
  v2 = *((_DWORD *)this + 86);
  v3 = 64LL;
  if ( v2 == 10 )
  {
    v12 = *((_DWORD *)this + 90);
    v13 = 64LL;
    if ( v12 > 0x40 )
      v13 = v12;
    if ( (unsigned __int64)(3 * v13) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v13) <= *((_DWORD *)this + 85) )
    {
      v26 = 0LL;
      v18 = HrMalloc(0x10uLL, (unsigned int)v13, &v26);
      if ( v18 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 44));
        *((_QWORD *)this + 44) = v26;
        *((_DWORD *)this + 85) = v13;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x116u);
      }
    }
    *((_DWORD *)this + 90) = 0;
    v4 = 0;
  }
  else
  {
    v4 = v2 + 1;
  }
  *((_DWORD *)this + 86) = v4;
  v5 = 8LL;
  *((_DWORD *)this + 92) = 0;
  v6 = *((_DWORD *)this + 94);
  if ( v6 == 8 )
  {
    v17 = *((_DWORD *)this + 98);
    if ( v17 > 8 )
      v5 = v17;
    if ( (unsigned __int64)(3 * v5) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v5) <= *((_DWORD *)this + 93) )
    {
      v26 = 0LL;
      v20 = HrMalloc(0x44uLL, (unsigned int)v5, &v26);
      if ( v20 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 48));
        *((_QWORD *)this + 48) = v26;
        *((_DWORD *)this + 93) = v5;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x116u);
      }
    }
    *((_DWORD *)this + 98) = 0;
    v7 = 0;
  }
  else
  {
    v7 = v6 + 1;
  }
  *((_DWORD *)this + 94) = v7;
  *((_DWORD *)this + 100) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 400);
  *((_DWORD *)this + 108) = 0;
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((__int64)this + 432);
  while ( *((_DWORD *)this + 122) )
    CDrawingContext::PopLayerInternal(this);
  CLightStack::Clear((CDrawingContext *)((char *)this + 528));
  *((_DWORD *)this + 198) = 0;
  *((_DWORD *)this + 208) = 0;
  v8 = *((_DWORD *)this + 210);
  if ( v8 == 10 )
  {
    v14 = *((_DWORD *)this + 214);
    v15 = 64LL;
    if ( v14 > 0x40 )
      v15 = v14;
    if ( (unsigned __int64)(3 * v15) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v15) <= *((_DWORD *)this + 209) )
    {
      v26 = 0LL;
      v22 = HrMalloc(0x1CuLL, (unsigned int)v15, &v26);
      if ( v22 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 106));
        *((_QWORD *)this + 106) = v26;
        *((_DWORD *)this + 209) = v15;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x116u);
      }
    }
    *((_DWORD *)this + 214) = 0;
    v9 = 0;
  }
  else
  {
    v9 = v8 + 1;
  }
  *((_DWORD *)this + 210) = v9;
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 864));
  *((_DWORD *)this + 776) = 0;
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((__int64)this + 3104);
  *((_DWORD *)this + 830) = 0;
  v10 = *((_DWORD *)this + 832);
  if ( v10 == 10 )
  {
    v16 = *((_DWORD *)this + 836);
    if ( v16 > 0x40 )
      v3 = v16;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 831) )
    {
      v26 = 0LL;
      v24 = HrMalloc(0x10uLL, (unsigned int)v3, &v26);
      if ( v24 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 417));
        *((_QWORD *)this + 417) = v26;
        *((_DWORD *)this + 831) = v3;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x116u);
      }
    }
    *((_DWORD *)this + 836) = 0;
    v11 = 0;
  }
  else
  {
    v11 = v10 + 1;
  }
  *((_DWORD *)this + 832) = v11;
  *((_DWORD *)this + 784) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 3136);
}
