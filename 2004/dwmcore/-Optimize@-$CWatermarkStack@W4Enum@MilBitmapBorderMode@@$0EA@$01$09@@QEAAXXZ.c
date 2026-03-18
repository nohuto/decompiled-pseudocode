/*
 * XREFs of ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ @ 0x180079A8C
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180079150 (-PreCompute@CPreComputeContext@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180079AF4 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AAF50 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 */

void __fastcall CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  int v3; // edi
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 10 )
  {
    v4 = 64LL;
    if ( *(_DWORD *)(a1 + 24) > 0x40u )
      v4 = *(unsigned int *)(a1 + 24);
    v3 = 0;
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v4) <= *(_DWORD *)(a1 + 4) )
    {
      v7 = 0LL;
      v5 = HrMalloc(4uLL, (unsigned int)v4, &v7);
      if ( v5 >= 0 )
      {
        operator delete(*(void **)(a1 + 16));
        *(_QWORD *)(a1 + 16) = v7;
        *(_DWORD *)(a1 + 4) = v4;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xFEu, 0LL);
      }
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
  else
  {
    v3 = v1 + 1;
  }
  *(_DWORD *)(a1 + 8) = v3;
}
