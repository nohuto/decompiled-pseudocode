/*
 * XREFs of CmpCopyValue @ 0x140878E80
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140729760 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpMergeKeyValues @ 0x1408795E0 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140879F8C (CmpSyncKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCopyCell @ 0x1405E2220 (CmpCopyCell.c)
 *     CmpSetValueDataNew @ 0x14065DC94 (CmpSetValueDataNew.c)
 *     CmpFreeValueData @ 0x1406602D4 (CmpFreeValueData.c)
 *     CmpGetValueData @ 0x1406E7B70 (CmpGetValueData.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCopyValue(__int64 a1, __int64 a2, ULONG_PTR a3, int a4)
{
  __int64 (__fastcall *v5)(__int64, __int64, _DWORD *); // rax
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // esi
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  unsigned int *v13; // r12
  unsigned int v14; // eax
  bool ValueData; // al
  ULONG_PTR v16; // rcx
  PVOID v18; // rbx
  unsigned int v19; // ebx
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  __int64 v23; // rax
  unsigned int v24; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-1Ch] BYREF
  _DWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+48h]
  int v31; // [rsp+B8h] [rbp+58h]

  v31 = a4;
  v30 = a2;
  v24 = 0;
  v26[1] = 0;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v26[0] = -1;
  v8 = v5(a1, a2, v26);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-1;
  v11 = *(_DWORD *)(v8 + 4);
  v12 = v11 + 0x80000000;
  if ( v11 < 0x80000000 )
    v12 = *(_DWORD *)(v8 + 4);
  v13 = (unsigned int *)(v8 + 8);
  v29 = *(_DWORD *)(v8 + 8);
  v25 = v12;
  v10 = CmpCopyCell(a1, v30, a3, a4);
  if ( v10 == -1 || !v12 )
    goto LABEL_14;
  if ( v12 <= 4 )
  {
    if ( v11 < 0x80000000
      && (v21 = *v13,
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26),
          (v13 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v21, v26)) == 0LL)
      || (v22 = *v13,
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26),
          (v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v10, v26)) == 0) )
    {
      HvFreeCell(a3, v10);
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(v23 + 8) = v22;
    *(_DWORD *)(v23 + 4) = v12 + 0x80000000;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v26);
    v9 = 0LL;
LABEL_14:
    if ( v9 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26);
    return v10;
  }
  v14 = v12 - 16345;
  if ( (*(_DWORD *)(a1 + 212) < 4u || v14 > 0x7FFFC026) && (*(_DWORD *)(a3 + 212) < 4u || v14 > 0x7FFFC026) )
  {
    v19 = CmpCopyCell(a1, v29, a3, v31);
  }
  else
  {
    P = 0LL;
    v27[1] = 0;
    LOBYTE(v29) = 0;
    v27[0] = -1;
    ValueData = CmpGetValueData(a1, v30, v9, &v25, (__int64)&P, (__int64)&v29, (__int64)v27);
    v16 = a3;
    if ( !ValueData )
    {
LABEL_13:
      HvFreeCell(v16, v10);
      v10 = -1;
      goto LABEL_14;
    }
    v18 = P;
    v12 = v25;
    if ( (int)CmpSetValueDataNew(a3, (char *)P, v25, v31, &v24) < 0 )
    {
      if ( (_BYTE)v29 == 1 )
        ExFreePoolWithTag(v18, 0);
      else
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v27);
      goto LABEL_21;
    }
    if ( (_BYTE)v29 == 1 )
      ExFreePoolWithTag(v18, 0);
    else
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v27);
    v19 = v24;
  }
  if ( v19 == -1 )
  {
LABEL_21:
    v16 = a3;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v26);
  v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v10, v26);
  if ( v20 )
  {
    *(_DWORD *)(v20 + 8) = v19;
    *(_DWORD *)(v20 + 4) = v12;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v26);
    return v10;
  }
  HvFreeCell(a3, v10);
  CmpFreeValueData(a3, v19, v12);
  return 0xFFFFFFFFLL;
}
