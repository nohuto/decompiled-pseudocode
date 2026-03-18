/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C005BCE4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     GreSetWindowOrg @ 0x1C005C138 (GreSetWindowOrg.c)
 *     GreGetLayout @ 0x1C0062728 (GreGetLayout.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     GreSaveDC @ 0x1C0078370 (GreSaveDC.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxDrawWindowFrame @ 0x1C00AFD24 (xxxDrawWindowFrame.c)
 *     _IsWindowVisible @ 0x1C011C5B4 (_IsWindowVisible.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  struct tagWND *v5; // rbx
  BOOL v6; // r12d
  int v7; // r13d
  __int64 v8; // rax
  char v9; // dl
  unsigned int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  _QWORD *i; // r12
  __int64 DesktopWindow; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  _QWORD *v20; // rsi
  __int64 v21; // rcx
  struct tagWND *v22; // r12
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned int v33; // r13d
  __int64 ThreadWin32Thread; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r15d
  char v39; // r10
  __int64 v40; // rcx
  int v41; // r14d
  unsigned int v42; // r12d
  __int128 v44; // [rsp+38h] [rbp-18h] BYREF
  __int64 v45; // [rsp+48h] [rbp-8h]
  unsigned int v46; // [rsp+90h] [rbp+40h]
  __int64 v47; // [rsp+A0h] [rbp+50h] BYREF
  struct tagWND *v48; // [rsp+A8h] [rbp+58h]

  v47 = 0LL;
  v48 = a1;
  v3 = a3;
  v45 = 0LL;
  v5 = a1;
  v44 = 0LL;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible(a1) )
    return 0LL;
  v6 = (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout(a2) & 1) == 0;
  if ( (v3 & 2) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) != 0 )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      SetVisible(v5, 5u);
    }
    SetOrClrWF(1LL, v5, 384LL, 1LL);
    v8 = *((_QWORD *)v5 + 5);
    if ( v6 )
    {
      v38 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88);
      v46 = GreSetLayout(a2, (unsigned int)(v38 - 1), 1LL);
      v39 = *(_BYTE *)(*((_QWORD *)v5 + 5) + 16LL) & 0x40;
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame(v5, a2, v39 != 0);
      else
        xxxSendMessage(v5, 175LL, a2, v39 != 0);
      GreSetLayout(a2, (unsigned int)(v38 - 1), v46);
    }
    else
    {
      v9 = *(_BYTE *)(v8 + 16) & 0x40;
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame(v5, a2, v9 != 0);
      else
        xxxSendMessage(v5, 175LL, a2, v9 != 0);
    }
    SetOrClrWF(0LL, v5, 384LL, 1LL);
    if ( v7 )
      SetVisible(v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v10 = GreSaveDC(a2);
  if ( !v10 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v47);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(
    a2,
    0LL,
    0LL,
    (unsigned int)(*(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL)),
    *(_DWORD *)(*((_QWORD *)v5 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 108LL));
  if ( v6 )
  {
    v41 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v42 = GreSetLayout(a2, (unsigned int)(v41 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 20LL, a2, 0LL);
    xxxSendMessage(v5, 792LL, a2, v3);
    GreSetLayout(a2, (unsigned int)(v41 - 1), v42);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 20LL, a2, 0LL);
    xxxSendMessage(v5, 792LL, a2, v3);
  }
  GreRestoreDC(a2, v10);
  v11 = *((_QWORD *)v5 + 5);
  LODWORD(v47) = *(_DWORD *)(v11 + 88) + v47;
  HIDWORD(v47) += *(_DWORD *)(v11 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xFFFFFFFFFFFFFFF4uLL | 0xA;
    v12 = BuildHwndList(*((struct tagWND **)v5 + 14));
    v14 = v12;
    if ( v12 )
    {
      for ( i = (_QWORD *)(v12 + 32); *i != 1LL; ++i )
      {
        LOBYTE(v13) = 1;
        v31 = HMValidateHandleNoSecure(*i, v13);
        v5 = (struct tagWND *)v31;
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 40);
          if ( (*(_BYTE *)(v32 + 31) & 0x10) != 0 )
          {
            v33 = GreSaveDC(a2);
            if ( !v33 )
            {
              v40 = v14;
              goto LABEL_55;
            }
            GreSetWindowOrg(a2);
            if ( *(char *)(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL) + 8LL) >= 0 )
              GreIntersectClipRect(
                a2,
                0LL,
                0LL,
                (unsigned int)(*(_DWORD *)(v32 + 96) - *(_DWORD *)(v32 + 88)),
                *(_DWORD *)(v32 + 100) - *(_DWORD *)(v32 + 92));
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)&v44 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v44;
            *((_QWORD *)&v44 + 1) = v5;
            HMLockObject(v5);
            xxxSendMessage(v5, 791LL, a2, v3);
            ThreadUnlock1(v36, v35, v37);
            GreRestoreDC(a2, v33);
          }
        }
      }
      FreeHwndList(v14);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow(v5);
  v17 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112));
  v19 = v17;
  if ( !v17 )
    return 1LL;
  v20 = (_QWORD *)(v17 + 32);
  v21 = *(_QWORD *)(v17 + 32);
  if ( v21 == 1 )
  {
LABEL_32:
    FreeHwndList(v19);
    return 1LL;
  }
  v22 = v48;
  while ( 1 )
  {
    LOBYTE(v18) = 1;
    v23 = HMValidateHandleNoSecure(v21, v18);
    v24 = v23;
    if ( !v23 || *(struct tagWND **)(v23 + 120) != v22 || (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_31;
    v26 = GreSaveDC(a2);
    if ( !v26 )
      break;
    GreSetWindowOrg(a2);
    v27 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v44 = *(_QWORD *)(v27 + 408);
    *(_QWORD *)(v27 + 408) = &v44;
    *((_QWORD *)&v44 + 1) = v24;
    HMLockObject(v24);
    xxxSendMessage(v24, 791LL, a2, a3);
    ThreadUnlock1(v29, v28, v30);
    GreRestoreDC(a2, v26);
LABEL_31:
    v21 = *++v20;
    if ( *v20 == 1LL )
      goto LABEL_32;
  }
  v40 = v19;
LABEL_55:
  FreeHwndList(v40);
  return 0LL;
}
