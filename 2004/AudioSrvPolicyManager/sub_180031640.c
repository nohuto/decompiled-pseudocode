/*
 * XREFs of sub_180031640 @ 0x180031640
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018520 @ 0x180018520 (sub_180018520.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180031640(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // r9
  char *v6; // rdx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  try
  {
    if ( a2 )
    {
      v6 = *(char **)(a1 + 64);
      if ( *(char **)(a1 + 72) == v6 )
      {
        sub_180018520((_QWORD *)(a1 + 56), v6, &v9);
      }
      else
      {
        *(_DWORD *)v6 = a2;
        *(_QWORD *)(a1 + 64) += 4LL;
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_18000FA80(
                           retaddr,
                           352,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           v5);
  }
  return result;
}
