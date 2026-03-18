/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x14091210C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406B3C34 (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpIsValueTombstone @ 0x1406C01F4 (CmpIsValueTombstone.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindNameInListWithStatus @ 0x1407221B0 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetValueData @ 0x1407C46A0 (CmpGetValueData.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v7; // rsi
  __int64 v8; // r13
  unsigned int v9; // r15d
  int started; // edi
  __int64 v11; // rax
  unsigned int v12; // r12d
  size_t v13; // rdi
  unsigned __int16 v14; // cx
  __int64 v15; // rdx
  __int16 v16; // r12
  __int64 KcbAtLayerHeight; // rsi
  __int16 *v18; // r15
  char v19; // al
  __int64 KeyNodeForKcb; // rax
  __int64 v21; // rcx
  char v22; // al
  char v23; // r15
  ULONG_PTR v24; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // r12d
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  char v35; // [rsp+41h] [rbp-B7h]
  _WORD BugCheckParameter4[5]; // [rsp+42h] [rbp-B6h] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-ACh]
  __int64 v38; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A0h] BYREF
  size_t Size; // [rsp+60h] [rbp-98h] BYREF
  int v41; // [rsp+68h] [rbp-90h]
  void *Src; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v43[2]; // [rsp+78h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-70h]
  __int64 v45; // [rsp+90h] [rbp-68h]
  __int64 v46; // [rsp+98h] [rbp-60h]
  __int128 v47; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-48h]

  v38 = 0LL;
  v43[0] = 0LL;
  v39 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  WORD1(v47) = -1;
  v7 = 0LL;
  HvpGetCellContextReinitialize(&v38);
  HvpGetCellContextReinitialize(v43);
  v8 = 0LL;
  v44 = 0LL;
  Src = 0LL;
  LOBYTE(BugCheckParameter4[0]) = 0;
  HvpGetCellContextReinitialize(&v39);
  v9 = 0;
  *(_DWORD *)&BugCheckParameter4[1] = 0;
  v37 = 0;
  v35 = 0;
  v45 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v47, v45);
  if ( started < 0 )
  {
    v23 = 0;
    goto LABEL_69;
  }
  CmpLockKcbStackShared((__int64)&v47);
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
  {
    v23 = 1;
    goto LABEL_69;
  }
  v11 = 0LL;
  v12 = 0;
  while ( 2 )
  {
    v41 = v11;
    if ( (unsigned int)v11 >= a3 )
    {
      *a5 = v9;
      if ( a6 )
        *a6 = v12;
      v7 = 0LL;
      v23 = 1;
      if ( v35 )
        started = -2147483643;
      else
        started = 0;
      goto LABEL_69;
    }
    v46 = 3 * v11;
    v13 = *(_QWORD *)(a2 + 24 * v11);
    Size = v13;
    v14 = *(_WORD *)v13;
    if ( *(_WORD *)v13 )
    {
      v15 = *(_QWORD *)(v13 + 8);
      do
      {
        if ( *(_WORD *)(v15 + 2 * (((unsigned __int64)v14 - 1) >> 1)) )
          break;
        v14 -= 2;
        *(_WORD *)v13 = v14;
      }
      while ( v14 );
    }
    *(_DWORD *)&BugCheckParameter4[3] = -1;
    v16 = *(_WORD *)(v45 + 66);
    if ( v16 < 0 )
      goto LABEL_37;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v47, v16);
      v18 = (__int16 *)(KcbAtLayerHeight + 66);
      if ( a1 && *v18 == *(unsigned __int16 *)(a1 + 4) )
      {
        v19 = *(_BYTE *)(KcbAtLayerHeight + 65);
        if ( !v19 )
          goto LABEL_17;
      }
      else
      {
        if ( !*v18 )
          goto LABEL_17;
        v19 = *(_BYTE *)(KcbAtLayerHeight + 65);
      }
      if ( v19 == 1 )
        goto LABEL_36;
