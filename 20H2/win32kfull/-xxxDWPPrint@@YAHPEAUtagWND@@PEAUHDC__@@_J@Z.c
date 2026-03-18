/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C01045E8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxDrawWindowFrame @ 0x1C003EDF8 (xxxDrawWindowFrame.c)
 *     GreGetLayout @ 0x1C00417CC (GreGetLayout.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     GreSaveDC @ 0x1C00A4770 (GreSaveDC.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     GreSetWindowOrg @ 0x1C0104A3C (GreSetWindowOrg.c)
 *     _IsWindowVisible @ 0x1C011D574 (_IsWindowVisible.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, struct _LARGE_STRING *a3)
{
  unsigned __int64 v3; // rsi
  struct tagWND *v5; // rbx
  BOOL v6; // r12d
  int v7; // r13d
  __int64 v8; // rax
  char v9; // dl
  unsigned int v10; // r13d
  __int64 v11; // rcx
  struct tagBWL *v12; // rax
  struct tagBWL *v13; // r15
  unsigned __int64 *i; // r12
  __int64 DesktopWindow; // rax
  struct tagBWL *v16; // rax
  struct tagBWL *v17; // rbx
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rcx
  struct tagWND *v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  unsigned int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int v31; // r13d
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // r15d
  char v37; // r10
  struct tagBWL *v38; // rcx
  int v39; // r14d
  unsigned int v40; // r12d
  __int128 v42; // [rsp+38h] [rbp-18h] BYREF
  __int64 v43; // [rsp+48h] [rbp-8h]
  unsigned int v44; // [rsp+90h] [rbp+40h]
  __int64 v45; // [rsp+A0h] [rbp+50h] BYREF
  struct tagWND *v46; // [rsp+A8h] [rbp+58h]

  v45 = 0LL;
  v46 = a1;
  v3 = (unsigned __int64)a3;
  v43 = 0LL;
  v5 = a1;
  v42 = 0LL;
  if ( ((unsigned __int8)a3 & 1) != 0 && !(unsigned int)IsWindowVisible(a1) )
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
    SetOrClrWF(1, (__int64)v5, 0x180u, 1);
    v8 = *((_QWORD *)v5 + 5);
    if ( v6 )
    {
      v36 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88);
      v44 = GreSetLayout(a2, (unsigned int)(v36 - 1), 1LL);
      v37 = *(_BYTE *)(*((_QWORD *)v5 + 5) + 16LL) & 0x40;
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((__int64)v5, a2, v37 != 0);
      else
        xxxSendMessage((unsigned __int64)v5, 0xAFu, (unsigned __int64)a2, (struct _LARGE_STRING *)(v37 != 0));
      GreSetLayout(a2, (unsigned int)(v36 - 1), v44);
    }
    else
    {
      v9 = *(_BYTE *)(v8 + 16) & 0x40;
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((__int64)v5, a2, v9 != 0);
      else
        xxxSendMessage((unsigned __int64)v5, 0xAFu, (unsigned __int64)a2, (struct _LARGE_STRING *)(v9 != 0));
    }
    SetOrClrWF(0, (__int64)v5, 0x180u, 1);
    if ( v7 )
      SetVisible(v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v10 = GreSaveDC(a2);
  if ( !v10 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v45);
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
    v39 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v40 = GreSetLayout(a2, (unsigned int)(v39 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage((unsigned __int64)v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage((unsigned __int64)v5, 0x318u, (unsigned __int64)a2, (struct _LARGE_STRING *)v3);
    GreSetLayout(a2, (unsigned int)(v39 - 1), v40);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage((unsigned __int64)v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage((unsigned __int64)v5, 0x318u, (unsigned __int64)a2, (struct _LARGE_STRING *)v3);
  }
  GreRestoreDC(a2, v10);
  v11 = *((_QWORD *)v5 + 5);
  LODWORD(v45) = *(_DWORD *)(v11 + 88) + v45;
  HIDWORD(v45) += *(_DWORD *)(v11 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xFFFFFFFFFFFFFFF4uLL | 0xA;
    v12 = BuildHwndList(*((struct tagWND **)v5 + 14), 2, 0LL);
    v13 = v12;
    if ( v12 )
    {
      for ( i = (unsigned __int64 *)((char *)v12 + 32); *i != 1; ++i )
      {
        v29 = HMValidateHandleNoSecure(*i, 1);
        v5 = (struct tagWND *)v29;
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 40);
          if ( (*(_BYTE *)(v30 + 31) & 0x10) != 0 )
          {
            v31 = GreSaveDC(a2);
            if ( !v31 )
            {
              v38 = v13;
              goto LABEL_55;
            }
            GreSetWindowOrg(a2);
            if ( *(char *)(*(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL) + 8LL) >= 0 )
              GreIntersectClipRect(
                a2,
                0LL,
                0LL,
                (unsigned int)(*(_DWORD *)(v30 + 96) - *(_DWORD *)(v30 + 88)),
                *(_DWORD *)(v30 + 100) - *(_DWORD *)(v30 + 92));
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v42 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v42;
            *((_QWORD *)&v42 + 1) = v5;
            HMLockObject(v5);
            xxxSendMessage((unsigned __int64)v5, 0x317u, (unsigned __int64)a2, (struct _LARGE_STRING *)v3);
            ThreadUnlock1(v34, v33, v35);
            GreRestoreDC(a2, v31);
          }
        }
      }
      FreeHwndList(v13);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v16 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112), 2, 0LL);
  v17 = v16;
  if ( !v16 )
    return 1LL;
  v18 = (unsigned __int64 *)((char *)v16 + 32);
  v19 = *((_QWORD *)v16 + 4);
  if ( v19 == 1 )
  {
LABEL_32:
    FreeHwndList(v17);
    return 1LL;
  }
  v20 = v46;
  while ( 1 )
  {
    v21 = HMValidateHandleNoSecure(v19, 1);
    v22 = v21;
    if ( !v21 || *(struct tagWND **)(v21 + 120) != v20 || (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_31;
    v24 = GreSaveDC(a2);
    if ( !v24 )
      break;
    GreSetWindowOrg(a2);
    v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v42 = *(_QWORD *)(v25 + 416);
    *(_QWORD *)(v25 + 416) = &v42;
    *((_QWORD *)&v42 + 1) = v22;
    HMLockObject(v22);
    xxxSendMessage(v22, 0x317u, (unsigned __int64)a2, a3);
    ThreadUnlock1(v27, v26, v28);
    GreRestoreDC(a2, v24);
LABEL_31:
    v19 = *++v18;
    if ( *v18 == 1 )
      goto LABEL_32;
  }
  v38 = v17;
LABEL_55:
  FreeHwndList(v38);
  return 0LL;
}
