/*
 * XREFs of sub_18000C9D0 @ 0x18000C9D0
 * Callers:
 *     sub_18000B460 @ 0x18000B460 (sub_18000B460.c)
 * Callees:
 *     sub_180009280 @ 0x180009280 (sub_180009280.c)
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000C9D0(LPCRITICAL_SECTION lpCriticalSection, __int64 a2)
{
  __int64 v2; // rsi
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // al
  unsigned __int64 v9; // rdx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  char *v11; // r8
  ULONG_PTR SpinCount; // rax
  const void *v13; // rdx
  size_t v14; // r8
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rdx
  ATL::CAtlException *v18; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  v5 = 0LL;
  try
  {
    while ( 1 )
    {
      v6 = (unsigned int)v5;
      if ( (unsigned __int64)(unsigned int)v5 >= *(_QWORD *)&v3[1].LockCount )
        goto LABEL_33;
      v7 = (__int64)v3[1].DebugInfo + 32 * (unsigned int)v5;
      if ( *(_DWORD *)(v7 + 8) != *(_DWORD *)(v2 + 8) )
        break;
      if ( *(_QWORD *)v7 && *(_QWORD *)v2 )
      {
        v8 = *(_QWORD *)v7 == *(_QWORD *)v2;
        goto LABEL_8;
      }
LABEL_9:
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)v5 >= v3[2].DebugInfo )
        sub_18000A174(-2147024809);
      --*(_DWORD *)(v3[1].SpinCount + 4 * v5);
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)v5 >= v3[2].DebugInfo )
        sub_18000A174(-2147024809);
      if ( !*(_DWORD *)(v3[1].SpinCount + 4 * v5) )
      {
        sub_180009280((void **)&v3[1].DebugInfo, (unsigned int)v5);
        v9 = v6 + 1;
        if ( v6 + 1 < v6 || (DebugInfo = v3[2].DebugInfo, v9 > (unsigned __int64)DebugInfo) )
          sub_18000A174(-2147024809);
        v11 = (char *)DebugInfo - v9;
        if ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v9 )
        {
          SpinCount = v3[1].SpinCount;
          v13 = (const void *)(SpinCount + 4 * v9);
          v14 = 4LL * (_QWORD)v11;
          if ( v14 )
          {
            if ( !(SpinCount + 4 * v6) || !v13 )
            {
              *(_DWORD *)o__errno(DebugInfo, v13) = 22;
              o__invalid_parameter_noinfo();
              sub_18000A174(-2147024809);
            }
            memmove((void *)(SpinCount + 4 * v6), v13, v14);
            DebugInfo = v3[2].DebugInfo;
          }
        }
        v3[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo - 1);
        goto LABEL_33;
      }
LABEL_21:
      v5 = (unsigned int)(v5 + 1);
    }
    v8 = 0;
LABEL_8:
    if ( !v8 )
      goto LABEL_21;
    goto LABEL_9;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v18;
  }
LABEL_33:
  LeaveCriticalSection(v3);
  v15 = *(_QWORD *)(v2 + 24);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (volatile signed __int32 *)(*(_QWORD *)(v2 + 16) - 24LL);
  if ( _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
  return v4;
}
