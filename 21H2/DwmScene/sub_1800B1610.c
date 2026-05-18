/*
 * XREFs of sub_1800B1610 @ 0x1800B1610
 * Callers:
 *     sub_1800ACBBC @ 0x1800ACBBC (sub_1800ACBBC.c)
 * Callees:
 *     sub_180083CB4 @ 0x180083CB4 (sub_180083CB4.c)
 *     sub_1800B1BD4 @ 0x1800B1BD4 (sub_1800B1BD4.c)
 */

__int64 __fastcall sub_1800B1610(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // [rsp+20h] [rbp-50h]
  __int64 v9; // [rsp+28h] [rbp-48h]
  _OWORD v10[4]; // [rsp+30h] [rbp-40h] BYREF

  *(_DWORD *)(a1 + 292) = 0;
  v10[0] = xmmword_180214C90;
  v10[1] = xmmword_180214CA0;
  v10[2] = xmmword_180214CB0;
  v10[3] = xmmword_180214CC0;
  sub_180083CB4((_OWORD *)(a1 + 932), v10);
  *(_DWORD *)(a1 + 440) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 296) = 1056997505;
  *(_DWORD *)(a1 + 300) = 1056997505;
  *(_DWORD *)(a1 + 304) = 1056997505;
  *(_DWORD *)(a1 + 308) = 1065353216;
  *(_BYTE *)(a1 + 1612) = 0;
  *(_DWORD *)(a1 + 312) = 1065353216;
  *(_DWORD *)(a1 + 332) = 1065353216;
  *(_DWORD *)(a1 + 340) = 1065353216;
  *(_DWORD *)(a1 + 316) = 1;
  *(_DWORD *)(a1 + 320) = 1036831949;
  *(_DWORD *)(a1 + 324) = 1148846080;
  *(_DWORD *)(a1 + 328) = 1114636288;
  *(_WORD *)(a1 + 464) = 768;
  *(_DWORD *)(a1 + 544) = 7;
  *(_QWORD *)(a1 + 344) = qword_180221E78;
  *(_DWORD *)(a1 + 352) = dword_180214C00;
  *(_DWORD *)(a1 + 356) = dword_180214C04;
  *(_DWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 364) = dword_180214C00;
  *(_DWORD *)(a1 + 368) = dword_180214C04;
  *(_OWORD *)(a1 + 472) = 0u;
  *(_DWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 488) = 0u;
  *(_DWORD *)(a1 + 396) = 1065353216;
  *(_OWORD *)(a1 + 504) = 0u;
  *(_OWORD *)(a1 + 520) = 0u;
  sub_1800B1BD4(a1, 1LL, 0LL, 2LL, 0LL, 0LL);
  sub_1800B1BD4(a1, 2LL, 0LL, 0LL, v8, v9);
  return sub_1800B1BD4(a1, 3LL, 0LL, 2LL, a5, a6);
}
