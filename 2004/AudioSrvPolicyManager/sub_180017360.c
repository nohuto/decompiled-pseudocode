/*
 * XREFs of sub_180017360 @ 0x180017360
 * Callers:
 *     sub_180020F20 @ 0x180020F20 (sub_180020F20.c)
 * Callees:
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180017360(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r9
  _QWORD *v6; // rdx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 744);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 744));
  try
  {
    v6 = *(_QWORD **)(a1 + 800);
    if ( *(_QWORD **)(a1 + 808) == v6 )
    {
      sub_1800183C0(a1 + 792, v6, &v9);
    }
    else
    {
      *v6 = a2;
      *(_QWORD *)(a1 + 800) += 8LL;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_18000FA80(
                           retaddr,
                           4727,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v5);
  }
  return result;
}
