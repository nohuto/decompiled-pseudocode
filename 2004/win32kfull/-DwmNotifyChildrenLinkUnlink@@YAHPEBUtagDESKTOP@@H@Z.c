/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C000E4A8
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C000E464 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C000E760 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1C000E824 (DwmAsyncChildUnlink.c)
 *     DwmAsyncOwnerChange @ 0x1C0033524 (DwmAsyncOwnerChange.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  int v3; // r12d
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  _QWORD *i; // r14
  void *v9; // rax
  __int64 v10; // rsi
  int v11; // ebx
  void *v12; // rax
  void *v13; // rax
  int v14; // ebx
  void *v15; // rax
  void *v16; // rax
  struct tagWND *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r15
  _QWORD *j; // r14
  __int64 v22; // rsi
  int v23; // ebx
  void *v24; // rax
  void *v25; // rax
  void *v27; // rax
  void *v28; // rax

  v3 = a2;
  v4 = 1;
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL));
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (_QWORD *)(v5 + 32); *i != 1LL; ++i )
  {
    LOBYTE(v6) = 1;
    v10 = HMValidateHandleNoSecure(*i, v6);
    if ( v10 )
    {
      if ( v3 )
      {
        v11 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 236LL);
        v12 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildLink(v12, v11);
        v13 = (void *)ReferenceDwmApiPort();
        DwmAsyncOwnerChange(v13);
        v3 = a2;
      }
      else
      {
        v28 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildUnlink(v28);
      }
    }
  }
  FreeHwndList(v7);
  if ( v3 )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v15 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildLink(v15, v14);
    v16 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v16);
  }
  else
  {
    v9 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildUnlink(v9);
  }
  v17 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( v17 )
  {
    v18 = BuildHwndList(v17);
    v20 = v18;
    if ( v18 )
    {
      for ( j = (_QWORD *)(v18 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v19) = 1;
        v22 = HMValidateHandleNoSecure(*j, v19);
        if ( v22 )
        {
          if ( v3 )
          {
            v23 = *(_DWORD *)(*(_QWORD *)(v22 + 40) + 236LL);
            v24 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildLink(v24, v23);
            v25 = (void *)ReferenceDwmApiPort();
            DwmAsyncOwnerChange(v25);
            v3 = a2;
          }
          else
          {
            v27 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildUnlink(v27);
          }
        }
      }
      FreeHwndList(v20);
      return v4;
    }
    return 0;
  }
  return v4;
}
