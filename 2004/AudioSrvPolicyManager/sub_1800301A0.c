/*
 * XREFs of sub_1800301A0 @ 0x1800301A0
 * Callers:
 *     sub_180017070 @ 0x180017070 (sub_180017070.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180030498 @ 0x180030498 (sub_180030498.c)
 */

__int64 __fastcall sub_1800301A0(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r9
  _QWORD *j; // r8
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  char v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a2 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = *(_QWORD *)(a1 + 80);
  v10 = *(_QWORD **)(a1 + 64);
  v9 = v5 & *(_QWORD *)(a1 + 104);
  v11 = 2 * v9;
  for ( j = *(_QWORD **)(v8 + 16 * v9); ; j = (_QWORD *)*j )
  {
    v13 = *(_QWORD **)(v8 + 8 * v11) == v10 ? *(_QWORD **)(a1 + 64) : **(_QWORD ***)(v8 + 8 * v11 + 8);
    if ( j == v13 )
      break;
    if ( j[2] == *a2 )
      goto LABEL_11;
  }
  j = *(_QWORD **)(a1 + 64);
LABEL_11:
  if ( j == v10 )
  {
    v14 = -2147023728;
    sub_180003AB0(
      retaddr,
      117,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      -2147023728);
  }
  else
  {
    sub_180030498(a1 + 56, &v17);
    *a2 = 0LL;
    v14 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v14;
}
