/*
 * XREFs of ?Show@RetailDemoExperienceManager@@UEAAJXZ @ 0x1801EDFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EF0D4 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::Show(RetailDemoExperienceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  try
  {
    RetailDemoExperienceManager::_Show((RetailDemoExperienceManager *)((char *)this - 128));
    if ( v2 )
      LeaveCriticalSection(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAE,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v3);
  }
  return result;
}
