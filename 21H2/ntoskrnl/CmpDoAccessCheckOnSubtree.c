/*
 * XREFs of CmpDoAccessCheckOnSubtree @ 0x140AB4A4C
 * Callers:
 *     CmDumpKeyToFile @ 0x14090C1BC (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmpDumpKeyToBuffer @ 0x140AB48B4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     CmpFindSubKeyByNumber @ 0x1406BF278 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpCheckKeyAccess @ 0x140918174 (CmpCheckKeyAccess.c)
 */

__int64 __fastcall CmpDoAccessCheckOnSubtree(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        char a3,
        struct _LOOKASIDE_LIST_EX *a4,
        int a5)
{
  int SubKeyByNumber; // ebx
  unsigned int *TransientPoolWithTag; // rax
  void *v9; // r14
  __int64 v10; // rbp
  unsigned int *v11; // rdi
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rdx
  _DWORD *CellFlat; // rax
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF

  v19 = 0xFFFFFFFFLL;
  v18 = 0;
  if ( (a5 & 0xFFFFFFFC) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 )
  {
    TransientPoolWithTag = (unsigned int *)CmpAllocateTransientPoolWithTag(PagedPool, 0x2800uLL, 0x74634D43u, a4);
    v9 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      TransientPoolWithTag[3] = 0;
      *TransientPoolWithTag = a2;
      v10 = 0LL;
      *((_BYTE *)TransientPoolWithTag + 16) = !(a5 & 1);
      v11 = TransientPoolWithTag;
      while ( 1 )
      {
        if ( !*((_BYTE *)v11 + 16) )
        {
          v12 = *v11;
          *((_BYTE *)v11 + 16) = 1;
          SubKeyByNumber = CmpCheckKeyAccess(BugCheckParameter3, v12);
          if ( SubKeyByNumber < 0 )
            break;
        }
        v13 = *v11;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, v13, &v19);
        else
          CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3, v13, (unsigned int *)&v19);
        if ( !CellFlat )
        {
          SubKeyByNumber = -1073741670;
          break;
        }
        v15 = v11[3];
        if ( v15 >= CellFlat[5] + CellFlat[6] )
        {
          --v10;
          v11 -= 5;
        }
        else
        {
          SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, CellFlat, v15, &v18);
          if ( SubKeyByNumber < 0 )
            goto LABEL_26;
          v16 = v18;
          if ( v18 == -1 || (++v11[3], ++v10, v11 += 5, v10 == 512) )
          {
            SubKeyByNumber = -1073741670;
LABEL_26:
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v19);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v19);
            break;
          }
          v11[3] = 0;
          *v11 = v16;
          *((_BYTE *)v11 + 16) = 0;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v19);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v19);
        if ( v10 < 0 )
        {
          SubKeyByNumber = 0;
          break;
        }
      }
      CmpFreeTransientPoolWithTag(v9, 0x74634D43u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)SubKeyByNumber;
}
