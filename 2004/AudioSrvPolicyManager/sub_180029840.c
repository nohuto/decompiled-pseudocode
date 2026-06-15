/*
 * XREFs of sub_180029840 @ 0x180029840
 * Callers:
 *     sub_180015574 @ 0x180015574 (sub_180015574.c)
 *     sub_180016910 @ 0x180016910 (sub_180016910.c)
 *     sub_180016950 @ 0x180016950 (sub_180016950.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall sub_180029840(DWORD SessionId, int a2, _DWORD *a3)
{
  BOOL v6; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 *i; // rax
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( !(unsigned int)sub_18002880C(SessionId, 1, 0LL, &v10) )
  {
    for ( i = *(__int64 **)(v10 + 176); i && *((_DWORD *)i + 4) != a2; i = (__int64 *)*i )
      ;
    v6 = i != 0LL;
    if ( a3 )
      *a3 = *(_DWORD *)(v10 + 224);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return v6;
}
