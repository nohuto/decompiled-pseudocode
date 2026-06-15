/*
 * XREFs of sub_1800290D8 @ 0x1800290D8
 * Callers:
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall sub_1800290D8(__int64 a1)
{
  BOOL v2; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  _QWORD *i; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h]

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v7 = v3;
  if ( !(unsigned int)sub_18002880C(*(_DWORD *)(a1 + 212), 0, 0LL, &v6) )
  {
    for ( i = *(_QWORD **)(v6 + 104); i && i[2] != a1; i = (_QWORD *)*i )
      ;
    v2 = i != 0LL;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
