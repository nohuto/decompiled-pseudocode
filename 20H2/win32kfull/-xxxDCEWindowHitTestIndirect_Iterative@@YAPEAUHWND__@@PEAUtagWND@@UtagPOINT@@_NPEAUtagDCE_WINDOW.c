/*
 * XREFs of ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B52C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDCEWindowHitTest @ 0x1C00F8C84 (xxxDCEWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02164C4 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0012B48 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C0012C50 (IsMessageOnlyWindow.c)
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C004C7DC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowHolographicForHitTest @ 0x1C004C870 (IsWindowHolographicForHitTest.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DwmSyncHitTestQuery @ 0x1C007F468 (DwmSyncHitTestQuery.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     DCELayerHitTest @ 0x1C00C2C08 (DCELayerHitTest.c)
 *     xxxSendTransformableMessage @ 0x1C0106F44 (xxxSendTransformableMessage.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B4AC (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     DCEHitTestWindow @ 0x1C01E44C4 (DCEHitTestWindow.c)
 *     SizeBoxHwnd @ 0x1C025CF6C (SizeBoxHwnd.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect_Iterative(
        struct tagWND *a1,
        struct tagPOINT a2,
        char a3,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a4)
{
  struct tagWND *v6; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v8; // edx
  unsigned int v9; // r13d
  struct tagWND *v10; // rcx
  int v11; // esi
  struct tagPOINT v12; // rbx
  struct tagWND *v13; // r8
  int v14; // r12d
  int *v15; // rax
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  struct tagWND **v19; // rcx
  __int64 v20; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rcx
  void *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  char v32; // si
  int v33; // eax
  unsigned int v34; // edx
  int v35; // ecx
  int v36; // eax
  struct tagWND *v37; // r8
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct tagWND *v43; // [rsp+50h] [rbp-39h]
  struct tagWND *v44; // [rsp+58h] [rbp-31h]
  struct tagPOINT v45; // [rsp+60h] [rbp-29h] BYREF
  struct tagPOINT v46; // [rsp+68h] [rbp-21h] BYREF
  __int64 v47; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v48[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v49[10]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v50; // [rsp+F0h] [rbp+67h] BYREF
  char v51; // [rsp+100h] [rbp+77h]

  v51 = a3;
  v6 = a1;
  if ( !a1 )
    return 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1);
  v8 = *((_DWORD *)a4 + 8);
  v9 = CurrentThreadDpiAwarenessContext;
  v46 = a2;
  if ( (v8 & 4) != 0 )
    LogicalToPhysicalDPIPoint(&v46, &v46, CurrentThreadDpiAwarenessContext, 0LL);
  v10 = (struct tagWND *)*((_QWORD *)v6 + 13);
  v11 = 0;
  v12 = v46;
  v13 = 0LL;
  v43 = 0LL;
  v14 = -2;
  v44 = v10;
  v45 = v46;
  while ( 1 )
  {
    if ( !v11 )
    {
      if ( (unsigned int)IsCompositionInputWindowForHitTest(v6) )
      {
        v32 = 1;
        if ( (*((_DWORD *)a4 + 8) & 8) == 0 )
          goto LABEL_44;
        LOBYTE(v33) = IsMessageOnlyWindow((__int64)v6);
        if ( v33 )
        {
LABEL_46:
          if ( (unsigned int)GetWindowCloakState(v6)
            && !(unsigned int)CoreWindowProp::IsComponent(v6)
            && !(unsigned int)IsWindowHolographicForHitTest(v6) )
          {
            goto LABEL_44;
          }
          if ( (*((_DWORD *)a4 + 8) & 4) != 0
            && (unsigned int)IsTopLevelWindow((__int64)v6)
            && (v34 = *(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL),
                (((unsigned __int16)(v9 >> 8) ^ (unsigned __int16)(v34 >> 8)) & 0x1FF) == 0)
            && ((v34 & 0xF) != 2 || (v34 & 0x20000000) == 0 ? (v35 = 0) : (v35 = 1),
                (v9 & 0xF) != 2 || (v9 & 0x20000000) == 0 ? (v36 = 0) : (v36 = 1),
                v35 == v36) )
          {
            v12 = a2;
            v43 = v6;
            v45 = a2;
            v37 = v6;
          }
          else
          {
            v37 = v43;
          }
          if ( !v32 )
          {
            v38 = *((_QWORD *)v6 + 27);
            if ( !v38 || v6 == v37 )
            {
              if ( !PtInRect((_DWORD *)(*((_QWORD *)v6 + 5) + 88LL), *(_QWORD *)&v12) )
              {
                v11 = 3;
                goto LABEL_87;
              }
            }
            else
            {
              v39 = DCEHitTestWindow(*((_QWORD *)v6 + 5) + 88LL, v38, &v45, *((_QWORD *)a4 + 5));
              v12 = v45;
              if ( !v39 )
                goto LABEL_44;
            }
          }
          v40 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
          if ( v40 && !(unsigned int)GrePtInRegion(v40, (unsigned int)v12.x, (unsigned int)v45.y) )
            goto LABEL_44;
          v41 = *((_QWORD *)v6 + 5);
          if ( (*(_BYTE *)(v41 + 26) & 8) != 0
            && (*(_DWORD *)(v41 + 232) & 0x20) == 0
            && !DCELayerHitTest((__int64)v6, *(_QWORD *)&v12) )
          {
            goto LABEL_44;
          }
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v6) && (*((_DWORD *)a4 + 8) & 1) != 0 )
          {
            if ( v32 || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              v11 = 4;
              goto LABEL_86;
            }
LABEL_44:
            v11 = 3;
            goto LABEL_86;
          }
          if ( !v32 )
          {
            v42 = *((_QWORD *)v6 + 5);
            if ( (*(_BYTE *)(v42 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v42 + 104), *(_QWORD *)&v12) )
            {
              v13 = v43;
              v10 = v44;
              if ( *((_QWORD *)v6 + 14) )
              {
                v6 = (struct tagWND *)*((_QWORD *)v6 + 14);
                v11 = 0;
              }
              else
              {
                v11 = 2;
              }
              goto LABEL_88;
            }
          }
          v11 = 1;
LABEL_86:
          v13 = v43;
LABEL_87:
          v10 = v44;
          goto LABEL_88;
        }
      }
      else
      {
        v32 = 0;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
        goto LABEL_44;
      goto LABEL_46;
    }
    if ( v11 <= 0 )
      goto LABEL_88;
    if ( v11 <= 2 )
    {
      if ( (unsigned int)IsCompositionInputWindowForHitTest(v6)
        || (LODWORD(v47) = -2, *((_QWORD *)v6 + 2) != gptiCurrent) )
      {
        v11 = 4;
        v14 = 1;
      }
      else
      {
        if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)v6)
          || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 26LL) & 8) == 0
          || v11 == 2 )
        {
          goto LABEL_36;
        }
        v48[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v48[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v48;
        v48[1] = v6;
        HMLockObject(v6);
        v23 = (void *)ReferenceDwmApiPort(v22);
        LODWORD(v50) = 1;
        UserSessionSwitchLeaveCrit(v24);
        v12 = v45;
        DwmSyncHitTestQuery(
          v23,
          *(_QWORD *)v6,
          *(_DWORD *)a4,
          *(_QWORD *)&v46,
          *((_QWORD *)a4 + 1),
          LOWORD(v45.x) | (LOWORD(v45.y) << 16),
          -2,
          &v47,
          &v50);
        EnterCrit(0LL, 1LL);
        if ( !ThreadUnlock1(v26, v25, v27) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
          return 0LL;
        if ( (_DWORD)v50 )
        {
          v14 = v47;
        }
        else
        {
LABEL_36:
          v49[2] = 0LL;
          v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v49[0] = *(_QWORD *)(v28 + 416);
          *(_QWORD *)(v28 + 416) = v49;
          v49[1] = v6;
          HMLockObject(v6);
          v12 = v45;
          v14 = xxxSendTransformableMessage(
                  (unsigned __int64)v6,
                  0x84u,
                  0LL,
                  (struct _LARGE_STRING *)(LOWORD(v45.x) | (LOWORD(v45.y) << 16)),
                  0);
          if ( !ThreadUnlock1(v30, v29, v31) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
            return 0LL;
        }
        v11 = (v14 != -1) + 3;
      }
      goto LABEL_86;
    }
    if ( v11 != 3 )
      break;
    if ( *((_QWORD *)v6 + 27) || v6 == v13 )
    {
      v19 = (struct tagWND **)*((_QWORD *)v6 + 13);
      v45 = v46;
      RestoreLogicalPoint(v19, &v45, a4);
      v10 = v44;
      v12 = v45;
    }
    v20 = *((_QWORD *)v6 + 11);
    v13 = 0LL;
    v43 = 0LL;
    if ( v20 )
    {
      v11 = 0;
      v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
      if ( *(struct tagWND **)(v20 + 104) == v10 && v51 )
        return 0LL;
    }
    else
    {
      v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
      v11 = 2;
    }
LABEL_88:
    if ( v6 == v10 )
      return 0LL;
  }
  if ( v11 != 4 )
    goto LABEL_88;
  v15 = (int *)*((_QWORD *)a4 + 3);
  if ( v15 )
  {
    *v15 = v14;
    *((_DWORD *)a4 + 9) = 1;
  }
  if ( __PAIR64__(v45.y, v12.x) != v46 )
  {
    LODWORD(v10) = LOWORD(v12.x) | (LOWORD(v45.y) << 16);
    *((_DWORD *)a4 + 12) = 1;
    *((_QWORD *)a4 + 2) = (int)v10;
  }
  v16 = (unsigned __int8 *)*((_QWORD *)v6 + 5);
  LOBYTE(v10) = ~v16[26];
  if ( v14 == (((v16[25] ^ (unsigned int)v10) >> 6) & 1) + 16 && (v16[30] & 4) == 0 )
  {
    v17 = SizeBoxHwnd(v6);
    if ( v17 )
      v6 = (struct tagWND *)v17;
  }
  return *(HWND *)v6;
}
