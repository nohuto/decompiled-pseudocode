/*
 * XREFs of sub_18005369C @ 0x18005369C
 * Callers:
 *     sub_180053650 @ 0x180053650 (sub_180053650.c)
 * Callees:
 *     sub_180053724 @ 0x180053724 (sub_180053724.c)
 *     sub_180053770 @ 0x180053770 (sub_180053770.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005369C(LPCRITICAL_SECTION lpCriticalSection, int a2)
{
  __int64 i; // rdx
  LPCRITICAL_SECTION v5; // r8
  bool v6; // zf
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h]

  v8 = a2;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = lpCriticalSection + 1;
    v6 = (unsigned int)i == *(_QWORD *)&lpCriticalSection[1].LockCount;
    if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&lpCriticalSection[1].LockCount )
      break;
    if ( *((_DWORD *)&v5->DebugInfo->Type + i) == a2 )
    {
      v6 = (unsigned int)i == *(_QWORD *)&lpCriticalSection[1].LockCount;
      break;
    }
  }
  if ( v6 )
  {
    v9 = 0LL;
    v9 = sub_180053770(&lpCriticalSection[1], &v8, v5);
    sub_180053724(&lpCriticalSection[1].SpinCount);
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= lpCriticalSection[2].DebugInfo )
      sub_1800B8610(2147942487LL);
    ++*(_DWORD *)(lpCriticalSection[1].SpinCount + 4 * i);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
