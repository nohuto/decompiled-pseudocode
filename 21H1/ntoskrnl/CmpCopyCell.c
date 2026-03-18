/*
 * XREFs of CmpCopyCell @ 0x140656E58
 * Callers:
 *     CmpLightWeightCreateSetValueData @ 0x140656D4C (CmpLightWeightCreateSetValueData.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1407154D0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407156C0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCopyKeyPartial @ 0x14074DE30 (CmpCopyKeyPartial.c)
 *     CmpCopyValue @ 0x140874560 (CmpCopyValue.c)
 *     CmpSyncKeyValues @ 0x14087564C (CmpSyncKeyValues.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087B404 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     HvAllocateCell @ 0x140698D38 (HvAllocateCell.c)
 */

__int64 __fastcall CmpCopyCell(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rax
  const void *v9; // r15
  unsigned int v10; // ebx
  unsigned int Cell; // eax
  void *v12; // rsi
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+64h] [rbp+Ch]

  v14[0] = -1;
  v15 = 0LL;
  v16 = -1;
  v14[1] = 0;
  v17 = 0;
  v7 = -1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v14);
  v9 = (const void *)v8;
  if ( v8 )
  {
    v10 = -4 - *(_DWORD *)(v8 - 4);
    Cell = HvAllocateCell(a3, v10, a4, (unsigned int)&v15, (__int64)&v16);
    v12 = v15;
    v7 = Cell;
    if ( Cell != -1 )
      memmove(v15, v9, v10);
    if ( v12 )
      (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v16);
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v14);
  }
  return v7;
}
