/*
 * XREFs of _NtUserCreateWindowGroup@4 @ 0x160894
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?CreateGroup@CWindowGroupManager@@QAEJPAUWINDOW_GROUP_ID@@@Z @ 0x19EE4C (-CreateGroup@CWindowGroupManager@@QAEJPAUWINDOW_GROUP_ID@@@Z.c)
 */

BOOL __stdcall NtUserCreateWindowGroup(ULONG a1)
{
  BOOL v1; // ebx
  int v2; // ecx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  CWindowGroupManager *v6; // ecx
  NTSTATUS Group; // eax
  NTSTATUS v8; // esi
  struct _NT_TIB *v9; // eax
  _DWORD *v10; // ecx
  _BYTE v12[8]; // [esp+10h] [ebp-2Ch] BYREF
  int v13; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v1 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  if ( !IAMThreadAccessGranted(_gptiCurrent) )
  {
    v3 = 5;
LABEL_3:
    UserSetLastError((struct _NT_TIB *)v3);
    goto LABEL_14;
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
  v13 = 0;
  Group = CWindowGroupManager::CreateGroup(v6, (struct WINDOW_GROUP_ID *)&v13);
  v8 = Group;
  if ( Group < 0 )
  {
    v9 = (struct _NT_TIB *)RtlNtStatusToDosError(Group);
    UserSetLastError(v9);
    v13 = 0;
  }
  ms_exc.registration.TryLevel = 0;
  v10 = (_DWORD *)a1;
  if ( a1 >= _MmUserProbeAddress )
    v10 = (_DWORD *)_MmUserProbeAddress;
  *v10 = v13;
  ms_exc.registration.TryLevel = -2;
  v1 = v8 >= 0;
LABEL_14:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  UserSessionSwitchLeaveCrit();
  return v1;
}
