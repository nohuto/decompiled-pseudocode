/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x180038B38
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180038944 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??0CDecodeBitmap@@QEAA@XZ @ 0x18001DFC4 (--0CDecodeBitmap@@QEAA@XZ.c)
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18001FCC4 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x180038D34 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180038E4C (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_REALIZATION_INFO *a3)
{
  int v6; // ebx
  unsigned int v7; // ecx
  bool v8; // r12
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // xmm1_8
  HANDLE v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  struct ISwapChainRealization *v18; // rdx
  unsigned int v19; // edx
  unsigned int i; // edi
  HANDLE v21; // rcx
  CDecodeBitmap *v23; // rax
  unsigned int v24; // ecx
  CDecodeBitmap *v25; // rsi
  CMILCOMBase *v26; // rsi
  unsigned int v27; // ecx
  _DWORD v28[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  HANDLE v32[32]; // [rsp+58h] [rbp-B0h] BYREF
  struct ISwapChainRealization *v33; // [rsp+198h] [rbp+90h] BYREF

  v6 = 0;
  memset_0(v32, 0, sizeof(v32));
  v8 = 1;
  if ( (unsigned int)(*((_DWORD *)a3 + 1) - 1) > 0x1E )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802DC190, 4u, -2147024809, 0x405u, 0LL);
    return (unsigned int)v6;
  }
  v9 = NtOpenCompositionSurfaceSwapChainHandleInfo(*(_QWORD *)(*(_QWORD *)this + 32LL), (char *)this + 24, v32);
  if ( v9 < 0 )
  {
    v6 = v9 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802DC190, 4u, v9 | 0x10000000, 0x40Cu, 0LL);
    return (unsigned int)v6;
  }
  if ( *((_DWORD *)a3 + 1) <= 1u && *((_DWORD *)this + 8) != 3 )
  {
    v8 = 0;
    goto LABEL_6;
  }
  if ( !*((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 1) = 0LL;
    v23 = (CDecodeBitmap *)operator new(0x108uLL);
    v25 = v23;
    if ( v23 )
    {
      memset_0(v23, 0, 0x108uLL);
      v26 = CDecodeBitmap::CDecodeBitmap(v25);
    }
    else
    {
      v26 = 0LL;
    }
    if ( v26 )
    {
      CMILCOMBase::InternalAddRef(v26);
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0x13u, 0LL);
    }
    *((_QWORD *)this + 1) = v26;
    if ( v6 >= 0 )
    {
LABEL_6:
      v11 = *((_DWORD *)a3 + 1);
      v12 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          v13 = *(_DWORD *)a3;
          v33 = 0LL;
          v28[0] = v13;
          v28[1] = v12;
          v14 = *((_QWORD *)a3 + 3 * v12 + 3);
          v15 = v32[v12 + 1];
          v30 = *((_QWORD *)a3 + 3 * v12 + 2);
          v29 = v15;
          v31 = v14;
          v16 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
                  this,
                  a2,
                  (const struct CSM_REALIZATION_INFO *)v28,
                  v8,
                  &v33);
          v6 = v16;
          if ( v16 < 0 )
            break;
          v18 = v33;
          v32[v12 + 1] = 0LL;
          CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(this, v18);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
          v11 = *((_DWORD *)a3 + 1);
          if ( ++v12 >= v11 )
            goto LABEL_9;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802DC190, 4u, v16, 0x42Du, 0LL);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
      }
      else
      {
LABEL_9:
        if ( v11 > 1 )
          CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(this);
      }
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v6, 0x4F9u, 0LL);
  }
  if ( v6 >= 0 )
    goto LABEL_6;
  MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802DC190, 4u, v6, 0x415u, 0LL);
LABEL_11:
  v19 = (unsigned int)v32[0];
  for ( i = 0; i < v19; ++i )
  {
    v21 = v32[i + 1];
    if ( v21 )
    {
      CloseHandle(v21);
      v19 = (unsigned int)v32[0];
    }
  }
  return (unsigned int)v6;
}
