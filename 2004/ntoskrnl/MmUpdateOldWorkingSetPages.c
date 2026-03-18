/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x14053751C
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DC0E0 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  unsigned int v6; // ebx
  int v7; // r14d
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  unsigned __int8 v11; // dl
  _QWORD v13[28]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[22]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v15[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v16[68]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v13, 0, 0xD8uLL);
  memset(v14, 0, sizeof(v14));
  memset(v16, 0, 0x108uLL);
  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v15);
  }
  v8 = v13[0];
  if ( (a3 & 2) != 0 )
  {
    v8 = LODWORD(v13[0]) | 1;
    LODWORD(v13[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v13[0]) = v8 | 2;
  HIDWORD(v13[0]) = a2;
  v13[4] = 20LL;
  v9 = MiTbFlushType(BugCheckParameter1 + 1664);
  v10 = (*(_BYTE *)(BugCheckParameter1 + 1848) & 7) == 0;
  LODWORD(v13[3]) = v9;
  WORD2(v13[3]) = 4;
  v13[5] = 0LL;
  v13[6] = 0LL;
  if ( v10 && *(_QWORD *)(BugCheckParameter1 + 2288) )
  {
    v16[1] = 32;
    v13[26] = v16;
  }
  v14[5] = -1LL;
  v14[21] = v13;
  LOWORD(v14[0]) = 6;
  v14[19] = MiUpdateOldPte;
  BYTE4(v14[0]) = 6;
  v14[20] = MiUpdateOldWorkingSetPagesTail;
  v14[3] = BugCheckParameter1 + 1664;
  v11 = MiLockWorkingSetShared(BugCheckParameter1 + 1664);
  BYTE6(v14[0]) = v11;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x20) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    v13[1] = *(_QWORD *)(BugCheckParameter1 + 1752);
    if ( v13[1] )
    {
      MiWalkPageTables((__int16 *)v14);
      v11 = BYTE6(v14[0]);
    }
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1664, v11);
  if ( v7 == 1 )
    KiUnstackDetachProcess((__int64)v15, 0LL);
  return v6;
}
