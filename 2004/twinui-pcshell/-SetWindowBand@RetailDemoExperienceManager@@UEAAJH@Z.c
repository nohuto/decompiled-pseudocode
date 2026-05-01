/*
 * XREFs of ?SetWindowBand@RetailDemoExperienceManager@@UEAAJH@Z @ 0x1801EDF00
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetWindowBand@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EF084 (-_SetWindowBand@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::SetWindowBand(RetailDemoExperienceManager *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  *((_DWORD *)this + 54) = a2;
  try
  {
    RetailDemoExperienceManager::_SetWindowBand((RetailDemoExperienceManager *)((char *)this - 128));
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x171,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v5);
  }
  return result;
}
