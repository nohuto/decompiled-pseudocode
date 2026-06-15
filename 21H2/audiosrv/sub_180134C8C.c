/*
 * XREFs of sub_180134C8C @ 0x180134C8C
 * Callers:
 *     sub_180036AC8 @ 0x180036AC8 (sub_180036AC8.c)
 * Callees:
 *     sub_1800308A0 @ 0x1800308A0 (sub_1800308A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180136244 @ 0x180136244 (sub_180136244.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180134C8C(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  __int64 i; // rdx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v5 = v2;
  sub_180060060(v6, L"LegacyDefaultEndpointKey");
  sub_1800308A0((_QWORD *)(a1 + 464), &v5, (char *)v6);
  if ( v7 >= 8 )
    sub_1800472E0(v6[0], 2 * v7 + 2);
  v3 = v5;
  *(_DWORD *)(*(_QWORD *)&v5[1].LockCount + 4LL) = 0;
  *(_DWORD *)(*(_QWORD *)&v3[1].LockCount + 52LL) = 0;
  *(_DWORD *)(*(_QWORD *)&v3[1].LockCount + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)&v3[1].LockCount + 76LL) = 0;
  for ( i = 0LL; i < 48; i += 24LL )
    *(_DWORD *)(*(_QWORD *)&v3[1].LockCount + i + 100) = 0;
  sub_180136244(*(_QWORD *)&v3[1].LockCount);
  if ( v2 )
    LeaveCriticalSection(v2);
}
