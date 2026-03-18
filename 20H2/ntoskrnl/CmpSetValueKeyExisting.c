/*
 * XREFs of CmpSetValueKeyExisting @ 0x14066C27C
 * Callers:
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1407608EC (CmpCommitSetValueKeyUoW.c)
 *     CmpPreserveSystemHiveData @ 0x14087BCEC (CmpPreserveSystemHiveData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     CmpMarkValueDataDirty @ 0x14066C57C (CmpMarkValueDataDirty.c)
 *     HvReallocateCell @ 0x14066CE2C (HvReallocateCell.c)
 *     CmpSetValueDataExisting @ 0x1406E0F50 (CmpSetValueDataExisting.c)
 *     CmpFreeValueData @ 0x140705FFC (CmpFreeValueData.c)
 *     CmpSetValueDataNew @ 0x1407061A0 (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140707168 (HvAllocateCell.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, void *Src, size_t Size, int a7)
{
  __int16 v7; // r15
  int v9; // ebx
  unsigned int v11; // eax
  unsigned int v12; // r13d
  __int16 v13; // r12
  unsigned int v14; // r15d
  __int64 v15; // rax
  void *v16; // rcx
  unsigned int Cell; // ebx
  unsigned int v19; // eax
  __int16 v20; // [rsp+30h] [rbp-20h]
  unsigned int v21; // [rsp+34h] [rbp-1Ch] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF

  v22[0] = -1;
  v7 = 0;
  v23[0] = 0LL;
  v21 = 0;
  v22[1] = 0;
  v9 = 0;
  if ( !(unsigned __int8)HvMarkCellDirty(a1, a2, 0LL) )
    return 3221225853LL;
  v11 = *(_DWORD *)(a3 + 4);
  v12 = v11 + 0x80000000;
  if ( v11 >= 0x80000000 )
  {
    v13 = 0;
  }
  else
  {
    v12 = *(_DWORD *)(a3 + 4);
    if ( *(_DWORD *)(a1 + 212) >= 4u && v11 - 16345 <= 0x7FFFC026 )
      v13 = 2;
    else
      v13 = 1;
  }
  if ( (unsigned int)Size <= 4 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 212) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    v7 = 1;
LABEL_10:
    v20 = v7;
    goto LABEL_11;
  }
  v7 = 2;
  v20 = 2;
LABEL_11:
  if ( !(unsigned __int8)CmpMarkValueDataDirty(a1) )
    return 3221225853LL;
  if ( v7 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( v20 != 1 )
    {
      if ( v20 != 2 )
        return (unsigned int)v9;
      if ( v13 == 2 )
      {
        v9 = CmpSetValueDataExisting(a1, *(_DWORD *)(a3 + 8));
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      else
      {
        v9 = CmpSetValueDataNew(a1, Src, (unsigned int)Size, (__int64)&v21);
        if ( v9 < 0 )
          return (unsigned int)v9;
        if ( v13 && v12 )
          HvFreeCell(a1, *(unsigned int *)(a3 + 8));
        v14 = v21;
      }
      *(_DWORD *)(a3 + 12) = a4;
      *(_WORD *)(a3 + 16) &= ~2u;
      *(_DWORD *)(a3 + 4) = Size;
      *(_DWORD *)(a3 + 8) = v14;
      return 0;
    }
    if ( v13 == 1 && v12 )
    {
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v14, v22);
      v16 = (void *)v15;
      if ( v15 )
      {
        if ( (unsigned int)Size <= -4 - *(_DWORD *)(v15 - 4) )
        {
          Cell = v14;
          goto LABEL_19;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v22);
        v23[0] = 0LL;
        v19 = HvReallocateCell(a1, v14, (__int64)v23, (__int64)v22);
        Cell = v19;
        if ( v19 != -1 )
        {
          *(_DWORD *)(a3 + 8) = v19;
LABEL_29:
          v16 = (void *)v23[0];
LABEL_19:
          memmove(v16, Src, (unsigned int)Size);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v22);
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 8) = Cell;
          *(_DWORD *)(a3 + 4) = Size;
          if ( v13 == 2 )
            CmpFreeValueData(a1, v14);
          return 0;
        }
      }
    }
    else
    {
      Cell = HvAllocateCell(a1, Size, a7, (unsigned int)v23, (__int64)v22);
      if ( Cell != -1 )
        goto LABEL_29;
    }
    return (unsigned int)-1073741670;
  }
  if ( v13 == 1 && v12 || v13 == 2 )
    CmpFreeValueData(a1, *(unsigned int *)(a3 + 8));
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = Size + 0x80000000;
  memmove((void *)(a3 + 8), Src, (unsigned int)Size);
  *(_DWORD *)(a3 + 12) = a4;
  *(_WORD *)(a3 + 16) &= ~2u;
  return 0LL;
}
