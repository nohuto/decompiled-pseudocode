/*
 * XREFs of ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800B0ABC
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B2620 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3B60 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180003D10 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180008AB0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000A944 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180035A48 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x180039030 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     _lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator() @ 0x1800AE6F8 (_lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_--operator().c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800B131C (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x1800B1B60 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_Create3DComponent(
        CGroupingStoryboard *this,
        struct CWindowData *a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // esi
  unsigned int v7; // r15d
  CBaseObject *v8; // r12
  CBaseObject *v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  struct tagRECT *p_rc; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // r9d
  struct tagRECT v18; // xmm0
  int v19; // eax
  CBaseObject *v20; // rbx
  struct tagRECT *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-49h]
  CBaseObject *v24; // [rsp+50h] [rbp-19h] BYREF
  CAnimatedTransitionVisual **v25; // [rsp+58h] [rbp-11h] BYREF
  CAnimatedTransitionVisual **v26; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v28; // [rsp+78h] [rbp+Fh] BYREF

  v3 = *((_DWORD *)a2 + 154);
  v24 = 0LL;
  v4 = v3 & 0xFFF;
  v25 = 0LL;
  v26 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  if ( v4 == 1 )
    goto LABEL_7;
  if ( v4 <= 2 )
    goto LABEL_29;
  if ( v4 <= 4 )
  {
LABEL_7:
    if ( *((_DWORD *)a2 + 28) == 1 )
    {
      v3 |= 0x4000000u;
      *((_DWORD *)a2 + 154) = v3;
    }
    if ( (v3 & 0x10000000) == 0
      || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2, (__int64)a2, a3) <= 0 )
    {
      LOBYTE(v7) = 1;
    }
    if ( (*((_DWORD *)a2 + 154) & 0x1000000) == 0 || IsRectEmpty((const RECT *)((char *)a2 + 620)) )
    {
      v19 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 112LL))(
              this,
              *((unsigned int *)a2 + 154));
      v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, v19, 0LL, 0LL, 0xFFFFFFFF, v7, &v24);
      v7 = v11;
      if ( v11 < 0 )
      {
        v23 = 2207;
        goto LABEL_24;
      }
      if ( *((_DWORD *)a2 + 28) == 1 )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)a2 + 3, &v28);
        goto LABEL_29;
      }
      v18 = *(struct tagRECT *)((char *)v24 + 88);
    }
    else
    {
      rc = 0LL;
      if ( v4 == 1 )
      {
        v12 = -*((_DWORD *)a2 + 159);
        v13 = -HIDWORD(*(_QWORD *)((char *)a2 + 636));
        rc = *(struct tagRECT *)((char *)a2 + 636);
        OffsetRect(&rc, v12, v13);
      }
      p_rc = &rc;
      if ( v4 != 1 )
        p_rc = 0LL;
      v15 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 112LL))(
              this,
              *((unsigned int *)a2 + 154));
      v16 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              this,
              a2,
              0,
              v15,
              (struct tagRECT *)((char *)a2 + 620),
              p_rc,
              0xFFFFFFFF,
              v7,
              &v24);
      v7 = v16;
      if ( v16 < 0 )
      {
        v23 = 2202;
        v17 = v16;
LABEL_20:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, v23);
        goto LABEL_37;
      }
      v18 = *(struct tagRECT *)((char *)a2 + 636);
    }
    v28 = v18;
    goto LABEL_29;
  }
  if ( v4 == 30 )
  {
    *(_QWORD *)&rc.left = 0LL;
    CStoryboard::_GetIdealRects(a2, 0LL, &v28, (struct tagRECT **)&rc, 0LL);
    v10 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 112LL))(
            this,
            *((unsigned int *)a2 + 154));
    v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            0,
            v10,
            *(struct tagRECT **)&rc.left,
            0LL,
            0xFFFFFFFF,
            1,
            &v24);
    v7 = v11;
    if ( v11 < 0 )
    {
      v23 = 2226;
LABEL_24:
      v17 = v11;
      goto LABEL_20;
    }
  }
LABEL_29:
  v20 = v24;
  *(_QWORD *)&rc.left = this;
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v24 + 5), &v28);
  v21 = (struct tagRECT *)*((_QWORD *)v20 + 5);
  v21[54] = v28;
  CVisual::SetDirtyFlags((CVisual *)&v21->right, 4096);
  lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, (CAnimatedTransitionVisual **)v20);
  if ( *((_DWORD *)v20 + 17) != 2 )
    *((_DWORD *)v20 + 17) = 1;
  if ( (*((_DWORD *)a2 + 154) & 0x18000) != 0 && CGroupingStoryboard::_IsPartOfGroup(this, a2) )
  {
    CGroupingStoryboard::_CreateGuttersForApp(this, a2, &v28, &v28, v4, &v25, &v26);
    v8 = (CBaseObject *)v25;
    if ( v25 )
      lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, v25);
    v9 = (CBaseObject *)v26;
    if ( v26 )
      lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, v26);
  }
LABEL_37:
  if ( v24 )
    CBaseObject::Release(v24);
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v9 )
    CBaseObject::Release(v9);
  return v7;
}
