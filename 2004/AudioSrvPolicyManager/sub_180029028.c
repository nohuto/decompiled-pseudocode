/*
 * XREFs of sub_180029028 @ 0x180029028
 * Callers:
 *     sub_180011230 @ 0x180011230 (sub_180011230.c)
 *     sub_1800112C0 @ 0x1800112C0 (sub_1800112C0.c)
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 *     sub_18001F4C8 @ 0x18001F4C8 (sub_18001F4C8.c)
 * Callees:
 *     sub_180017FBC @ 0x180017FBC (sub_180017FBC.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_180028E74 @ 0x180028E74 (sub_180028E74.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029028(DWORD SessionId, __int64 a2)
{
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v6; // eax
  _QWORD *v7; // rbx
  __int64 *i; // rdx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp+20h]

  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v11 = v5;
  v6 = sub_18002880C(SessionId, 0, 0LL, &v10);
  if ( v6 )
  {
    v4 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 <= 0 )
      v4 = v6;
  }
  else
  {
    v7 = (_QWORD *)v10;
    for ( i = *(__int64 **)(v10 + 104); i && i[2] != a2; i = (__int64 *)*i )
      ;
    if ( i )
    {
      sub_180017FBC((__int64 **)(v10 + 104), i);
      sub_180028E74(v7);
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v4;
}
