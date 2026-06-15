/*
 * XREFs of sub_1801375A0 @ 0x1801375A0
 * Callers:
 *     sub_1801366A8 @ 0x1801366A8 (sub_1801366A8.c)
 * Callees:
 *     sub_1800308A0 @ 0x1800308A0 (sub_1800308A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801375A0(__int64 a1, _WORD *a2, int a3, __int64 a4)
{
  __int64 v5; // rbp
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rax
  __int64 v10; // r9
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13[3]; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-38h]

  v5 = a3;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v12 = v8;
  sub_180060060(v13, a2);
  sub_1800308A0((_QWORD *)(a1 + 464), &v12, (char *)v13);
  if ( v14 >= 8 )
    sub_1800472E0(v13[0], 2 * v14 + 2);
  v9 = v12;
  if ( v12 != *(struct _RTL_CRITICAL_SECTION **)(a1 + 472) )
  {
    v10 = 3 * v5;
    *(_BYTE *)(*(_QWORD *)&v12[1].LockCount + 8 * v10) = *(_BYTE *)(a4 + 24 * v5);
    *(_BYTE *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 1) = *(_BYTE *)(a4 + 24 * v5 + 1);
    *(_BYTE *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 2) = *(_BYTE *)(a4 + 24 * v5 + 2);
    *(_DWORD *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 4) = *(_DWORD *)(a4 + 24 * v5 + 4);
    *(_DWORD *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 8) = *(_DWORD *)(a4 + 24 * v5 + 8);
    *(_QWORD *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 16) = *(_QWORD *)(a4 + 24 * v5 + 16);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
