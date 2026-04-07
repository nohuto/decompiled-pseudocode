/*
 * XREFs of ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D1C0
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000A494 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000B5BC (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001271C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001D7A4 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180027330 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002BEAC (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047DA4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x1800A23B0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800AC1C8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B030 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::MoveToFront(CVisual *this, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  VisualCollection *v5; // rsi
  int v6; // eax
  int inserted; // eax

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    *((_BYTE *)this + 84) &= ~0x10u;
    v5 = (VisualCollection *)(v2 + 32);
    *((_BYTE *)this + 84) |= 16 * a2;
    if ( *(_DWORD *)(v2 + 72) )
    {
      if ( *(CVisual **)(*(_QWORD *)(v2 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 72) - 1)) != this )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 2);
        v6 = VisualCollection::Remove(v5, this);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1AFu);
        }
        else
        {
          inserted = VisualCollection::InsertRelative(v5, this, 0LL, 0, 1);
          v3 = inserted;
          if ( inserted < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x1B2u);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(CVisual *, __int64))this)(this, 1LL);
      }
    }
  }
  return v3;
}
