/*
 * XREFs of sub_180135100 @ 0x180135100
 * Callers:
 *     sub_180134A80 @ 0x180134A80 (sub_180134A80.c)
 *     sub_1801363FC @ 0x1801363FC (sub_1801363FC.c)
 *     sub_180136D4C @ 0x180136D4C (sub_180136D4C.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180133D60 @ 0x180133D60 (sub_180133D60.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall sub_180135100(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // rbx
  _WORD *v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v5 = *(_QWORD **)(a1 + 472);
  while ( 1 )
  {
    v5 = (_QWORD *)*v5;
    if ( v5 == *(_QWORD **)(a1 + 472) )
      break;
    v6 = v5 + 2;
    if ( v5[5] >= 8uLL )
      v6 = *(_WORD **)v6;
    sub_180060060((__int64 *)&v10, v6);
    v7 = a2[1];
    if ( a2[2] == v7 )
    {
      sub_180133D60(a2, v7, (__int64)&v10);
      v8 = *((_QWORD *)&v11 + 1);
    }
    else
    {
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 24) = 0LL;
      *(_OWORD *)v7 = v10;
      *(_OWORD *)(v7 + 16) = v11;
      *(_QWORD *)&v11 = 0LL;
      v8 = 7LL;
      *((_QWORD *)&v11 + 1) = 7LL;
      LOWORD(v10) = 0;
      a2[1] += 32LL;
    }
    if ( v8 >= 8 )
      sub_1800472E0(v10, 2 * v8 + 2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
