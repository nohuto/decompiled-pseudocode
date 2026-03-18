/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x140311470
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140311308 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     MiEmptyWorkingSet @ 0x14052AFFC (MiEmptyWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x140535D58 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiEmptyWorkingSetInitiate(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  __int64 v9; // rcx
  int v10; // eax
  char v11; // al
  bool v12; // zf
  unsigned int v13; // ebx
  _QWORD v15[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v8 = 0;
  LODWORD(v16[1]) = MiTbFlushType(a1);
  v15[21] = v16;
  LOWORD(v15[0]) = 6;
  v15[19] = MiEmptyPte;
  v15[20] = MiEmptyWorkingSetTail;
  v10 = v16[0];
  WORD2(v16[1]) = 4;
  v16[3] = 0LL;
  LODWORD(v16[2]) = 20;
  v16[4] = 0LL;
  v15[3] = a1;
  if ( (a2 & 1) != 0 )
  {
    v10 = LODWORD(v16[0]) | 1;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_5;
    v10 = LODWORD(v16[0]) | 2;
  }
  LODWORD(v16[0]) = v10;
LABEL_5:
  if ( (a2 & 4) != 0 )
    LODWORD(v16[0]) = v10 | 4;
  v15[4] = a3;
  v15[5] = a4;
  v11 = MiLockWorkingSetShared(v9);
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  BYTE6(v15[0]) = v11;
  if ( v12 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v13 = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiWalkPageTables((__int16 *)v15) == 4 )
      v8 = -1073741558;
    v13 = v8;
  }
  MiUnlockWorkingSetShared(a1, BYTE6(v15[0]));
  return v13;
}
