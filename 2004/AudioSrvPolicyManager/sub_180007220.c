/*
 * XREFs of sub_180007220 @ 0x180007220
 * Callers:
 *     sub_180014EB0 @ 0x180014EB0 (sub_180014EB0.c)
 * Callees:
 *     sub_1800071E0 @ 0x1800071E0 (sub_1800071E0.c)
 *     sub_180015454 @ 0x180015454 (sub_180015454.c)
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180007220(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  _QWORD *v10; // rdi
  _QWORD **v11; // rsi
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v16; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+50h] [rbp+18h] BYREF

  lpCriticalSection = a1;
  v5 = qword_18004FE68;
  sub_1800071E0(qword_18004FE68, (__int64 *)&lpCriticalSection);
  v6 = qword_18004FE78;
  v7 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v18 = v7;
  sub_180015454(a2, a3);
  sub_18001B65C(v6, a2);
  if ( v7 )
    LeaveCriticalSection(v7);
  v8 = *(_QWORD *)(v5 + 40);
  v9 = (struct _RTL_CRITICAL_SECTION *)(v8 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 24));
  v10 = (_QWORD *)(v8 + 64);
  v11 = 0LL;
  v12 = (_QWORD *)*v10;
  if ( *v10 )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)*v10;
      if ( v12[1] == a3 )
      {
        if ( v12 + 1 != &v18 )
        {
          v12 = (_QWORD *)*v10;
          if ( v13 )
          {
            v16 = (_QWORD *)*v10;
            v12 = (_QWORD *)*v13;
            *v10 = *v13;
            sub_180039D98(v16);
          }
          goto LABEL_8;
        }
        v11 = (_QWORD **)v10;
      }
      v12 = (_QWORD *)*v12;
      v10 = (_QWORD *)*v10;
LABEL_8:
      if ( !v12 )
      {
        if ( v11 )
        {
          v14 = *v11;
          if ( *v11 )
          {
            *v11 = (_QWORD *)*v14;
            sub_180039D98(v14);
          }
        }
        break;
      }
    }
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