LABEL_17:
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        break;
LABEL_31:
      if ( --v16 < 0 )
        goto LABEL_36;
    }
    KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)v43, 0);
    started = CmpFindNameInListWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                (_DWORD *)(KeyNodeForKcb + 36),
                v13,
                0,
                0LL,
                (__int64)&BugCheckParameter4[3]);
    v21 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v21, v43);
    else
      HvpReleaseCellPaged(v21, (unsigned int *)v43);
    if ( started < 0 )
    {
      if ( started != -1073741772 )
        goto LABEL_33;
      if ( a1 && *v18 == *(unsigned __int16 *)(a1 + 4) )
      {
        v22 = *(_BYTE *)(KcbAtLayerHeight + 65);
        if ( !v22 )
          goto LABEL_36;
        goto LABEL_29;
      }
      if ( *v18 )
      {
        v22 = *(_BYTE *)(KcbAtLayerHeight + 65);
LABEL_29:
        if ( v22 )
          goto LABEL_36;
      }
      v13 = Size;
      goto LABEL_31;
    }
    v8 = KcbAtLayerHeight;
    v44 = KcbAtLayerHeight;
LABEL_36:
    v9 = *(_DWORD *)&BugCheckParameter4[1];
LABEL_37:
    if ( *(_DWORD *)&BugCheckParameter4[3] != -1 )
    {
      v24 = *(_QWORD *)(v8 + 32);
      if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v24, *(unsigned int *)&BugCheckParameter4[3], &v38);
      else
        CellFlat = HvpGetCellPaged(v24, *(unsigned int *)&BugCheckParameter4[3], (unsigned int *)&v38);
      v7 = CellFlat;
      v43[1] = CellFlat;
      if ( CmpIsValueTombstone(*(_QWORD *)(v8 + 32), CellFlat) )
      {
        started = -1073741772;
        goto LABEL_34;
      }
      v27 = *(_DWORD *)(v7 + 4);
      v28 = v27 + 0x80000000;
      if ( v27 < 0x80000000 )
        v28 = *(_DWORD *)(v7 + 4);
      LODWORD(Size) = v28;
      v9 = (v9 + 7) & 0xFFFFFFF8;
      *(_DWORD *)&BugCheckParameter4[1] = v9;
      v29 = (v37 + 7) & 0xFFFFFFF8;
      if ( v35 || v28 + v9 > *a5 || v28 + v9 < v9 )
      {
        v35 = 1;
      }
      else
      {
        if ( !CmpGetValueData(
                v26,
                *(unsigned int *)&BugCheckParameter4[3],
                v7,
                (unsigned int *)&Size,
                (__int64)&Src,
                (__int64)BugCheckParameter4,
                &v39) )
        {
          started = -1073741670;
          goto LABEL_34;
        }
        v28 = Size;
        memmove((void *)(a4 + v9), Src, (unsigned int)Size);
        v30 = v46;
        *(_DWORD *)(a2 + 8 * v46 + 16) = *(_DWORD *)(v7 + 12);
        *(_DWORD *)(a2 + 8 * v30 + 8) = v28;
        *(_DWORD *)(a2 + 8 * v30 + 12) = v9;
        v9 += v28;
        *(_DWORD *)&BugCheckParameter4[1] = v9;
        if ( LOBYTE(BugCheckParameter4[0]) )
        {
          ExFreePoolWithTag(Src, 0);
        }
        else
        {
          v31 = *(_QWORD *)(v8 + 32);
          if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v31, &v39);
          else
            HvpReleaseCellPaged(v31, (unsigned int *)&v39);
        }
        Src = 0LL;
        v26 = *(_QWORD *)(v8 + 32);
      }
      v12 = v28 + v29;
      v37 = v12;
      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v26, &v38);
      else
        HvpReleaseCellPaged(v26, (unsigned int *)&v38);
      v11 = (unsigned int)(v41 + 1);
      continue;
    }
    break;
  }
  started = -1073741772;
LABEL_33:
  v7 = 0LL;
LABEL_34:
  v23 = 1;
LABEL_69:
  if ( Src )
  {
    if ( LOBYTE(BugCheckParameter4[0]) )
    {
      ExFreePoolWithTag(Src, 0);
    }
    else
    {
      v32 = *(_QWORD *)(v8 + 32);
      if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v32, &v39);
      else
        HvpReleaseCellPaged(v32, (unsigned int *)&v39);
    }
  }
  if ( v7 )
  {
    v33 = *(_QWORD *)(v8 + 32);
    if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v33, &v38);
    else
      HvpReleaseCellPaged(v33, (unsigned int *)&v38);
  }
  if ( v23 )
    CmpUnlockKcbStack((__int64)&v47);
  if ( *((_QWORD *)&v48 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v48 + 1));
  return (unsigned int)started;
}
