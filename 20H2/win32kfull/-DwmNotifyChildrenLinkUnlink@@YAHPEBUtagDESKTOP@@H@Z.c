/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0081358
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0081314 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     DwmAsyncChildLink @ 0x1C0081610 (DwmAsyncChildLink.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     DwmAsyncOwnerChange @ 0x1C00C5734 (DwmAsyncOwnerChange.c)
 *     DwmAsyncChildUnlink @ 0x1C00CC010 (DwmAsyncChildUnlink.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  int v3; // r12d
  unsigned int v4; // ebp
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  struct tagBWL *v7; // r13
  _QWORD *i; // r14
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // ebx
  void *v14; // rax
  __int64 v15; // rcx
  void *v16; // rax
  int v17; // ebx
  void *v18; // rax
  __int64 v19; // rcx
  void *v20; // rax
  struct tagWND *v21; // rcx
  struct tagBWL *v22; // rax
  __int64 v23; // rdx
  struct tagBWL *v24; // r15
  _QWORD *j; // r14
  __int64 v26; // rcx
  __int64 v27; // rsi
  int v28; // ebx
  void *v29; // rax
  __int64 v30; // rcx
  void *v31; // rax
  void *v33; // rax
  void *v34; // rax

  v3 = a2;
  v4 = 1;
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL), 3, 0LL);
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (_QWORD *)((char *)v5 + 32); *i != 1LL; ++i )
  {
    LOBYTE(v6) = 1;
    v12 = HMValidateHandleNoSecure(*i, v6);
    if ( v12 )
    {
      if ( v3 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 236LL);
        v14 = (void *)ReferenceDwmApiPort(v11);
        DwmAsyncChildLink(v14, v13);
        v16 = (void *)ReferenceDwmApiPort(v15);
        DwmAsyncOwnerChange(v16);
        v3 = a2;
      }
      else
      {
        v34 = (void *)ReferenceDwmApiPort(v11);
        DwmAsyncChildUnlink(v34);
      }
    }
  }
  FreeHwndList(v7);
  if ( v3 )
  {
    v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v18 = (void *)ReferenceDwmApiPort(v9);
    DwmAsyncChildLink(v18, v17);
    v20 = (void *)ReferenceDwmApiPort(v19);
    DwmAsyncOwnerChange(v20);
  }
  else
  {
    v10 = (void *)ReferenceDwmApiPort(v9);
    DwmAsyncChildUnlink(v10);
  }
  v21 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( v21 )
  {
    v22 = BuildHwndList(v21, 3, 0LL);
    v24 = v22;
    if ( v22 )
    {
      for ( j = (_QWORD *)((char *)v22 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v23) = 1;
        v27 = HMValidateHandleNoSecure(*j, v23);
        if ( v27 )
        {
          if ( v3 )
          {
            v28 = *(_DWORD *)(*(_QWORD *)(v27 + 40) + 236LL);
            v29 = (void *)ReferenceDwmApiPort(v26);
            DwmAsyncChildLink(v29, v28);
            v31 = (void *)ReferenceDwmApiPort(v30);
            DwmAsyncOwnerChange(v31);
            v3 = a2;
          }
          else
          {
            v33 = (void *)ReferenceDwmApiPort(v26);
            DwmAsyncChildUnlink(v33);
          }
        }
      }
      FreeHwndList(v24);
      return v4;
    }
    return 0;
  }
  return v4;
}
