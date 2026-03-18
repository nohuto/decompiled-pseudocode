/*
 * XREFs of _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_8f4b63029e330354df5e58e7f72e89f8___ @ 0xF4F98
 * Callers:
 *     ?xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z @ 0x19F8FE (-xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?GroupManagementEnabledForCaller@WindowGroupingUtility@@YG_NXZ @ 0x9272E (-GroupManagementEnabledForCaller@WindowGroupingUtility@@YG_NXZ.c)
 *     _lambda_8f4b63029e330354df5e58e7f72e89f8_::operator() @ 0xF5008 (_lambda_8f4b63029e330354df5e58e7f72e89f8_--operator().c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f2dd16d494ad0eaf0573328fa7853084___ @ 0x19E782 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f2dd16d494ad0eaf0.c)
 */

bool __thiscall anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_8f4b63029e330354df5e58e7f72e89f8___(
        _DWORD *this,
        int a2)
{
  int v3; // edx
  int v4; // ecx
  int Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084; // eax
  int v6; // eax
  bool result; // al
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = this[45];
  result = 0;
  if ( (unsigned __int8)WindowGroupingUtility::GroupManagementEnabledForCaller() && v3 )
  {
    Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084___(
                                                                                             &v8,
                                                                                             v4);
    v6 = Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084
       ? ((*(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 + 12) & 1) != 0
        ? 0
        : -1073741198)
       : -1073741275;
    if ( v6 >= 0 && (unsigned __int8)lambda_8f4b63029e330354df5e58e7f72e89f8_::operator()(this) )
      return 1;
  }
  return result;
}
