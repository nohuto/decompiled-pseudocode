/*
 * XREFs of ?xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z @ 0x1A5A84
 * Callers:
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 * Callees:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _DwmAsyncOwnerChange@12 @ 0x732BC (_DwmAsyncOwnerChange@12.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 */

void __userpurge xxxHandleOwnerSwitch(
        int a1@<edx>,
        struct tagHOOK **a2@<ecx>,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagWND *a5)
{
  struct tagWND *v5; // eax
  struct tagHOOK *v6; // edi
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  BOOL v14; // ecx
  int v15; // eax
  int v16; // eax
  void *v17; // eax
  int v18; // [esp-8h] [ebp-20h]
  int v19; // [esp-4h] [ebp-1Ch]
  int v20; // [esp-4h] [ebp-1Ch]
  int v21; // [esp+0h] [ebp-18h]
  int v22; // [esp+4h] [ebp-14h]
  BOOL v23; // [esp+10h] [ebp-8h]
  int v24; // [esp+14h] [ebp-4h]

  v5 = a3;
  v6 = 0;
  if ( a3 )
  {
    v9 = *((_DWORD *)a3 + 2);
    v10 = (int)a2[2];
    if ( v9 != v10 )
    {
      if ( !a1 || (v5 = a3, *(_DWORD *)(a1 + 8) == v10) || *(_DWORD *)(a1 + 8) != v9 )
      {
        zzzAttachThreadInput(v10, v9, 0);
        v5 = a3;
      }
    }
  }
  if ( a1 )
  {
    v11 = *(_DWORD *)(a1 + 8);
    v12 = (int)a2[2];
    if ( v11 != v12 && (!v5 || v11 != *((_DWORD *)v5 + 2)) )
      zzzAttachThreadInput(v12, v11, 1);
  }
  if ( a2 )
    v6 = *a2;
  v13 = IsTrayWindow(a2);
  v24 = v13;
  v14 = _gpqForeground && *(struct tagHOOK ***)(_gpqForeground + 64) == a2;
  v23 = v14;
  if ( a3 )
  {
    if ( a1 )
    {
      if ( a3 != (struct tagWND *)a1 )
      {
        if ( v14 )
          v18 = 27;
        else
          v18 = 30;
        PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), v18, (int)v6);
      }
    }
    else
    {
      v15 = *(_DWORD *)(_gptiCurrent + 248);
      if ( v14 )
        PostIAMShellHookMessageEx(v15, 26, (int)v6);
      else
        PostIAMShellHookMessageEx(v15, 29, (int)v6);
      if ( v24 )
      {
        xxxCallHook(v6, 1, 0, 0xAu, v21, v22);
        PostShellHookMessagesEx(1, (unsigned int)v6, 0);
      }
    }
  }
  else if ( a1 )
  {
    if ( v13 )
    {
      xxxCallHook(v6, 2, 0, 0xAu, v21, v22);
      PostShellHookMessagesEx(2, (unsigned int)v6, 0);
    }
    if ( v23 )
      v19 = 25;
    else
      v19 = 28;
    PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), v19, (int)v6);
  }
  if ( IsWindowDesktopComposed(a2) )
  {
    if ( a1 )
      v16 = *(_DWORD *)a1;
    else
      v16 = 0;
    v20 = v16;
    v17 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v17, (int)*a2, v20);
  }
}
