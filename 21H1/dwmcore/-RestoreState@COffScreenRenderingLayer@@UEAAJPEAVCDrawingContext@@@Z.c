/*
 * XREFs of ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18002FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x18002FE8C (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18002FEA4 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800300B0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::RestoreState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  struct CDrawingContext *v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx

  CWatermarkStack<float,64,2,10>::Pop((char *)a2 + 3232);
  v5 = CExternalLayer::RestoreState(this, v4);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x69u, 0LL);
  }
  else
  {
    v8 = CDrawingContext::FlushD2D(a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x73u, 0LL);
    }
    else if ( g_LockAndReadLayer )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
      v12 = *(int *)(*(_QWORD *)(v11 + 8) + 16LL) + v11 + 8;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v12 + 24LL))(
        v12,
        ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
    }
  }
  return v7;
}
