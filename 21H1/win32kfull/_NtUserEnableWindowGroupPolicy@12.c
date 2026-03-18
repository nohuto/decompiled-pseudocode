/*
 * XREFs of _NtUserEnableWindowGroupPolicy@12 @ 0x161581
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f2dd16d494ad0eaf0573328fa7853084___ @ 0x19E782 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f2dd16d494ad0eaf0.c)
 */

int __stdcall NtUserEnableWindowGroupPolicy(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // ecx
  ULONG v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084; // ecx
  int v11; // [esp-4h] [ebp-10h]
  _BYTE v12[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  if ( !IAMThreadAccessGranted(_gptiCurrent) )
  {
    v11 = 5;
LABEL_3:
    v5 = v11;
LABEL_14:
    UserSetLastError((struct _NT_TIB *)v5);
    goto LABEL_15;
  }
  v6 = *(_DWORD *)(v4 + 248);
  if ( v6 )
    v7 = ***(_DWORD ***)(v6 + 4);
  else
    v7 = -1;
  if ( !anonymous_namespace_::GroupManagementEnabledForDesktop((void *)v7) )
  {
    v5 = 5023;
    goto LABEL_14;
  }
  if ( (a3 & 0xFFFFFFFE) != 0 )
  {
    v11 = 87;
    goto LABEL_3;
  }
  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084___(
                                                                                           &a1,
                                                                                           v8);
  if ( !Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 )
  {
    v5 = RtlNtStatusToDosError(-1073741275);
    goto LABEL_14;
  }
  *(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 + 12) &= ~a2;
  v3 = 1;
LABEL_15:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  UserSessionSwitchLeaveCrit();
  return v3;
}
