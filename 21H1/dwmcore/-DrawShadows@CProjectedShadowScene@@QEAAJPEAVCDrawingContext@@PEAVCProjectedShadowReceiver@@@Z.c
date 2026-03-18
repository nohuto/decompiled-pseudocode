/*
 * XREFs of ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000844C
 * Callers:
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x180008398 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 * Callees:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008B30 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18000A558 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::DrawShadows(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax
  _QWORD *v10; // rbx
  struct CProjectedShadowScene::ReceiverEntry *v11; // rbp
  unsigned __int64 v12; // r9
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx

  v6 = CProjectedShadowScene::PrepareShadows(this, a2, a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x397u, 0LL);
  }
  else
  {
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, a3);
    v10 = (_QWORD *)*((_QWORD *)this + 7);
    v11 = ReceiverEntry;
    while ( 1 )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == *((_QWORD **)this + 7) )
        break;
      v12 = v10[2];
      v13 = (_QWORD *)*((_QWORD *)v11 + 1);
      v14 = v13;
      v15 = (__int64 *)v13[1];
      while ( !*((_BYTE *)v15 + 25) )
      {
        if ( v15[4] < v12 )
        {
          v15 = (__int64 *)v15[2];
        }
        else
        {
          v13 = v15;
          v15 = (__int64 *)*v15;
        }
      }
      if ( v13 == v14 || v12 < v13[4] )
      {
        v13 = (_QWORD *)*((_QWORD *)v11 + 1);
        v14 = v13;
      }
      if ( v13 != v14 )
      {
        v16 = v13[5] + 56LL + *(int *)(*(_QWORD *)(v13[5] + 56LL) + 8LL);
        v17 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD))(*(_QWORD *)v16 + 16LL))(
                v16,
                a2,
                *(_QWORD *)(v12 + 56) + 132LL,
                0LL);
        v8 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x3ACu, 0LL);
          return v8;
        }
      }
    }
  }
  return v8;
}
