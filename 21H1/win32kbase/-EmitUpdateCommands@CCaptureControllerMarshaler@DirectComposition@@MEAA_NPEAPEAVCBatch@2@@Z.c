/*
 * XREFs of ?EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F7270
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00BD728 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitCaptureState@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F7094 (-EmitCaptureState@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitContentSize@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F7104 (-EmitContentSize@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitIsConstrainedBySize@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F7178 (-EmitIsConstrainedBySize@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransform@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F71E8 (-EmitTransform@CCaptureControllerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::EmitUpdateCommands(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  _DWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v9 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v9) )
      return v2;
    v5 = v9;
    *v9 = 16;
    *(_QWORD *)(v5 + 1) = 0LL;
    v5[3] = 0;
    v5[1] = 35;
    v5[2] = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 7);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 24);
    else
      v7 = 0;
    v5[3] = v7;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CCaptureControllerMarshaler::EmitCaptureState(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitContentSize(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitTransform(this, a2)
    && DirectComposition::CCaptureControllerMarshaler::EmitIsConstrainedBySize(this, a2) )
  {
    return 1;
  }
  return v2;
}
