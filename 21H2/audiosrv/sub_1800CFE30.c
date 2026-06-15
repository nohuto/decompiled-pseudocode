/*
 * XREFs of sub_1800CFE30 @ 0x1800CFE30
 * Callers:
 *     sub_1800CE750 @ 0x1800CE750 (sub_1800CE750.c)
 * Callees:
 *     sub_18005284C @ 0x18005284C (sub_18005284C.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C2D44 @ 0x1800C2D44 (sub_1800C2D44.c)
 *     sub_1800CDF74 @ 0x1800CDF74 (sub_1800CDF74.c)
 *     sub_1800CDFA4 @ 0x1800CDFA4 (sub_1800CDFA4.c)
 *     sub_1800CFD1C @ 0x1800CFD1C (sub_1800CFD1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CFE30(LPCRITICAL_SECTION lpCriticalSection, __int64 *a2)
{
  __int64 *v2; // r14
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // esi
  unsigned int i; // r12d
  _QWORD *v6; // rax
  bool v7; // al
  ULONG_PTR *p_SpinCount; // r15
  ATL::CAtlException *v10; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
  {
    try
    {
      v6 = (_QWORD *)sub_1800C2D44(&v3[1].DebugInfo, i);
      v7 = sub_1800CDFA4(v6, v2);
    }
    catch ( ATL::CAtlException *v10 )
    {
      v3 = lpCriticalSection;
      v2 = a2;
      v4 = *(_DWORD *)v10;
      break;
    }
    if ( v7 )
    {
      p_SpinCount = &v3[1].SpinCount;
      if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= v3[2].DebugInfo )
        sub_1800B8610(-2147024809);
      --*(_DWORD *)(*p_SpinCount + 4LL * i);
      if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= v3[2].DebugInfo )
        sub_1800B8610(-2147024809);
      if ( !*(_DWORD *)(*p_SpinCount + 4LL * i) )
      {
        sub_1800CFD1C((__int64 *)&v3[1], i);
        sub_18005284C(&v3[1].SpinCount, i);
        break;
      }
    }
  }
  LeaveCriticalSection(v3);
  sub_1800CDF74(v2);
  return v4;
}
