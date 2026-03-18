/*
 * XREFs of ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18008DD94
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z @ 0x180194078 (-EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ @ 0x18008DF1C (-Optimize@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18008E188 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CBspPreComputeHelper::CleanupAfterWalking(CBspPreComputeHelper *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // r14
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  void *v46; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  *((_DWORD *)this + 88) = 0;
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((char *)this + 320);
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 288);
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((char *)this + 256);
  v3 = *((_DWORD *)this + 58);
  v4 = 64LL;
  if ( v3 == 10 )
  {
    v21 = *((_DWORD *)this + 62);
    v22 = 64LL;
    if ( v21 > 0x40 )
      v22 = v21;
    if ( (unsigned __int64)(3 * v22) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v22) <= *((_DWORD *)this + 57) )
    {
      v46 = 0LL;
      v23 = HrMalloc(4uLL, (unsigned int)v22, &v46);
      if ( v23 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 30));
        *((_QWORD *)this + 30) = v46;
        *((_DWORD *)this + 57) = v22;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x116u);
      }
    }
    *((_DWORD *)this + 62) = 0;
    v5 = 0;
  }
  else
  {
    v5 = v3 + 1;
  }
  *((_DWORD *)this + 58) = v5;
  v6 = *((_DWORD *)this + 50);
  if ( v6 == 10 )
  {
    v25 = *((_DWORD *)this + 54);
    v26 = 64LL;
    if ( v25 > 0x40 )
      v26 = v25;
    if ( (unsigned __int64)(3 * v26) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v26) <= *((_DWORD *)this + 49) )
    {
      v46 = 0LL;
      v27 = HrMalloc(4uLL, (unsigned int)v26, &v46);
      if ( v27 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 26));
        *((_QWORD *)this + 26) = v46;
        *((_DWORD *)this + 49) = v26;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x116u);
      }
    }
    *((_DWORD *)this + 54) = 0;
    v7 = 0;
  }
  else
  {
    v7 = v6 + 1;
  }
  *((_DWORD *)this + 50) = v7;
  v8 = *((_DWORD *)this + 42);
  if ( v8 == 10 )
  {
    v29 = *((_DWORD *)this + 46);
    v30 = 64LL;
    if ( v29 > 0x40 )
      v30 = v29;
    if ( (unsigned __int64)(3 * v30) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v30) <= *((_DWORD *)this + 41) )
    {
      v46 = 0LL;
      v31 = HrMalloc(4uLL, (unsigned int)v30, &v46);
      if ( v31 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 22));
        *((_QWORD *)this + 22) = v46;
        *((_DWORD *)this + 41) = v30;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0x116u);
      }
    }
    *((_DWORD *)this + 46) = 0;
    v9 = 0;
  }
  else
  {
    v9 = v8 + 1;
  }
  *((_DWORD *)this + 42) = v9;
  v10 = *((_DWORD *)this + 34);
  if ( v10 == 10 )
  {
    v33 = *((_DWORD *)this + 38);
    v34 = 64LL;
    if ( v33 > 0x40 )
      v34 = v33;
    if ( (unsigned __int64)(3 * v34) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v34) <= *((_DWORD *)this + 33) )
    {
      v46 = 0LL;
      v35 = HrMalloc(4uLL, (unsigned int)v34, &v46);
      if ( v35 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 18));
        *((_QWORD *)this + 18) = v46;
        *((_DWORD *)this + 33) = v34;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, v35, 0x116u);
      }
    }
    *((_DWORD *)this + 38) = 0;
    v11 = 0;
  }
  else
  {
    v11 = v10 + 1;
  }
  *((_DWORD *)this + 34) = v11;
  v12 = *((_DWORD *)this + 26);
  if ( v12 == 8 )
  {
    v19 = 8LL;
    if ( *((_DWORD *)this + 30) > 8u )
      v19 = *((unsigned int *)this + 30);
    if ( (unsigned __int64)(3 * v19) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v19) <= *((_DWORD *)this + 25) )
    {
      v46 = 0LL;
      v37 = HrMalloc(0x44uLL, (unsigned int)v19, &v46);
      if ( v37 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 14));
        *((_QWORD *)this + 14) = v46;
        *((_DWORD *)this + 25) = v19;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, v37, 0x116u);
      }
    }
    *((_DWORD *)this + 30) = 0;
    v13 = 0;
  }
  else
  {
    v13 = v12 + 1;
  }
  *((_DWORD *)this + 26) = v13;
  v14 = *((_DWORD *)this + 18);
  if ( v14 == 8 )
  {
    v20 = 8LL;
    if ( *((_DWORD *)this + 22) > 8u )
      v20 = *((unsigned int *)this + 22);
    if ( (unsigned __int64)(3 * v20) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v20) <= *((_DWORD *)this + 17) )
    {
      v46 = 0LL;
      v39 = HrMalloc(0x44uLL, (unsigned int)v20, &v46);
      if ( v39 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 10));
        *((_QWORD *)this + 10) = v46;
        *((_DWORD *)this + 17) = v20;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0LL, v39, 0x116u);
      }
    }
    *((_DWORD *)this + 22) = 0;
    v15 = 0;
  }
  else
  {
    v15 = v14 + 1;
  }
  *((_DWORD *)this + 18) = v15;
  v16 = *((_DWORD *)this + 10);
  if ( v16 == 10 )
  {
    v41 = 64LL;
    if ( *((_DWORD *)this + 14) > 0x40u )
      v41 = *((unsigned int *)this + 14);
    if ( (unsigned __int64)(3 * v41) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v41) <= *((_DWORD *)this + 9) )
    {
      v46 = 0LL;
      v42 = HrMalloc(8uLL, (unsigned int)v41, &v46);
      if ( v42 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 6));
        *((_QWORD *)this + 6) = v46;
        *((_DWORD *)this + 9) = v41;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0LL, v42, 0x116u);
      }
    }
    *((_DWORD *)this + 14) = 0;
    v17 = 0;
  }
  else
  {
    v17 = v16 + 1;
  }
  *((_DWORD *)this + 10) = v17;
  v18 = *((_DWORD *)this + 2);
  if ( v18 == 10 )
  {
    if ( *((_DWORD *)this + 6) > 0x40u )
      v4 = *((unsigned int *)this + 6);
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 1) )
    {
      v46 = 0LL;
      v44 = HrMalloc(8uLL, (unsigned int)v4, &v46);
      if ( v44 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 2));
        *((_QWORD *)this + 2) = v46;
        *((_DWORD *)this + 1) = v4;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0LL, v44, 0x116u);
      }
    }
    *((_DWORD *)this + 6) = 0;
  }
  else
  {
    v2 = v18 + 1;
  }
  *((_DWORD *)this + 2) = v2;
}
