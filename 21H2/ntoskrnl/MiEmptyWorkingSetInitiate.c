/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x140256548
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140373BAC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiEmptyWorkingSet @ 0x140583D44 (MiEmptyWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x14059676C (MiEmptyTargetedWorkingSet.c)
 *     MiProcessRemoveFromWorkingSet @ 0x14096CF40 (MiProcessRemoveFromWorkingSet.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiEmptyWorkingSetInitiate(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  __int64 v9; // rcx
  int v10; // eax
  char v11; // al
  __int64 v12; // rdx
  bool v13; // zf
  unsigned int v14; // ebx
  _QWORD v16[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  v8 = 0;
  LODWORD(v17[1]) = MiTbFlushType(a1);
  v16[21] = v17;
  v16[19] = MiEmptyPte;
  v16[20] = MiEmptyWorkingSetTail;
  v10 = v17[0];
  WORD2(v17[1]) = 4;
  v17[3] = 0LL;
  LODWORD(v17[2]) = 20;
  v17[4] = 0LL;
  LODWORD(v16[0]) = 6;
  v16[3] = a1;
  if ( (a2 & 1) != 0 )
  {
    v10 = LODWORD(v17[0]) | 1;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_5;
    v10 = LODWORD(v17[0]) | 2;
  }
  LODWORD(v17[0]) = v10;
LABEL_5:
  if ( (a2 & 4) != 0 )
    LODWORD(v17[0]) = v10 | 4;
  v16[4] = a3;
  v16[5] = a4;
  v11 = MiLockWorkingSetShared(v9);
  v13 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  HIBYTE(v16[0]) = v11;
  if ( v13 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v14 = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiWalkPageTables(v16) == 5 )
      v8 = -1073741558;
    v14 = v8;
  }
  LOBYTE(v12) = HIBYTE(v16[0]);
  MiUnlockWorkingSetShared(a1, v12);
  return v14;
}
