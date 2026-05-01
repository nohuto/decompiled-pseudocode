/*
 * XREFs of ?UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z @ 0x180262620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     ??_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z @ 0x18025E324 (--_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromViewChangeNotifications(PeoplePaneViewManager *this, int a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // eax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 50);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v5 = *((_QWORD *)this + 49);
  v6 = 0LL;
  while ( *(_DWORD *)(v5 + 16 * v6 + 8) != a2 )
  {
    v6 = ++v3;
    if ( v3 >= v2 )
      return 0LL;
  }
  v8 = v3;
  if ( v3 < v2 )
  {
    v9 = 16LL * v3;
    PeoplePaneViewManager::ViewChangeListener::`scalar deleting destructor'((PeoplePaneViewManager::ViewChangeListener *)(v9 + v5));
    v10 = *((_QWORD *)this + 50);
    if ( v8 != v10 - 1 )
    {
      memmove_0(
        (void *)(v9 + *((_QWORD *)this + 49)),
        (const void *)(v9 + *((_QWORD *)this + 49) + 16),
        16 * (v10 - v8) - 16);
      v10 = *((_QWORD *)this + 50);
    }
    *((_QWORD *)this + 50) = v10 - 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E5,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)0x80028CA1LL);
  return 2147650721LL;
}
