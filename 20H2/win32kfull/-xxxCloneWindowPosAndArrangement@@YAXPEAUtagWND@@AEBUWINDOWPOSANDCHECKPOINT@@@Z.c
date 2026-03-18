/*
 * XREFs of ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D00AC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00133EC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C003A9C0 (CkptRestore.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C007F1B0 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetMonitorMaxArea @ 0x1C00C6E4C (GetMonitorMaxArea.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01E5218 (LogicalToPhysicalInPlaceRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023EE78 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C0240330 (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 */

void __fastcall xxxCloneWindowPosAndArrangement(struct tagWND *a1, const struct WINDOWPOSANDCHECKPOINT *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  struct tagRECT v7; // xmm6
  __int128 v8; // xmm7
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 Prop; // rax
  struct tagRECT *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct tagRECT *v22; // r14
  LONG left; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // al
  bool v27; // cf
  __int64 v28; // rax
  __int64 v29; // rcx
  CWindowGroupManager *v30; // rcx
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+50h] [rbp-B8h] BYREF
  int v33; // [rsp+54h] [rbp-B4h]
  struct tagRECT v34; // [rsp+58h] [rbp-B0h]
  __int128 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  __int128 v37; // [rsp+80h] [rbp-88h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h]
  struct tagRECT v39; // [rsp+98h] [rbp-70h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v41[3]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-38h] BYREF
  struct tagRECT v43; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v44; // [rsp+F8h] [rbp-10h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v41[2] = 0LL;
  v31 = ValidateHmonitorNoRip(v3);
  v5 = v31;
  if ( !v31 )
  {
    v5 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    v31 = v5;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v41[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v41;
  v41[1] = v5;
  HMLockObject(v5);
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_BYTE *)a2 + 93) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      xxxMinMaximizeEx(a1, 7u, 320, 0LL, 0LL, 0LL);
  }
  else if ( *((_BYTE *)a2 + 94) )
  {
    v9 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v9 + 31) & 1) == 0 || *(_QWORD *)(v9 + 256) != *((_QWORD *)a2 + 2) )
      xxxMinMaximizeEx(a1, 3u, *((_QWORD *)a2 + 1) != 0LL ? 64 : 320, v31, 0LL, *((_QWORD *)a2 + 1));
  }
  else
  {
    v10 = *((_QWORD *)a1 + 5);
    v44 = *(_OWORD *)((char *)a2 + 24);
    v43 = 0LL;
    PhysicalToLogicalDPIRect(&v43, &v44, *(unsigned int *)(v10 + 288), &v31);
    ExtendRectByWindowMargin(a1, &v43, &v43);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 )
    {
      Prop = GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
      if ( Prop )
        *(_DWORD *)(Prop + 48) &= 0xFFFFFFE1;
      xxxMinMaximizeEx(a1, 9u, 584, v31, &v43, *((_QWORD *)a2 + 1));
    }
    else
    {
      v11 = ValidateHwnd(*((_QWORD *)a2 + 1));
      v38 = 0LL;
      v37 = 0LL;
      if ( v11 )
      {
        v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v37 = *(_QWORD *)(v12 + 416);
        *(_QWORD *)(v12 + 416) = &v37;
        *((_QWORD *)&v37 + 1) = v11;
        HMLockObject(v11);
        v13 = 524304;
      }
      else
      {
        v13 = 524308;
      }
      xxxSetWindowPos(
        a1,
        v11,
        (unsigned int)v43.left,
        (unsigned int)v43.top,
        v43.right - v43.left,
        v43.bottom - v43.top,
        v13);
      if ( v11 )
        ThreadUnlock1(v15, v14, v16);
    }
    SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
    SetOrClrWF(0, (__int64)a1, 0xF20u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 95), (__int64)a1, 0xD901u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 96), (__int64)a1, 0xD902u, 1);
    SetOrClrWF(*((unsigned __int8 *)a2 + 97), (__int64)a1, 0xDA80u, 1);
    v39 = v43;
    LogicalToPhysicalInPlaceRect(a1, &v39);
    v40 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    LogicalToPhysicalInPlaceRect(a1, &v40);
    v7 = v39;
    v8 = v40;
  }
  v18 = (struct tagRECT *)CkptRestore((__int64)a1, (_OWORD *)(*((_QWORD *)a1 + 5) + 88LL));
  v22 = v18;
  if ( v18 && *((_BYTE *)a2 + 92) )
  {
    *v18 = *(struct tagRECT *)((char *)a2 + 40);
    v18[1] = *(struct tagRECT *)((char *)a2 + 56);
    v18[2] = *(struct tagRECT *)((char *)a2 + 72);
    v18[3].left = *((_DWORD *)a2 + 22);
    PhysicalToLogicalDPIRect(v18, v18, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v31);
    PhysicalToLogicalDPIRect(&v22[1], &v22[1], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v31);
    ExtendRectByWindowMargin(a1, v22, v22);
    ExtendRectByWindowMargin(a1, v22 + 1, v22 + 1);
    left = v22[3].left;
    if ( (left & 0x20) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v22[2], &v22[2], *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v31);
      left = v22[3].left;
    }
    if ( (left & 0x40) != 0 )
    {
      PhysicalToLogicalDPIPoint(&v22[2].right, &v22[2].right, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &v31);
      v24 = *(_QWORD *)GetMonitorMaxArea(&v42, a1, v31);
      v22[2].right -= v24;
      v22[2].bottom -= HIDWORD(v24);
      left = v22[3].left;
    }
    v22[3].left = left & 0xFFFFFF7F;
    v20 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v20 + 31) & 0x20) != 0 && (*(_DWORD *)(v20 + 288) & 0xF) == 2 )
    {
      SetDeferredDpiStateForWindowAndChildren(a1, 1, 0);
      v22[3].left |= 0x80u;
    }
  }
  ThreadUnlock1(v20, v19, v21);
  v34 = 0LL;
  v35 = 0LL;
  if ( *((_BYTE *)a2 + 93) )
  {
    v32 = 2;
  }
  else if ( *((_BYTE *)a2 + 94) )
  {
    v32 = 1;
  }
  else
  {
    if ( *((_BYTE *)a2 + 95) || (v32 = 0, *((_BYTE *)a2 + 96)) )
      v32 = 3;
    v34 = v7;
  }
  v25 = *((_QWORD *)a1 + 5);
  v26 = *(_BYTE *)(v25 + 31);
  if ( (v26 & 0x20) != 0 )
  {
    v33 = 2;
  }
  else if ( (v26 & 1) != 0 )
  {
    v33 = 1;
  }
  else
  {
    v27 = (*(_BYTE *)(v25 + 233) & 3) != 0;
    v35 = v8;
    v33 = v27 ? 3 : 0;
  }
  v28 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v28 )
    v29 = ***(_QWORD ***)(v28 + 8);
  else
    v29 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v29) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v36);
    CWindowGroupManager::NotifyTemplateApplied(v30, a1, (const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *)&v32);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v36);
  }
}
