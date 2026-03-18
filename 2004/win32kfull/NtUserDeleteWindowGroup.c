/*
 * XREFs of NtUserDeleteWindowGroup @ 0x1C01F8560
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C00BEDD0 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f391ddf1cf56839542dcbc253db2f01b___ @ 0x1C0240610 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f391ddf1cf5683954.c)
 *     _lambda_61241d85ba638410c71ba06bf69ceb6b_::operator() @ 0x1C0240948 (_lambda_61241d85ba638410c71ba06bf69ceb6b_--operator().c)
 */

__int64 __fastcall NtUserDeleteWindowGroup(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF
  struct CWindowGroupManager *v14; // [rsp+38h] [rbp+10h] BYREF
  char v15; // [rsp+40h] [rbp+18h] BYREF

  v13 = a1;
  v1 = a1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  v4 = 0LL;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v5 = 5LL;
LABEL_3:
    UserSetLastError(v5, v2, v3);
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(v3 + 448);
  if ( v6 )
    v7 = ***(_QWORD ***)(v6 + 8);
  else
    v7 = -1LL;
  if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v7) )
  {
    v5 = 5023LL;
    goto LABEL_3;
  }
  v14 = `anonymous namespace'::g_windowGroupManager;
  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
                                                                                           (char *)`anonymous namespace'::g_windowGroupManager
                                                                                         + 16,
                                                                                           v1,
                                                                                           &v13);
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b )
    lambda_61241d85ba638410c71ba06bf69ceb6b_::operator()(
      &v14,
      Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b);
  v4 = 1LL;
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v4;
}
