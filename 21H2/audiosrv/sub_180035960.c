/*
 * XREFs of sub_180035960 @ 0x180035960
 * Callers:
 *     sub_1800358F0 @ 0x1800358F0 (sub_1800358F0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180035960(LPCRITICAL_SECTION lpCriticalSection, _QWORD *a2)
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
  __int64 v14; // rcx

  EnterCriticalSection(lpCriticalSection);
LABEL_2:
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&lpCriticalSection[1].LockCount; ++i )
  {
    v5 = *(_QWORD *)&lpCriticalSection[1].LockCount;
    if ( i >= v5 )
      sub_1800B8610(2147942487LL);
    v6 = *((_QWORD *)&lpCriticalSection[1].DebugInfo->Type + i);
    if ( v6 == *a2 )
    {
      v7 = i + 1LL;
      if ( v7 < i || v7 > v5 )
        sub_1800B8610(2147942487LL);
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
            *(_DWORD *)o__errno(v12) = 22;
            o__invalid_parameter_noinfo(v14);
            sub_1800B8610(2147942487LL);
          }
          memmove(v12, v11, 8 * v8);
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
