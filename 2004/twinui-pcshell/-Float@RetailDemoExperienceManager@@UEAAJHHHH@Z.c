/*
 * XREFs of ?Float@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x1801ECCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EE8C4 (-_Float@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::Float(
        RetailDemoExperienceManager *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  *((_DWORD *)this + 59) = a2;
  *((_DWORD *)this + 60) = a3;
  *((_DWORD *)this + 61) = a4;
  *((_DWORD *)this + 62) = a5;
  try
  {
    RetailDemoExperienceManager::_Float((RetailDemoExperienceManager *)((char *)this - 128));
    if ( v9 )
      LeaveCriticalSection(v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFA,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v10);
  }
  return result;
}
