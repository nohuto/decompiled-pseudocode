/*
 * XREFs of ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B36B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x180007E34 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180008A50 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180009014 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000A3DC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000AD58 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18002B44C (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180033770 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180033E64 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x1800ADFC8 (_lambda_81f2de84cd03038fe2b12ca1386d224e_--operator().c)
 *     ?GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800AE7E0 (-GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800B0C3C (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800B1558 (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3FB0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppSwitch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  int v7; // eax
  unsigned int v8; // r15d
  int v9; // edi
  CAnimatedTransitionVisual **v10; // r13
  char v11; // r14
  struct tagRECT *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  CBaseObject *v18; // r14
  int PVLTarget; // eax
  bool v20; // zf
  int v21; // edx
  CBaseObject *v22; // r14
  int v23; // eax
  struct tagPOINT *v24; // rcx
  struct tagRECT *v25; // rcx
  CBaseObject *v26; // rbx
  char result; // al
  unsigned int v28; // [rsp+20h] [rbp-69h]
  CBaseObject *v29; // [rsp+50h] [rbp-39h] BYREF
  CBaseObject *v30; // [rsp+58h] [rbp-31h] BYREF
  CBaseObject *v31; // [rsp+60h] [rbp-29h] BYREF
  int *v32; // [rsp+68h] [rbp-21h]
  struct tagRECT v33; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v35; // [rsp+90h] [rbp+7h] BYREF

  v32 = a4;
  CGroupingStoryboard::_WindowEnumCallback();
  v7 = *(_DWORD *)(a2 + 616);
  v29 = 0LL;
  v8 = v7 & 0xFFF;
  v31 = 0LL;
  v30 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_84;
    if ( v8 == 2 )
    {
      *(_BYTE *)(a1 + 168) = 0;
      goto LABEL_84;
    }
    if ( v8 != 3 )
      goto LABEL_84;
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_76;
  }
  if ( (v7 & 0x1000000) == 0 || (v11 = 1, IsRectEmpty((const RECT *)(a2 + 620))) )
    v11 = 0;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v33);
  v12 = (struct tagRECT *)(a2 + 636);
  if ( !v11 )
    v12 = &v33;
  v35 = *v12;
  rc = v35;
  switch ( v8 )
  {
    case 2u:
      if ( *(_DWORD *)(a2 + 112) == 1 )
        *(_DWORD *)(a2 + 616) |= 0x4000000u;
      PVLTarget = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 616));
      v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              PVLTarget,
              (struct tagRECT *)((a2 + 620) & -(__int64)(v11 != 0)),
              0LL,
              0x11u,
              1,
              &v29);
      v9 = v14;
      if ( v14 < 0 )
      {
        v28 = 2529;
        goto LABEL_14;
      }
      if ( *((_DWORD *)v29 + 17) != 2 )
        *((_DWORD *)v29 + 17) = 1;
      v20 = !CStoryboard::IsRTL();
      v21 = 0;
      if ( v20 )
      {
        if ( v33.right - v33.left >= 0 )
          v21 = v33.right - v33.left;
        v21 = -v21;
      }
      else if ( v33.right - v33.left >= 0 )
      {
        v21 = v33.right - v33.left;
      }
      OffsetRect(&rc, v21, 0);
      goto LABEL_61;
    case 3u:
      if ( *(_DWORD *)(a2 + 112) == 1 )
        *(_DWORD *)(a2 + 616) |= 0x4000000u;
      if ( *(_BYTE *)(a1 + 168) )
        v17 = 3;
      else
        v17 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 616));
      if ( v11 )
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v17,
                (struct tagRECT *)(a2 + 620),
                0LL,
                0xFFFFFFFF,
                1,
                &v29);
        v9 = v14;
        if ( v14 < 0 )
        {
          v28 = 2463;
          goto LABEL_14;
        }
      }
      else
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v17,
                0LL,
                0LL,
                0xFFFFFFFF,
                1,
                &v29);
        v9 = v14;
        if ( v14 < 0 )
        {
          v28 = 2467;
          goto LABEL_14;
        }
      }
      v18 = v29;
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v29 + 5), 0.0);
      if ( *((_DWORD *)v18 + 17) != 2 )
        *((_DWORD *)v18 + 17) = 1;
      goto LABEL_61;
    case 0x16u:
      if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2)
        || !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
      {
        goto LABEL_84;
      }
      if ( *(_BYTE *)(a1 + 168) )
        v16 = 7;
      else
        v16 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 616));
      v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              v16,
              0LL,
              0LL,
              0xFFFFFFFF,
              1,
              &v29);
      v9 = v14;
      if ( v14 < 0 )
      {
        v28 = 2488;
        goto LABEL_14;
      }
      if ( *((_DWORD *)v29 + 17) != 2 )
        *((_DWORD *)v29 + 17) = 1;
      v35 = *(struct tagRECT *)((char *)v29 + 88);
      rc = v35;
      goto LABEL_61;
    case 0x1Cu:
      if ( *(_BYTE *)(a1 + 168) )
        v15 = 5;
      else
        v15 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 616));
      if ( v11 )
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                (struct tagRECT *)(a2 + 620),
                0LL,
                0xFFFFFFFF,
                1,
                &v29);
        v9 = v14;
        if ( v14 < 0 )
        {
          v28 = 2505;
          goto LABEL_14;
        }
      }
      else
      {
        v14 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                0LL,
                0LL,
                0xFFFFFFFF,
                1,
                &v29);
        v9 = v14;
        if ( v14 < 0 )
        {
          v28 = 2509;
          goto LABEL_14;
        }
      }
      if ( *((_DWORD *)v29 + 17) != 2 )
        *((_DWORD *)v29 + 17) = 1;
LABEL_61:
      v22 = v29;
      if ( !v29 )
        goto LABEL_84;
      if ( v8 <= 0x1C )
      {
        v23 = 272629772;
        if ( _bittest(&v23, v8) )
        {
          v24 = (struct tagPOINT *)*((_QWORD *)v29 + 5);
          *(_QWORD *)&v33.left = a1;
          v33.right = v24[115].x;
          CAnimatedTransitionVisual::SetBeginRect(v24, &v35);
          v25 = (struct tagRECT *)*((_QWORD *)v22 + 5);
          v25[54] = rc;
          CVisual::SetDirtyFlags((CVisual *)&v25->right, 4096);
          if ( v8 - 2 <= 1 )
            lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v33, (CAnimatedTransitionVisual **)v22);
          if ( (*(_DWORD *)(a2 + 616) & 0x18000) != 0 )
          {
            CGroupingStoryboard::_CreateGuttersForApp(
              (CStoryboard *)a1,
              a2,
              &v35,
              &rc.left,
              v8,
              (CBaseObject *)&v31,
              &v30);
            v10 = (CAnimatedTransitionVisual **)v31;
            if ( v31 )
              lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v33, (CAnimatedTransitionVisual **)v31);
            v26 = v30;
            if ( v30 )
              lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v33, v10);
            goto LABEL_77;
          }
        }
      }
LABEL_76:
      v26 = v30;
LABEL_77:
      if ( v29 )
        CBaseObject::Release(v29);
      if ( v10 )
        CBaseObject::Release((CBaseObject *)v10);
      goto LABEL_82;
    case 0x2Bu:
      v13 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 616));
      v14 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              v13,
              1,
              &v29);
      v9 = v14;
      if ( v14 < 0 )
      {
        v28 = 2538;
LABEL_14:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, v28);
        goto LABEL_76;
      }
      goto LABEL_61;
  }
  v26 = v30;
LABEL_82:
  if ( v26 )
    CBaseObject::Release(v26);
LABEL_84:
  result = 1;
  *v32 = v9;
  return result;
}
