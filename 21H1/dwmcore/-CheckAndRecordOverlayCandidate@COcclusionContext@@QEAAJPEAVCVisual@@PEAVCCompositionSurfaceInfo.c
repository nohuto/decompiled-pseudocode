/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800B9FDC
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180015E64 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004E030 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004F1AC (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801872B4 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        int a6)
{
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int (__fastcall ***v12)(_QWORD, GUID *, _QWORD **); // rcx
  __int64 v13; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  _QWORD *v17; // r15
  int v18; // edi
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v23; // [rsp+90h] [rbp+18h] BYREF
  void *v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 48LL))(a3);
  v10 = v9;
  if ( v9 )
  {
    v11 = v9 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v23 = 0LL;
    v12 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD **))(v10 + *(int *)(*(_QWORD *)(v10 + 8) + 4LL) + 8LL);
    if ( (**v12)(v12, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v23) >= 0
      && ((*(unsigned __int8 (__fastcall **)(_QWORD *))(*v23 + 56LL))(v23)
       || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v23 + 80LL))(v23))
      && (!*(_DWORD *)(a1 + 1464) && (*(_DWORD *)(a1 + 264) || !*(_DWORD *)(a1 + 192))
       || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v23 + 64LL))(v23))
      && (v16 = *(_QWORD **)(a1 + 1576), v17 = &v16[*(_QWORD *)(a1 + 1568)], v16 != v17) )
    {
      v18 = a6;
      v19 = a5;
      while ( 1 )
      {
        if ( *(_BYTE *)(*v16 + 11421LL) )
        {
          v20 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, *v16, a2, a3, v23, v24, v19, v18);
          v8 = v20;
          if ( v20 < 0 )
            break;
        }
        if ( ++v16 == v17 )
          goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x702u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
    }
    else
    {
LABEL_3:
      if ( v23 )
      {
        v15 = (__int64)v23 + *(int *)(v23[1] + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    v13 = v10 + *(int *)(*(_QWORD *)(v10 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v8;
}
