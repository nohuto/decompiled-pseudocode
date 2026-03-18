/*
 * XREFs of _NtUserDeleteWindowGroup@4 @ 0x160AA9
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f2dd16d494ad0eaf0573328fa7853084___ @ 0x19E782 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f2dd16d494ad0eaf0.c)
 *     _lambda_4a1771dfab2014d21355f8f68e70493c_::operator() @ 0x19E9CD (_lambda_4a1771dfab2014d21355f8f68e70493c_--operator().c)
 */

int __stdcall NtUserDeleteWindowGroup(int a1)
{
  int v1; // esi
  int v2; // ecx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  CWindowGroup *Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084; // eax
  _BYTE v8[8]; // [esp+4h] [ebp-Ch] BYREF
  struct CWindowGroupManager *v9; // [esp+Ch] [ebp-4h]

  v1 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  if ( !IAMThreadAccessGranted(_gptiCurrent) )
  {
    v3 = 5;
LABEL_3:
    UserSetLastError((struct _NT_TIB *)v3);
    goto LABEL_12;
  }
  v4 = *(_DWORD *)(v2 + 248);
  if ( v4 )
    v5 = ***(_DWORD ***)(v4 + 4);
  else
    v5 = -1;
  if ( !anonymous_namespace_::GroupManagementEnabledForDesktop((void *)v5) )
  {
    v3 = 5023;
    goto LABEL_3;
  }
  v9 = `anonymous namespace'::g_windowGroupManager;
  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 = (CWindowGroup *)anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084___(&a1, `anonymous namespace'::g_windowGroupManager);
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 )
    lambda_4a1771dfab2014d21355f8f68e70493c_::operator()(Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084);
  v1 = 1;
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  UserSessionSwitchLeaveCrit();
  return v1;
}
