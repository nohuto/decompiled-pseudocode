/*
 * XREFs of CmpLightWeightSwapParentSubKeyList @ 0x14087FE5C
 * Callers:
 *     CmpLightWeightCommitAddKeyUoW @ 0x14087ECAC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087EE34 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087F024 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpLightWeightSwapParentSubKeyList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r11
  int *v8; // r8
  int v9; // ecx
  int v10; // edx
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v12 = -1;
  v13 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v12);
  v6 = a3 - v5;
  v7 = 2LL;
  v8 = (int *)(v5 + 20);
  do
  {
    v9 = v8[2];
    v10 = *v8;
    v8[2] = *(int *)((char *)v8 + v6 - 8);
    *v8 = *(int *)((char *)v8 + v6 - 16);
    *(int *)((char *)v8 + v6 - 8) = v9;
    *(int *)((char *)v8++ + v6 - 16) = v10;
    --v7;
  }
  while ( v7 );
  if ( !(*(_DWORD *)(v5 + 20) + *(_DWORD *)(v5 + 24)) )
  {
    *(_WORD *)(v5 + 52) = 0;
    *(_DWORD *)(v5 + 56) = 0;
  }
  return (*(__int64 (__fastcall **)(__int64, int *, int *))(a1 + 16))(a1, &v12, v8);
}
