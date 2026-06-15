/*
 * XREFs of sub_18002A46C @ 0x18002A46C
 * Callers:
 *     sub_18000736C @ 0x18000736C (sub_18000736C.c)
 *     sub_180007520 @ 0x180007520 (sub_180007520.c)
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002A46C(DWORD SessionId, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+48h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v7 = v4;
  if ( !(unsigned int)sub_18002880C(SessionId, 1, 0LL, &v6) )
  {
    v5 = v6;
    *(_DWORD *)(v6 + 308) = a2;
    *(_DWORD *)(v5 + 304) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
