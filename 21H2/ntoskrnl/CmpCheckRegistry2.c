/*
 * XREFs of CmpCheckRegistry2 @ 0x1407C5CB0
 * Callers:
 *     CmCheckRegistry @ 0x140689DC8 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpCheckLexicographicalOrder @ 0x14069B700 (CmpCheckLexicographicalOrder.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1406CE32C (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCheckKey @ 0x1407C6580 (CmpCheckKey.c)
 *     CmpDoFindSubKeyByNumber @ 0x1407C82B0 (CmpDoFindSubKeyByNumber.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1409211E4 (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter3,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        RTL_BITMAP *BitMapHeader,
        __int64 a7,
        int *a8)
{
  int v9; // r13d
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int *v13; // r15
  int v14; // r12d
  __int64 v15; // r14
  unsigned int *v16; // rbx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // esi
  ULONG_PTR v20; // rdx
  int v21; // eax
  __int64 CellFlat; // rax
  __int64 v23; // rax
  ULONG_PTR v24; // rdx
  __int64 CellPaged; // rax
  unsigned int SubKeyByNumber; // esi
  int v27; // eax
  __int64 v28; // r14
  unsigned int v30; // eax
  int v31; // ebp
  unsigned int v32; // r9d
  signed int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+40h] [rbp-48h] BYREF
  __int64 v37; // [rsp+48h] [rbp-40h] BYREF
  __int64 v38; // [rsp+90h] [rbp+8h]
  char v40; // [rsp+A8h] [rbp+20h]

  v9 = 0;
  v36 = 0LL;
  v40 = 0;
  HvpGetCellContextReinitialize(&v36);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(10240LL, 0LL, 1935887683LL);
  v12 = a7;
  v38 = v11;
  if ( !v11 )
  {
    v19 = -1073741670;
    SetFailureLocation(a7, 0, 13, 0xC000009A, 0);
    return v19;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v11;
  v13 = (unsigned int *)(v11 - 20);
  *(_DWORD *)v11 = a3;
  v14 = 0;
  *(_QWORD *)(v11 + 4) = -1LL;
  v15 = 0LL;
  *(_DWORD *)(v11 + 12) = 0;
  v16 = (unsigned int *)v11;
  *a8 = 0;
  *(_BYTE *)(v11 + 16) = 0;
  while ( 1 )
  {
    if ( *((_BYTE *)v16 + 16) )
      goto LABEL_14;
    v17 = *a8;
    *((_BYTE *)v16 + 16) = 1;
    if ( v17 != -1 )
      *a8 = v17 + 1;
    v18 = CmpCheckKey(BugCheckParameter3, a5, BitMapHeader, v12);
    v19 = v18;
    if ( v18 != -2147483606 )
      break;
    v40 = 1;
LABEL_10:
    if ( v15 )
    {
      v20 = v13[2];
      if ( (_DWORD)v20 != -1 )
      {
        v21 = CmpCheckLexicographicalOrder(BugCheckParameter3, v20, *v16);
        v19 = v21;
        if ( v21 < 0 )
        {
          if ( v21 != -1073741492 )
          {
            v35 = 37;
            v32 = v21;
            goto LABEL_70;
          }
          v30 = 48;
          v31 = a2 & 0x20000;
          goto LABEL_53;
        }
      }
      v13[2] = *v16;
    }
LABEL_14:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, *v16, &v36);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    if ( !CellFlat )
    {
      v19 = -1073741492;
      v35 = 64;
      v32 = -1073741492;
LABEL_70:
      SetFailureLocation(a7, 0, 13, v32, v35);
LABEL_71:
      v28 = v38;
      goto LABEL_35;
    }
    if ( v16[3] < *(_DWORD *)(CellFlat + 20) )
    {
      v24 = *(unsigned int *)(CellFlat + 28);
      v37 = 0xFFFFFFFFLL;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, v24, &v37);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3);
      if ( !CellPaged )
      {
        v34 = 80;
LABEL_64:
        v19 = -1073741670;
LABEL_65:
        SetFailureLocation(a7, 0, 13, v19, v34);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v36);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v36);
        goto LABEL_71;
      }
      SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter3);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v37);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v37);
      if ( SubKeyByNumber == -1 )
      {
        v34 = 88;
        goto LABEL_64;
      }
      ++v16[3];
      v13 += 5;
      v16 += 5;
      if ( v15 == 511 )
      {
        v19 = -1073741492;
        v34 = 96;
        goto LABEL_65;
      }
      v16[1] = *v13;
      v23 = 1LL;
      *v16 = SubKeyByNumber;
      v16[2] = -1;
      v16[3] = 0;
      *((_BYTE *)v16 + 16) = 0;
    }
    else
    {
      v13 -= 5;
      v23 = -1LL;
      v16 -= 5;
    }
    v14 += v23;
    v15 += v23;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v36);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v36);
    if ( v15 < 0 )
    {
      if ( (a2 & 0x20000) == 0 )
      {
        v27 = CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter3);
        v19 = v27;
        if ( v27 < 0 )
        {
          v35 = 112;
          v32 = v27;
          goto LABEL_70;
        }
      }
      v28 = v38;
      if ( v40 )
        v19 = -2147483606;
      else
        v19 = 0;
      goto LABEL_35;
    }
    v12 = a7;
  }
  if ( v18 >= 0 )
    goto LABEL_10;
  if ( v18 != -1073741492 )
    goto LABEL_71;
  v31 = a2 & 0x20000;
  if ( (a2 & 0x20000) == 0 )
  {
    if ( BYTE3(NlsMbOemCodePageTag) )
      v9 = v31 + 1;
    else
      LOBYTE(v9) = (CmpBootType & 6) != 0;
  }
  v30 = 16;
LABEL_53:
  SetFailureLocation(a7, v9, 13, v19, v30);
  if ( v31 || !BYTE3(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 || !v14 )
  {
    v19 = -1073741492;
    SetFailureLocation(a7, 0, 13, 0xC000014C, 0x18u);
    goto LABEL_71;
  }
  v28 = v38;
  v33 = CmpRemoveSubKeyCellNoCellRef(BugCheckParameter3, *(unsigned int *)(v38 + 20LL * v14 + 4));
  v19 = v33;
  if ( v33 >= 0 )
  {
    v19 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  else
  {
    SetFailureLocation(a7, 0, 13, v33, 0x20u);
  }
LABEL_35:
  (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter3 + 32))(v28, 10240LL);
  return v19;
}
