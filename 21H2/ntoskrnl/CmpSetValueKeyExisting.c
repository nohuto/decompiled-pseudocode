/*
 * XREFs of CmpSetValueKeyExisting @ 0x1407169FC
 * Callers:
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpPreserveSystemHiveData @ 0x14091FEFC (CmpPreserveSystemHiveData.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmpSetValueDataNew @ 0x1406BE2FC (CmpSetValueDataNew.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpSetValueDataExisting @ 0x1406E3D54 (CmpSetValueDataExisting.c)
 *     CmpMarkValueDataDirty @ 0x140716D50 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvReallocateCell @ 0x14079BA7C (HvReallocateCell.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 *     CmpFreeValueData @ 0x14079CF44 (CmpFreeValueData.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size,
        int a7)
{
  __int16 v9; // r15
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // r13d
  __int16 v14; // r12
  unsigned int v15; // esi
  __int64 CellFlat; // rax
  void *v17; // rcx
  int v18; // r15d
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-10h] BYREF

  v21 = 0xFFFFFFFFLL;
  v9 = 0;
  v22[0] = 0LL;
  LODWORD(v20) = 0;
  result = HvpMarkCellDirty(BugCheckParameter3, a2);
  if ( (int)result >= 0 )
  {
    v12 = *(_DWORD *)(a3 + 4);
    v13 = v12 + 0x80000000;
    if ( v12 >= 0x80000000 )
    {
      v14 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(a3 + 4);
      if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v12 - 16345 <= 0x7FFFC026 )
        v14 = 2;
      else
        v14 = 1;
    }
    if ( (unsigned int)Size > 4 )
    {
      if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && (unsigned int)(Size - 16345) <= 0x7FFFC026 )
        v9 = 2;
      else
        v9 = 1;
    }
    result = CmpMarkValueDataDirty(BugCheckParameter3);
    if ( (int)result >= 0 )
    {
      if ( !v9 )
      {
        if ( v14 == 1 && v13 || v14 == 2 )
          CmpFreeValueData(BugCheckParameter3, *(unsigned int *)(a3 + 8));
        *(_DWORD *)(a3 + 8) = 0;
        *(_DWORD *)(a3 + 4) = Size + 0x80000000;
        memmove((void *)(a3 + 8), Src, (unsigned int)Size);
        *(_DWORD *)(a3 + 12) = a4;
        *(_WORD *)(a3 + 16) &= ~2u;
        return 0LL;
      }
      v15 = *(_DWORD *)(a3 + 8);
      if ( v9 != 1 )
      {
        if ( v14 == 2 )
        {
          LODWORD(BugCheckParameter4) = *(_DWORD *)(a3 + 8);
          result = CmpSetValueDataExisting(BugCheckParameter3, (char *)Src, Size, a7, BugCheckParameter4);
          if ( (int)result < 0 )
            return result;
        }
        else
        {
          result = CmpSetValueDataNew(BugCheckParameter3, (char *)Src, (unsigned int)Size, a7, &v20);
          if ( (int)result < 0 )
            return result;
          if ( v14 && v13 )
            HvFreeCell(BugCheckParameter3, *(unsigned int *)(a3 + 8));
          v15 = v20;
        }
        *(_DWORD *)(a3 + 12) = a4;
        *(_WORD *)(a3 + 16) &= ~2u;
        result = 0LL;
        *(_DWORD *)(a3 + 4) = Size;
        *(_DWORD *)(a3 + 8) = v15;
        return result;
      }
      if ( v14 == 1 && v13 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v15, &v21);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3);
        v17 = (void *)CellFlat;
        if ( !CellFlat )
          return 3221225626LL;
        if ( (unsigned int)Size <= -4 - *(_DWORD *)(CellFlat - 4) )
        {
          v18 = v15;
          goto LABEL_24;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v21);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v21);
        v22[0] = 0LL;
        result = HvReallocateCell(BugCheckParameter3, v15, (__int64)&v20, (__int64)v22, (__int64)&v21);
        if ( (int)result >= 0 )
        {
          v18 = v20;
          *(_DWORD *)(a3 + 8) = v20;
LABEL_35:
          v17 = (void *)v22[0];
LABEL_24:
          memmove(v17, Src, (unsigned int)Size);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v21);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v21);
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 8) = v18;
          *(_DWORD *)(a3 + 4) = Size;
          if ( v14 == 2 )
            CmpFreeValueData(BugCheckParameter3, v15);
          return 0LL;
        }
      }
      else
      {
        result = HvAllocateCell(BugCheckParameter3, Size, a7, (unsigned int)&v20, (__int64)v22, (__int64)&v21);
        if ( (int)result >= 0 )
        {
          v18 = v20;
          goto LABEL_35;
        }
      }
    }
  }
  return result;
}
