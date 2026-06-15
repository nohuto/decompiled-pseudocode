/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180035F60
 * Callers:
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180035EF0 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18006B61E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180074C5B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        _QWORD *a2)
{
  unsigned int i; // edx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  char *v11; // rdx
  char *v12; // rcx

  EnterCriticalSection(lpCriticalSection);
LABEL_2:
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&lpCriticalSection[1].LockCount; ++i )
  {
    v5 = *(_QWORD *)&lpCriticalSection[1].LockCount;
    if ( i >= v5 )
      ATL::AtlThrowImpl(-2147024809);
    v6 = *((_QWORD *)&lpCriticalSection[1].DebugInfo->Type + i);
    if ( v6 == *a2 )
    {
      v7 = i + 1LL;
      if ( v7 < i || v7 > v5 )
        ATL::AtlThrowImpl(-2147024809);
      v8 = v5 - v7;
      v9 = 8LL * i;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v8 )
      {
        DebugInfo = lpCriticalSection[1].DebugInfo;
        v11 = (char *)DebugInfo + 8 * v7;
        v12 = (char *)DebugInfo + v9;
        if ( 8 * v8 )
        {
          if ( !v12 || !v11 )
          {
            *(_DWORD *)_o__errno(v12) = 22;
            invalid_parameter_noinfo();
            ATL::AtlThrowImpl(-2147024809);
          }
          memmove_0(v12, v11, 8 * v8);
        }
      }
      --*(_QWORD *)&lpCriticalSection[1].LockCount;
      goto LABEL_2;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return 0LL;
}
