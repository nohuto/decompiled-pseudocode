/*
 * XREFs of ?AddWindowToGroup@WindowGroupManager@@UEAAJPEAUHWND__@@KI@Z @ 0x180272CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_37b20808f8e3e2471631d9a7a190ee1c___ @ 0x1802723C0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_37b20808f8e3e2471631d9a7a190ee1c.c)
 */

__int64 __fastcall WindowGroupManager::AddWindowToGroup(WindowGroupManager *this, HWND a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = a3;
  try
  {
    v4 = a3;
    v7 = 0;
    if ( a4 == 1 )
    {
      v7 = 1;
    }
    else if ( a4 == 2 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 11) + 48LL))(
             *((_QWORD *)this + 11),
             a3,
             1LL,
             1LL);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          125LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
          (const char *)(unsigned int)v8);
      v9 = *((_QWORD *)this + 14);
      v17[0] = (char *)this - 8;
      v17[1] = &v20;
      *(_QWORD *)&v18 = v9;
      *((_QWORD *)&v18 + 1) = v17;
      CurrentThreadId = GetCurrentThreadId();
      v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_37b20808f8e3e2471631d9a7a190ee1c___(
              v11,
              CurrentThreadId,
              &v18);
      v13 = v12;
      if ( v12 >= 0 )
        v13 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5F,
          (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
          (const char *)(unsigned int)v12);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          142LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
          (const char *)(unsigned int)v13);
      v4 = v20;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HWND, _QWORD, int))(**((_QWORD **)this + 11) + 40LL))(
            *((_QWORD *)this + 11),
            v4,
            a2,
            0LL,
            v7);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        145LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x95,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
                           v15);
  }
  return result;
}
