/*
 * XREFs of sub_180028AD8 @ 0x180028AD8
 * Callers:
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 *     sub_18001EE38 @ 0x18001EE38 (sub_18001EE38.c)
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180028AD8(DWORD SessionId)
{
  unsigned int v2; // esi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+18h]

  v2 = 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v6 = v3;
  if ( !(unsigned int)sub_18002880C(SessionId, 1, 0LL, &v5) )
    v2 = *(_DWORD *)(v5 + 52);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
