/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x180050C00
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180002CE0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032BFC (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002C554 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B450 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x180041618 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x1800427C8 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___ @ 0x180050D00 (CTransitionVisualController--ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800A99C4 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneWithOwnedWindows(
        __int64 a1,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        int a4,
        int a5)
{
  unsigned int v5; // r15d
  struct CVisual *v6; // rsi
  bool v7; // zf
  struct tagRECT *v9; // rdi
  int v11; // eax
  int v12; // ebx
  LONG right; // eax
  int v15; // edx
  int bottom; // r11d
  int v17; // eax
  int v18; // r10d
  int left; // r8d
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int inserted; // eax
  bool v27; // [rsp+40h] [rbp-21h] BYREF
  struct CVisual *v28; // [rsp+48h] [rbp-19h] BYREF
  struct CVisual *v29; // [rsp+50h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-9h] BYREF
  struct CVisual **v31; // [rsp+68h] [rbp+7h]
  bool *v32; // [rsp+70h] [rbp+Fh]
  int v33; // [rsp+D8h] [rbp+77h] BYREF

  v33 = a4;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 96) == -1LL;
  v9 = (struct tagRECT *)*((_QWORD *)a2 + 91);
  v28 = a3;
  v29 = 0LL;
  v27 = 1;
  if ( v7 )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0xDFu);
  }
  else
  {
    *(_QWORD *)&rc.right = a1;
    *(_QWORD *)&rc.left = &v33;
    LOBYTE(a3) = 1;
    v31 = &v28;
    v32 = &v27;
    CTransitionVisualController::ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___(v9, &rc, a3);
    v11 = CTransitionVisualController::_StageCloneRelative(
            (CTransitionVisualController *)a1,
            a2,
            v28,
            0LL,
            0LL,
            1,
            1,
            &v27);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v11,
        0xF4u);
LABEL_5:
      if ( v12 >= 0 )
        goto LABEL_6;
      goto LABEL_11;
    }
    if ( *((_DWORD *)v28 + 18) )
    {
      if ( a5 == 1 )
      {
        right = v9[38].right;
        rc = v9[3];
        if ( (right & 0x1000000) != 0 )
        {
          v15 = 0;
          bottom = v9[38].bottom;
          if ( v9[39].top - bottom >= 0 )
            v15 = v9[39].top - bottom;
          v17 = 0;
          if ( rc.right - rc.left >= 0 )
            v17 = rc.right - rc.left;
          if ( v15 > v17 )
            rc.right = v15 + rc.left;
          v18 = 0;
          left = v9[39].left;
          if ( v9[39].right - left >= 0 )
            v18 = v9[39].right - left;
          v20 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v20 = rc.bottom - rc.top;
          if ( v18 > v20 )
            rc.bottom = v18 + rc.top;
          OffsetRect(&rc, bottom, left);
          right = v9[38].right;
        }
        if ( (right & 0x800000) != 0 )
        {
          v21 = 0;
          if ( v9[41].top - v9[40].bottom >= 0 )
            v21 = v9[41].top - v9[40].bottom;
          v22 = 0;
          if ( rc.right - rc.left >= 0 )
            v22 = rc.right - rc.left;
          if ( v21 > v22 )
            rc.right = v21 + rc.left;
          v23 = 0;
          if ( v9[41].right - v9[41].left >= 0 )
            v23 = v9[41].right - v9[41].left;
          v24 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v24 = rc.bottom - rc.top;
          if ( v23 > v24 )
            rc.bottom = rc.top + v23;
        }
        v25 = CTransitionVisualController::CreateBackground(&rc, &v29);
        v12 = v25;
        if ( v25 >= 0 )
        {
          v6 = v29;
          inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v28 + 32), v29, 0LL, 1u, 1);
          v12 = inserted;
          if ( inserted >= 0 )
            goto LABEL_6;
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            inserted,
            0x11Bu);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v25,
            0x11Au);
          v6 = v29;
        }
      }
      goto LABEL_5;
    }
    v12 = -2003304447;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2003304447,
      0xF9u);
  }
LABEL_11:
  VisualCollection::RemoveAll((struct CVisual *)((char *)v28 + 32));
  while ( *(_DWORD *)(a1 + 48) > v5 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 48) - 1)),
      0);
    DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)(a1 + 24), *(_DWORD *)(a1 + 48) - 1);
  }
LABEL_6:
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v12;
}
