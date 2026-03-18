/*
 * XREFs of CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14065D114
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     CmpInitializeValueNameString @ 0x14065DBC8 (CmpInitializeValueNameString.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14065DDFC (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x14065DE48 (CmpLightWeightCreateSetValueData.c)
 *     CmpRemoveValueFromList @ 0x1406BEFA0 (CmpRemoveValueFromList.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpMarkValueDataDirty @ 0x140716D50 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpFindNameInList @ 0x14071F68C (CmpFindNameInList.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteValueKeyUoW(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  _DWORD *v4; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rdi
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v9; // rsi
  __int64 CellFlat; // rax
  ULONG_PTR v11; // r15
  PVOID PoolWithTag; // r12
  unsigned int v13; // r15d
  __int64 CellPaged; // rax
  __int64 v15; // r13
  int v16; // ebx
  _DWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+48h] BYREF
  int v21; // [rsp+A8h] [rbp+50h] BYREF
  int v22; // [rsp+B0h] [rbp+58h] BYREF
  int v23; // [rsp+B4h] [rbp+5Ch]
  int v24; // [rsp+B8h] [rbp+60h] BYREF
  int v25; // [rsp+BCh] [rbp+64h]

  v4 = *(_DWORD **)(a1 + 104);
  v21 = 0;
  LODWORD(BugCheckParameter4) = 0;
  v25 = 0;
  v23 = 0;
  v6 = *(_QWORD *)(a1 + 48);
  v24 = -1;
  v22 = -1;
  v18 = v4;
  v7 = *(_QWORD *)(v6 + 32);
  v19 = 0LL;
  if ( !v4 )
  {
    v16 = CmpLightWeightCreateSetValueData(a1, &v18);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v4 = v18;
    CmpLightWeightUpdateSharedSetValueData(v18, *(_QWORD *)(a1 + 48));
    --*v4;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x10uLL, 0x77554D43u, a4);
  v9 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *((_QWORD *)TransientPoolWithTag + 1) = 0LL;
  *TransientPoolWithTag = -1;
  TransientPoolWithTag[1] = -1;
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, *(unsigned int *)(a1 + 88));
  else
    CellFlat = HvpGetCellPaged(v7);
  v11 = CellFlat;
  if ( !CellFlat )
  {
    v16 = -1073741670;
LABEL_29:
    CmpFreeTransientPoolWithTag(v9, 0x77554D43u);
    return (unsigned int)v16;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
  if ( PoolWithTag
    && (CmpInitializeValueNameString(v11),
        v18 = v4 + 1,
        (unsigned __int8)CmpFindNameInList(
                           v7,
                           (int)v4 + 4,
                           (unsigned int)&v19,
                           0,
                           (__int64)&v21,
                           (__int64)&BugCheckParameter4)) )
  {
    v13 = BugCheckParameter4;
    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v7, (unsigned int)BugCheckParameter4);
    else
      CellPaged = HvpGetCellPaged(v7);
    v15 = CellPaged;
    v16 = CmpMarkValueDataDirty(v7);
    if ( v16 >= 0 )
    {
      v16 = HvpMarkCellDirty(v7, v13);
      if ( v16 >= 0 )
      {
        v16 = CmpRemoveValueFromList(v7);
        if ( v16 >= 0 )
        {
          v9[1] = v13;
          v16 = 0;
          *(_QWORD *)(a1 + 112) = v9;
          v9 = 0LL;
        }
      }
    }
    if ( v15 )
    {
      if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v7, &v22);
      else
        HvpReleaseCellPaged(v7, &v22);
    }
  }
  else
  {
    v16 = -1073741670;
  }
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v7, &v24);
  else
    HvpReleaseCellPaged(v7, &v24);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v9 )
    goto LABEL_29;
  return (unsigned int)v16;
}
