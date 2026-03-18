/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011BED4
 * Callers:
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     PostShellHookMessagesEx @ 0x1C00BF158 (PostShellHookMessagesEx.c)
 *     zzzAttachThreadInput @ 0x1C00BF544 (zzzAttachThreadInput.c)
 *     DwmAsyncOwnerChange @ 0x1C00C5734 (DwmAsyncOwnerChange.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  int v10; // r12d
  int v11; // r15d
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx

  v3 = 0LL;
  if ( a3 )
  {
    v17 = *((_QWORD *)a3 + 2);
    v18 = *((_QWORD *)a1 + 2);
    if ( v17 != v18 )
    {
      if ( !a2 || (v19 = *((_QWORD *)a2 + 2), v19 == v18) || v19 != v17 )
        zzzAttachThreadInput(v18, v17, 0);
    }
  }
  if ( a2 )
  {
    v7 = *((_QWORD *)a2 + 2);
    v8 = *((_QWORD *)a1 + 2);
    if ( v7 != v8 && (!a3 || v7 != *((_QWORD *)a3 + 2)) )
      zzzAttachThreadInput(v8, v7, 1);
  }
  v9 = 0LL;
  if ( a1 )
    v9 = *(_QWORD *)a1;
  v10 = IsTrayWindow(a1);
  if ( !gpqForeground || (v11 = 1, *(struct tagWND **)(gpqForeground + 120LL) != a1) )
    v11 = 0;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_17;
    if ( v10 )
    {
      xxxCallHook(2, v9, 0LL, 10);
      PostShellHookMessagesEx(2u, v9, 0LL);
    }
    v12 = 25;
    v13 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( !v11 )
      v12 = 28;
    v14 = v9;
    goto LABEL_16;
  }
  if ( a2 )
  {
    if ( a3 != a2 )
    {
      v14 = v9;
      v13 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v11 )
        v12 = 27;
      else
        v12 = 30;
LABEL_16:
      PostIAMShellHookMessageEx(v13, v12, v14);
    }
  }
  else
  {
    v20 = 26;
    if ( !v11 )
      v20 = 29;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v20, v9);
    if ( v10 )
    {
      xxxCallHook(1, v9, 0LL, 10);
      PostShellHookMessagesEx(1u, v9, 0LL);
    }
  }
LABEL_17:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 )
      v3 = *(_QWORD *)a2;
    v16 = (void *)ReferenceDwmApiPort(v15);
    DwmAsyncOwnerChange(v16, *(_QWORD *)a1, v3);
  }
}
