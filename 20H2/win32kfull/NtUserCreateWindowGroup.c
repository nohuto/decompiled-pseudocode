/*
 * XREFs of NtUserCreateWindowGroup @ 0x1C01F7430
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C007F1B0 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z @ 0x1C023FD18 (-CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z.c)
 */

__int64 __fastcall NtUserCreateWindowGroup(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  CWindowGroupManager *v8; // rcx
  NTSTATUS Group; // eax
  NTSTATUS v10; // edi
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v16; // [rsp+58h] [rbp+10h] BYREF
  char v17; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  v4 = 0;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v5 = 5LL;
LABEL_3:
    UserSetLastError(v5, v2, v3);
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(v3 + 456);
  if ( v6 )
    v7 = ***(_QWORD ***)(v6 + 8);
  else
    v7 = -1LL;
  if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v7) )
  {
    v5 = 5023LL;
    goto LABEL_3;
  }
  v16 = 0;
  Group = CWindowGroupManager::CreateGroup(v8, (struct WINDOW_GROUP_ID *)&v16);
  v10 = Group;
  if ( Group < 0 )
  {
    v11 = RtlNtStatusToDosError(Group);
    UserSetLastError(v11, v12, v13);
    v16 = 0;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_DWORD *)MmUserProbeAddress;
  *a1 = v16;
  LOBYTE(v4) = v10 >= 0;
LABEL_14:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  UserSessionSwitchLeaveCrit(v14);
  return v4;
}
