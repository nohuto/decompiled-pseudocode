/*
 * XREFs of sub_180007AB0 @ 0x180007AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800071E0 @ 0x1800071E0 (sub_1800071E0.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_180007AB0(__int64 a1)
{
  __int64 v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  _QWORD *i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  LPCRITICAL_SECTION v9; // [rsp+50h] [rbp+18h] BYREF

  sub_1800071E0(a1, (__int64 *)&v9);
  v1 = qword_18004FE78;
  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v3 = *(_QWORD **)(v1 + 72);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    v8 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
    sub_18001A330(&lpCriticalSection);
    for ( i = *(_QWORD **)(v4 + 72); i; i = (_QWORD *)*i )
      ;
    if ( v8 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v8 = 0;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
