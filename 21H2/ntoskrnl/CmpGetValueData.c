/*
 * XREFs of CmpGetValueData @ 0x1407C46A0
 * Callers:
 *     CmpCopyValue @ 0x14065B108 (CmpCopyValue.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueKey @ 0x1406B3C34 (CmQueryMultipleValueKey.c)
 *     CmAddLogForAction @ 0x14071784C (CmAddLogForAction.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140721FFC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpQueryKeyValueData @ 0x1407C5730 (CmpQueryKeyValueData.c)
 *     CmpValueToData @ 0x14082F8AC (CmpValueToData.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14091210C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpPreserveSystemHiveData @ 0x14091FEFC (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x140921930 (CmpGetValueForAudit.c)
 *     CmpFindTagIndex @ 0x140B13964 (CmpFindTagIndex.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

bool __fastcall CmpGetValueData(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  _BYTE *v7; // r14
  unsigned __int16 v8; // bp
  __int64 *v9; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 CellFlat; // rax
  ULONG_PTR v17; // rdx
  bool v18; // zf
  char *PoolWithTag; // r13
  __int64 CellPaged; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned int v23; // r12d
  const void *v24; // rax
  size_t v25; // r8
  char v26; // di
  __int64 v27; // [rsp+70h] [rbp+18h] BYREF
  __int64 v28; // [rsp+78h] [rbp+20h]

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = (__int64 *)a5;
  *(_BYTE *)a6 = 0;
  *v9 = 0LL;
  v12 = *(_DWORD *)(a3 + 4);
  v13 = v12 + 0x80000000;
  if ( v12 < 0x80000000 )
    v13 = *(_DWORD *)(a3 + 4);
  *a4 = v13;
  if ( *(_DWORD *)(a3 + 4) >= 0x80000000 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, a7);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    if ( !CellFlat )
      return 0;
    *v9 = a3 + 8;
    return 1;
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v13 - 16345 <= 0x7FFFC026 )
  {
    v17 = *(unsigned int *)(a3 + 8);
    v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v27 = 0xFFFFFFFFLL;
    PoolWithTag = 0LL;
    a6 = 0xFFFFFFFFLL;
    a5 = 0xFFFFFFFFLL;
    if ( v18 )
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    else
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v17, &v27);
    v21 = CellPaged;
    if ( !CellPaged )
      return 0;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v22 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(CellPaged + 4), &a5);
    else
      v22 = HvpGetCellPaged(BugCheckParameter3);
    v28 = v22;
    if ( !v22 )
    {
      v26 = 0;
      goto LABEL_33;
    }
    v23 = *(_DWORD *)(a3 + 4);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v23, 0x64764D43u);
    if ( PoolWithTag )
    {
      if ( !*(_WORD *)(v21 + 2) )
      {
LABEL_30:
        v26 = 1;
        goto LABEL_31;
      }
      while ( 1 )
      {
        v24 = (const void *)((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
                           ? HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v28 + 4LL * v8), &a6)
                           : HvpGetCellPaged(BugCheckParameter3));
        if ( !v24 )
          break;
        v25 = v23;
        if ( v23 > 0x3FD8 )
          v25 = 16344LL;
        memmove(&PoolWithTag[16344 * v8], v24, v25);
        v23 -= 16344;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &a6);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &a6);
        if ( ++v8 >= *(_WORD *)(v21 + 2) )
          goto LABEL_30;
      }
    }
    v26 = 0;
LABEL_31:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &a5);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &a5);
LABEL_33:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v27);
    if ( !v26 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      return 0;
    }
    *v9 = (__int64)PoolWithTag;
    *v7 = 1;
    return 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v14 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(a3 + 8), a7);
  else
    v14 = HvpGetCellPaged(BugCheckParameter3);
  *v9 = v14;
  return v14 != 0;
}
