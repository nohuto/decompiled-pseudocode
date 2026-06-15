/*
 * XREFs of ?ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z @ 0x180026754
 * Callers:
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x18000B560 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ResetAllApplicationSpecificEndpoints(CApplicationManager *this, int a2)
{
  CApplicationManager *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // rdi
  __int64 *v8; // rbx
  __int64 **v9; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+28h] [rbp-20h]

  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( *(_DWORD *)(v6 + 212) == a2 )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)(v6 + 32);
      v14 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v7 = *(__int64 **)(v6 + 648);
      v8 = (__int64 *)*v7;
      while ( v8 != v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8[8] + 48LL))(v8[8]);
        v9 = (__int64 **)v8[2];
        if ( *((_BYTE *)v9 + 25) )
        {
          for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v8 = i;
          v8 = i;
        }
        else
        {
          v8 = (__int64 *)v8[2];
          for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v8 = j;
        }
      }
      if ( v14 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v14 = 0;
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
