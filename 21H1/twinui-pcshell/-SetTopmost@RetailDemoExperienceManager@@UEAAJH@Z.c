/*
 * XREFs of ?SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z @ 0x1801CA380
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetTopmost@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801CB4B4 (-_SetTopmost@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::SetTopmost(RetailDemoExperienceManager *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  *((_BYTE *)this + 220) = a2 != 0;
  try
  {
    RetailDemoExperienceManager::_SetTopmost((RetailDemoExperienceManager *)((char *)this - 128));
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x156,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v5);
  }
  return result;
}
