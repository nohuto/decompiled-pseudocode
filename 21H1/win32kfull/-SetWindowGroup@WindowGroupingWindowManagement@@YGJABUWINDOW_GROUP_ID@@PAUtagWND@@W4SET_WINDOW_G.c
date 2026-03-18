/*
 * XREFs of ?SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F490
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z @ 0x9256E (-xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z.c)
 *     _NtUserSetWindowGroup@16 @ 0x16A0E5 (_NtUserSetWindowGroup@16.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f2dd16d494ad0eaf0573328fa7853084___ @ 0x19E782 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f2dd16d494ad0eaf0.c)
 *     ?AddWindow@CWindowGroup@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19EB05 (-AddWindow@CWindowGroup@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?RemoveWindowFromGroup@CWindowGroupManager@@QAEJPAUtagWND@@@Z @ 0x19F464 (-RemoveWindowFromGroup@CWindowGroupManager@@QAEJPAUtagWND@@@Z.c)
 *     ?UpdateWindowInGroup@CWindowGroupManager@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F66A (-UpdateWindowInGroup@CWindowGroupManager@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WIN.c)
 */

int __fastcall WindowGroupingWindowManagement::SetWindowGroup(int *a1, int a2, int a3, CWindowGroupManager *a4)
{
  int v5; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD *Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084; // eax
  int v16; // edx
  int v18; // [esp-4h] [ebp-1Ch]
  int v19; // [esp+10h] [ebp-8h]
  int *v20; // [esp+14h] [ebp-4h]

  v5 = 0;
  v7 = 0;
  v8 = (int)a4;
  v20 = a1;
  if ( a4 != (CWindowGroupManager *)2 )
  {
    v19 = *a1;
    v9 = *(_DWORD *)(a2 + 180);
    if ( v19 != v9 )
    {
      if ( !v9 )
      {
        v7 = 1;
        goto LABEL_14;
      }
      if ( !v19 )
      {
        v7 = 2;
        goto LABEL_14;
      }
      v18 = 3;
      goto LABEL_12;
    }
    if ( v9 && ((a3 & 3) != 0 || a4) )
    {
      v18 = 4;
LABEL_12:
      v7 = v18;
    }
  }
  if ( v7 )
  {
LABEL_14:
    v10 = a3 | 2;
    v11 = v7 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
        return CWindowGroupManager::RemoveWindowFromGroup(a4, (struct tagWND *)a2);
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          return -1073741823;
        return CWindowGroupManager::UpdateWindowInGroup(a2, v10, a4);
      }
      v5 = CWindowGroupManager::RemoveWindowFromGroup(a4, (struct tagWND *)a2);
      if ( v5 < 0 )
        return v5;
    }
    Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 = (_DWORD *)anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084___((int)`anonymous namespace'::g_windowGroupManager + 8, *v20, v20, v8);
    if ( !Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 )
      return -1073741275;
    return CWindowGroup::AddWindow(
             Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084,
             v16,
             (int *)a2,
             v10,
             (int)a4);
  }
  return v5;
}
