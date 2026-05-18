/*
 * XREFs of sub_1800CFE40 @ 0x1800CFE40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF1A4 @ 0x1800CF1A4 (sub_1800CF1A4.c)
 *     sub_1800CFD28 @ 0x1800CFD28 (sub_1800CFD28.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CFE40(__int64 a1, _QWORD *a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v15; // [rsp+30h] [rbp-38h]
  _QWORD *v16; // [rsp+40h] [rbp-28h] BYREF

  v16 = a2;
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 32);
  else
    v8 = -1;
  v15 = v8;
  v9 = sub_1800CFD28(a1, &v16, a3, a4, a5, a6, v15);
  v10 = *v9;
  *v9 = 0LL;
  v11 = v16;
  *a2 = v10;
  if ( v11 )
  {
    sub_1800CF1A4(v11);
    j__o_free(v11);
  }
  return a2;
}
