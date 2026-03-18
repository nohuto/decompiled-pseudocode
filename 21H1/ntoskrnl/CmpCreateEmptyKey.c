/*
 * XREFs of CmpCreateEmptyKey @ 0x14086B794
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x14086BB80 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1405F9850 (CmpFindSecurityCellCacheIndex.c)
 *     CmLockHiveSecurityExclusive @ 0x1406967E8 (CmLockHiveSecurityExclusive.c)
 *     CmUnlockHiveSecurity @ 0x140696808 (CmUnlockHiveSecurity.c)
 *     CmpCopyName @ 0x14069818C (CmpCopyName.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140698D38 (HvAllocateCell.c)
 *     CmpNameSize @ 0x1406C22BC (CmpNameSize.c)
 *     CmpAssignSecurityDescriptor @ 0x14086C8C8 (CmpAssignSecurityDescriptor.c)
 */

__int64 __fastcall CmpCreateEmptyKey(ULONG_PTR BugCheckParameter2, unsigned __int16 *a2, unsigned int a3)
{
  unsigned int v6; // edi
  unsigned int v7; // r11d
  unsigned int Cell; // r14d
  size_t v10; // r8
  _WORD *v11; // rdi
  int v12; // rax^4
  char *v13; // rsi
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  int v16; // edi
  unsigned int v17; // [rsp+30h] [rbp-20h] BYREF
  void *v18; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-8h] BYREF

  v20[1] = 0;
  v18 = 0LL;
  v17 = 0;
  v20[0] = -1;
  v19[0] = -1;
  v19[1] = 0;
  v6 = (unsigned __int16)CmpNameSize(a2) + 76;
  Cell = HvAllocateCell(BugCheckParameter2, v6, v7, (__int64)&v18, (__int64)v20);
  if ( Cell == -1 )
    return 0xFFFFFFFFLL;
  v10 = v6;
  v11 = v18;
  memset(v18, 0, v10);
  *(_DWORD *)v11 = 33581934;
  v12 = MEMORY[0xFFFFF78000000018];
  v13 = (char *)v18;
  *((_DWORD *)v18 + 1) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)v13 + 2) = v12;
  *((_DWORD *)v13 + 4) = a3;
  *(_QWORD *)(v13 + 20) = 0LL;
  *((_DWORD *)v13 + 7) = -1;
  *((_QWORD *)v13 + 4) = 0xFFFFFFFFLL;
  *((_DWORD *)v13 + 10) = -1;
  *((_DWORD *)v13 + 11) = -1;
  *((_DWORD *)v13 + 12) = -1;
  *((_WORD *)v13 + 37) = 0;
  *((_QWORD *)v13 + 7) = 0LL;
  *((_DWORD *)v13 + 16) = 0;
  *((_WORD *)v13 + 26) = 0;
  *((_DWORD *)v13 + 13) &= 0xFF00FFFF;
  v13[55] = 0;
  v14 = CmpCopyName(v13 + 76, a2);
  *((_WORD *)v13 + 36) = v14;
  if ( v14 < *a2 )
    v11[1] |= 0x20u;
  if ( a3 == -1 )
    v11[1] |= 0xCu;
  CmLockHiveSecurityExclusive(BugCheckParameter2);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v19);
  if ( v15 && CmpFindSecurityCellCacheIndex(BugCheckParameter2, *(_DWORD *)(v15 + 44), &v17) )
    v16 = CmpAssignSecurityDescriptor(
            BugCheckParameter2,
            Cell,
            (_DWORD)v13,
            (unsigned int)*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v17 + 8) + 32,
            0);
  else
    v16 = -1073741670;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
  CmUnlockHiveSecurity(BugCheckParameter2);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
  if ( v16 < 0 )
  {
    HvFreeCell(BugCheckParameter2, Cell);
    return (unsigned int)-1;
  }
  return Cell;
}
