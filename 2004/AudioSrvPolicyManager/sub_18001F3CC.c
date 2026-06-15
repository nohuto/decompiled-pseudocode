/*
 * XREFs of sub_18001F3CC @ 0x18001F3CC
 * Callers:
 *     sub_180029174 @ 0x180029174 (sub_180029174.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F3CC(__int64 a1, int a2)
{
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // r14
  BOOL v8; // esi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+28h] [rbp-20h]

  v3 = qword_18004FE78;
  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v5 = 0LL;
  v6 = *(_QWORD **)(v3 + 72);
  while ( v6 )
  {
    v7 = v6[2];
    v6 = (_QWORD *)*v6;
    lpCriticalSection = (LPCRITICAL_SECTION)(v7 + 32);
    v13 = 0;
    sub_18001A330((__int64)&lpCriticalSection);
    v8 = 0;
    v9 = *(_QWORD **)(v7 + 72);
    while ( v9 && !v8 )
    {
      v10 = v9[2];
      v9 = (_QWORD *)*v9;
      v8 = a2 == *(_DWORD *)(v10 + 192);
    }
    if ( v13 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v13 = 0;
    }
    if ( v8 )
    {
      v5 = v7;
      break;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
