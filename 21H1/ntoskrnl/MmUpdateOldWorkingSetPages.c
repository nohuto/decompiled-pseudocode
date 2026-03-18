/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x140536ECC
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DAD70 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  _DWORD *v6; // r9
  unsigned int v7; // ebx
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // dl
  __int64 v13; // r8
  _DWORD *v14; // r9
  _QWORD v16[28]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[22]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v18[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v19[68]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v16, 0, 0xD8uLL);
  memset(v17, 0, sizeof(v17));
  memset(v19, 0, 0x108uLL);
  v7 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v18, v6);
  }
  v9 = v16[0];
  if ( (a3 & 2) != 0 )
  {
    v9 = LODWORD(v16[0]) | 1;
    LODWORD(v16[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v16[0]) = v9 | 2;
  HIDWORD(v16[0]) = a2;
  v16[4] = 20LL;
  v10 = MiTbFlushType(BugCheckParameter1 + 1664);
  v11 = (*(_BYTE *)(BugCheckParameter1 + 1848) & 7) == 0;
  LODWORD(v16[3]) = v10;
  WORD2(v16[3]) = 4;
  v16[5] = 0LL;
  v16[6] = 0LL;
  if ( v11 && *(_QWORD *)(BugCheckParameter1 + 2288) )
  {
    v19[1] = 32;
    v16[26] = v19;
  }
  v17[5] = -1LL;
  v17[21] = v16;
  LOWORD(v17[0]) = 6;
  v17[19] = MiUpdateOldPte;
  BYTE4(v17[0]) = 6;
  v17[20] = MiUpdateOldWorkingSetPagesTail;
  v17[3] = BugCheckParameter1 + 1664;
  v12 = MiLockWorkingSetShared(BugCheckParameter1 + 1664);
  BYTE6(v17[0]) = v12;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x20) != 0 )
  {
    v7 = -1073741558;
  }
  else
  {
    v16[1] = *(_QWORD *)(BugCheckParameter1 + 1752);
    if ( v16[1] )
    {
      MiWalkPageTables((__int64)v17);
      v12 = BYTE6(v17[0]);
    }
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1664, v12);
  if ( v8 == 1 )
    KiUnstackDetachProcess((__int64)v18, 0LL, v13, v14);
  return v7;
}
