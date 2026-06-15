/*
 * XREFs of sub_18001E848 @ 0x18001E848
 * Callers:
 *     sub_18002CA20 @ 0x18002CA20 (sub_18002CA20.c)
 * Callees:
 *     sub_18001078C @ 0x18001078C (sub_18001078C.c)
 *     sub_180011230 @ 0x180011230 (sub_180011230.c)
 *     sub_180012D98 @ 0x180012D98 (sub_180012D98.c)
 *     sub_180012EA0 @ 0x180012EA0 (sub_180012EA0.c)
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 *     sub_180015640 @ 0x180015640 (sub_180015640.c)
 *     sub_180015700 @ 0x180015700 (sub_180015700.c)
 *     sub_180015E4C @ 0x180015E4C (sub_180015E4C.c)
 *     sub_1800166BC @ 0x1800166BC (sub_1800166BC.c)
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 *     sub_18001F4C8 @ 0x18001F4C8 (sub_18001F4C8.c)
 *     sub_1800290D8 @ 0x1800290D8 (sub_1800290D8.c)
 *     sub_1800292E8 @ 0x1800292E8 (sub_1800292E8.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180029AAC @ 0x180029AAC (sub_180029AAC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001E848(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  _DWORD *v6; // rax
  unsigned int i; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+10h]

  v12 = a1;
  v3 = qword_18004FE78;
  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v13 = v4;
  v5 = *(_QWORD *)(a2 + 256);
  LODWORD(v12) = 0;
  sub_1800166BC(a2);
  if ( (unsigned int)sub_180029840(*(_DWORD *)(a2 + 196)) )
  {
    sub_180029AAC(*(_DWORD *)(a2 + 196), (__int64)&v12);
    if ( (_DWORD)v12 )
      sub_18001E454(v3, *(_DWORD *)(a2 + 196), 3u);
  }
  if ( v5 && (unsigned int)sub_1800290D8(v5) )
  {
    EnterCriticalSection(v4);
    v12 = (__int64)v4;
    if ( !(unsigned int)sub_18001078C(v5) )
      sub_18001F4C8(v3, v5, 1LL);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  if ( (*(_BYTE *)(a2 + 480) & 1) != 0 )
    sub_180015640(a2, 0, -1);
  v6 = (_DWORD *)(a2 + 528);
  if ( *(_DWORD *)(a2 + 528) )
  {
    for ( i = 0; i < 2; ++i )
      *v6++ = 0;
    if ( v5 )
      sub_180011230(v5);
  }
  if ( (*(_DWORD *)(a2 + 480) & 0x1000) != 0 )
    sub_180015700(a2, 0, -1);
  if ( *(_DWORD *)(a2 + 484) )
  {
    sub_1800292E8(a2);
    *(_DWORD *)(a2 + 484) = 0;
  }
  if ( *(_DWORD *)(a2 + 488) )
    *(_DWORD *)(a2 + 488) = 0;
  *(_DWORD *)(a2 + 520) = 0;
  v8 = *(_DWORD *)(a2 + 540);
  if ( v8 > 0 )
  {
    sub_180012D98(*(_QWORD *)(a2 + 256), -v8);
    *(_DWORD *)(a2 + 540) = 0;
  }
  v9 = *(_DWORD *)(a2 + 544);
  if ( v9 > 0 )
  {
    sub_180012EA0(*(_QWORD *)(a2 + 256), -v9);
    *(_DWORD *)(a2 + 544) = 0;
  }
  v10 = *(_DWORD *)(a2 + 548);
  if ( v10 > 0 )
  {
    sub_180012FA8(*(_QWORD *)(a2 + 256), -v10);
    *(_DWORD *)(a2 + 548) = 0;
  }
  sub_180015E4C(a2, 1);
  sub_18001B65C(v3, a2);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
