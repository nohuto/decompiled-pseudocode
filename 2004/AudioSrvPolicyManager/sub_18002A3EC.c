/*
 * XREFs of sub_18002A3EC @ 0x18002A3EC
 * Callers:
 *     sub_180007520 @ 0x180007520 (sub_180007520.c)
 *     sub_1800077B0 @ 0x1800077B0 (sub_1800077B0.c)
 *     sub_180007840 @ 0x180007840 (sub_180007840.c)
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002A3EC(DWORD SessionId)
{
  unsigned int v2; // esi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+18h]

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v6 = v3;
  if ( !(unsigned int)sub_18002880C(SessionId, 1, 0LL, &v5) )
    v2 = *(_DWORD *)(v5 + 304);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
