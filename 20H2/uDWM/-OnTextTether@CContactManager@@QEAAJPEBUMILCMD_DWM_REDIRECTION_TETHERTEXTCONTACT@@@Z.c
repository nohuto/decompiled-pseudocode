/*
 * XREFs of ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18009F31C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180015780 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x1800341DC (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800475A0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180049128 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJ_KPEAPEAVCTextTetherVisual@@@Z @ 0x18009CA98 (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJ_KPEAPEAVCTextTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A0C14 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x1800A1EC4 (-OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x1800A1F00 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x1800A1F34 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTextTetherVisual@@QEAAJXZ @ 0x1800A2024 (-Start@CTextTetherVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CContactManager::OnTextTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *a2)
{
  unsigned int v4; // ebx
  CTextTetherVisual *v5; // r14
  int v6; // ecx
  __int64 v7; // r10
  __int64 v9; // rdi
  CTextTetherVisual *v10; // r10
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  CContactManager *v16; // rcx
  __int64 v17; // rax
  CBaseObject *v18; // r14
  char v19; // r8
  __int64 v20; // rcx
  CDirectTouchVisual **v21; // rdx
  int Touch; // eax
  CContactManager *v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // eax
  unsigned int v26; // edx
  CContactManager *v27; // rcx
  int v28; // eax
  volatile signed __int32 *v29; // rdx
  CBaseObject *v30; // rcx
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v33; // [rsp+80h] [rbp+40h] BYREF
  CTextTetherVisual *v34; // [rsp+88h] [rbp+48h] BYREF

  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v33 = 0LL;
  GetDesktopID(1LL, &v32);
  v6 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  while ( *(_DWORD *)(112LL * (unsigned int)v6 + v7) != *((_DWORD *)a2 + 1) )
  {
    if ( (unsigned int)++v6 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( v6 < 0 || (v9 = 112LL * (unsigned int)v6, *(_DWORD *)(v9 + v7 + 4) != 1) )
  {
LABEL_5:
    v4 = -2147024809;
    goto LABEL_6;
  }
  v10 = *(CTextTetherVisual **)(v9 + v7 + 80);
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( v10 )
    {
      CTextTetherVisual::OnTetherAnchorChange(
        v10,
        (const struct tagPOINT *)((char *)a2 + 12),
        *((enum DEVICE_SCALE_FACTOR *)a2 + 6),
        *((_DWORD *)a2 + 5));
      goto LABEL_6;
    }
    v11 = CreateTouchVisual<CTextTetherVisual>(v32, &v33);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x426u);
      v5 = v33;
      goto LABEL_45;
    }
    v5 = v33;
    CContactManager::AddToTouchNode(v12, v32, v33);
    v13 = CTextTetherVisual::OnTetherAnchorChange(
            v5,
            (const struct tagPOINT *)((char *)a2 + 12),
            (enum DEVICE_SCALE_FACTOR)*((_DWORD *)a2 + 6),
            *((_DWORD *)a2 + 5));
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x428u);
LABEL_45:
      if ( v5 )
        CBaseObject::Release(v5);
      goto LABEL_6;
    }
    v14 = CTextTetherVisual::SetContactPosition(
            v5,
            (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL),
            (const struct tagRECT *)(v9 + *((_QWORD *)this + 7) + 24LL));
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x429u);
      goto LABEL_45;
    }
    v15 = CTextTetherVisual::Start(v5);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x42Au);
      goto LABEL_45;
    }
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) = v5;
    v17 = *((_QWORD *)this + 7);
    v18 = *(CBaseObject **)(v9 + v17 + 88);
    if ( v18 )
    {
      CContactManager::StopAndRemoveFromRootNode(v16, *(struct CTouchVisual **)(v9 + v17 + 88));
      CBaseObject::Release(v18);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
      *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
      v19 = *((_BYTE *)this + 324);
      if ( v19 || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
      {
        v20 = *((_QWORD *)this + 7);
        v21 = (CDirectTouchVisual **)(v20 + v9 + 48);
        if ( !*v21 && !*(_QWORD *)(v20 + v9 + 96) )
        {
          Touch = CreateTouchVisual<CDirectTouchVisual>(v32, v21);
          v4 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x43Cu);
            goto LABEL_6;
          }
          CContactManager::AddToTouchNode(v23, v32, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
          v19 = *((_BYTE *)this + 324);
          v20 = *((_QWORD *)this + 7);
        }
        v24 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
        if ( !v19 )
          v24 = *(unsigned int *)(v20 + v9 + 40);
        CDirectTouchVisual::StartDown(*(_QWORD *)(v20 + v9 + 48), v20 + v9 + 8, v20 + v9 + 24, v24);
      }
    }
  }
  else
  {
    if ( !v10 )
    {
      v4 = -2147024809;
      goto LABEL_45;
    }
    v34 = v10;
    v25 = *((_DWORD *)this + 44);
    v26 = v25 + 1;
    if ( v25 + 1 >= v25 )
    {
      if ( v26 > *((_DWORD *)this + 43) )
      {
        v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v34);
        LODWORD(v5) = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xC0u);
      }
      else
      {
        v27 = (CContactManager *)*((unsigned int *)this + 44);
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v27) = v10;
        *((_DWORD *)this + 44) = v26;
      }
    }
    else
    {
      LODWORD(v5) = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    v29 = *(volatile signed __int32 **)(v9 + *((_QWORD *)this + 7) + 80);
    if ( (int)v5 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v27, (struct CTouchVisual *)v29);
    }
    else
    {
      _InterlockedIncrement(v29 + 2);
      CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v9 + *((_QWORD *)this + 7) + 80));
    }
    v30 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 80);
    if ( v30 )
    {
      CBaseObject::Release(v30);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 80) = 0LL;
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return v4;
}
