/*
 * XREFs of ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C024174C
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C00AE6F8 (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     NtUserSetWindowGroup @ 0x1C0203A40 (NtUserSetWindowGroup.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_____const_&__lambda_feddac2f3865f252345e81b2e8967f61___ @ 0x1C0240508 (_anonymous_namespace_--FindObject_CWindow_HWND_____const_-__lambda_feddac2f3865f252345e81b2e8967.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f391ddf1cf56839542dcbc253db2f01b___ @ 0x1C0240610 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f391ddf1cf5683954.c)
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_67484336c3ce0230ba6035a2ed0557d5___ @ 0x1C0240848 (CWindowGroupManager--_ExecuteGroupAction__lambda_67484336c3ce0230ba6035a2ed0557d5___.c)
 *     ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0240B98 (-AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C0241B08 (-_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z.c)
 */

__int64 __fastcall WindowGroupingWindowManagement::SetWindowGroup(
        unsigned int *a1,
        __int64 a2,
        int a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  int v8; // r10d
  int v9; // eax
  unsigned int v10; // esi
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  __int64 v15; // rax
  CWindowGroup *v16; // r13
  struct CWindow *v17; // rax
  __int64 v18; // rdx
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b; // rax
  CWindowGroup *v20; // rsi
  struct CWindow *Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61; // rax
  __int64 v22; // rax
  __int64 *v24; // [rsp+20h] [rbp-10h] BYREF
  int v25; // [rsp+28h] [rbp-8h]
  unsigned int v26; // [rsp+2Ch] [rbp-4h]
  unsigned int v27; // [rsp+78h] [rbp+48h] BYREF

  v4 = 0;
  v8 = 0;
  if ( a4 != 2 )
  {
    v9 = *(_DWORD *)(a2 + 308);
    if ( *a1 == v9 )
    {
      if ( v9 && ((a3 & 3) != 0 || a4) )
        v8 = 4;
    }
    else
    {
      if ( !v9 )
      {
        v8 = 1;
        goto LABEL_13;
      }
      if ( !*a1 )
      {
        v8 = 2;
        goto LABEL_13;
      }
      v8 = 3;
    }
  }
  if ( v8 )
  {
LABEL_13:
    v10 = a3 | 2;
    v11 = v8 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v27 = *(_DWORD *)(a2 + 308);
        Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
                                                                                                 (__int64)`anonymous namespace'::g_windowGroupManager
                                                                                               + 16,
                                                                                                 v27,
                                                                                                 &v27);
        v20 = (CWindowGroup *)Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b;
        if ( Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b )
        {
          v24 = *(__int64 **)a2;
          Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61 = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61___(Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b + 24, (unsigned __int16)v24, &v24);
          if ( Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61 )
          {
            CWindowGroup::_RemoveWindowAction(
              v20,
              Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61);
            return v4;
          }
        }
        return (unsigned int)-1073741275;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          return (unsigned int)-1073741823;
        v27 = *(_DWORD *)(a2 + 308);
        v24 = (__int64 *)a2;
        v25 = a3 | 2;
        v26 = a4;
        return (unsigned int)CWindowGroupManager::_ExecuteGroupAction__lambda_67484336c3ce0230ba6035a2ed0557d5___(
                               (__int64)`anonymous namespace'::g_windowGroupManager,
                               &v27,
                               &v24);
      }
      v27 = *(_DWORD *)(a2 + 308);
      v15 = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
              (__int64)`anonymous namespace'::g_windowGroupManager + 16,
              v27,
              &v27);
      v16 = (CWindowGroup *)v15;
      if ( !v15 )
        return (unsigned int)-1073741275;
      v24 = *(__int64 **)a2;
      v17 = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61___(
                                v15 + 24,
                                (unsigned __int16)v24,
                                &v24);
      if ( !v17 )
        return (unsigned int)-1073741275;
      CWindowGroup::_RemoveWindowAction(v16, v17);
      v18 = *a1;
    }
    else
    {
      v18 = *a1;
    }
    v22 = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
            (__int64)`anonymous namespace'::g_windowGroupManager + 16,
            v18,
            a1);
    if ( v22 )
      return (unsigned int)CWindowGroup::AddWindow(v22, (__int64 *)a2, v10, a4);
    return (unsigned int)-1073741275;
  }
  return v4;
}
