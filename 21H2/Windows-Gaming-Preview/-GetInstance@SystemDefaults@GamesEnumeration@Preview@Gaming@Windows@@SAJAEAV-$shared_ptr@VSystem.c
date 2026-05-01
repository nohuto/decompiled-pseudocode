/*
 * XREFs of ?GetInstance@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAJAEAV?$shared_ptr@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@@Z @ 0x18003D648
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002A9D0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetInstance(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults **a1)
{
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *v2; // rdx
  unsigned int v3; // edi
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  v2 = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance;
  v3 = 0;
  if ( Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance )
  {
    v4 = qword_18005AF58;
    if ( qword_18005AF58 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(qword_18005AF58 + 8));
      v4 = qword_18005AF58;
      v2 = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance;
    }
    v5 = (volatile signed __int32 *)a1[1];
    *a1 = v2;
    a1[1] = (Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *)v4;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  else
  {
    v3 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)0x8000FFFFLL);
  }
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  return v3;
}
