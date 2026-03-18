/*
 * XREFs of ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C02413E0
 * Callers:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C00BEDD0 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _anonymous_namespace_::FindObject_CWindow_HWND_____const_&__lambda_feddac2f3865f252345e81b2e8967f61___ @ 0x1C0240508 (_anonymous_namespace_--FindObject_CWindow_HWND_____const_-__lambda_feddac2f3865f252345e81b2e8967.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f391ddf1cf56839542dcbc253db2f01b___ @ 0x1C0240610 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f391ddf1cf5683954.c)
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C0240ADC (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 */

void __fastcall WindowGroupingWindowManagement::HandleWindowDestruction(
        WindowGroupingWindowManagement *this,
        struct tagWND *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  CWindowGroup *Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b; // rax
  struct CWindow *Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  CWindowGroup *v8; // [rsp+40h] [rbp+18h] BYREF
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v3 )
    v4 = ***(_QWORD ***)(v3 + 8);
  else
    v4 = -1LL;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(v4) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
    LODWORD(v7) = *((_DWORD *)this + 77);
    Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b = (CWindowGroup *)anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___((__int64)`anonymous namespace'::g_windowGroupManager + 16, (unsigned int)v7, &v7);
    if ( Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b )
    {
      v7 = *(_QWORD *)this;
      v8 = Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b;
      Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61 = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61___(
                                                                                                     (__int64)Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b + 24,
                                                                                                     (unsigned __int16)v7,
                                                                                                     &v7);
      if ( Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61 )
        lambda_e3bb960287ece658ac40c5b32ccf215b_::operator()(
          &v8,
          Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  }
}
