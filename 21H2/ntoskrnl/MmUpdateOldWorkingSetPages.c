/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x14053C9EC
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DF6E0 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiTbFlushType @ 0x140337208 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  _DWORD *v6; // r9
  unsigned int v7; // ebx
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  bool v14; // zf
  unsigned __int8 v15; // dl
  _QWORD v17[28]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v18[22]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v19[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v20[68]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(v17, 0, 0xD8uLL);
  memset(v18, 0, sizeof(v18));
  memset(v20, 0, 0x108uLL);
  v7 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v19, v6);
  }
  v9 = v17[0];
  if ( (a3 & 2) != 0 )
  {
    v9 = LODWORD(v17[0]) | 1;
    LODWORD(v17[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v17[0]) = v9 | 2;
  HIDWORD(v17[0]) = a2;
  v17[4] = 20LL;
  v10 = MiTbFlushType(BugCheckParameter1 + 1664);
  v14 = (*(_BYTE *)(BugCheckParameter1 + 1848) & 7) == 0;
  LODWORD(v17[3]) = v10;
  WORD2(v17[3]) = 4;
  v17[5] = 0LL;
  v17[6] = 0LL;
  if ( v14 && *(_QWORD *)(BugCheckParameter1 + 2288) )
  {
    v20[1] = 32;
    v17[26] = v20;
  }
  v18[5] = -1LL;
  v18[21] = v17;
  LOWORD(v18[0]) = 6;
  v18[19] = MiUpdateOldPte;
  BYTE4(v18[0]) = 6;
  v18[20] = MiUpdateOldWorkingSetPagesTail;
  v18[3] = BugCheckParameter1 + 1664;
  v15 = MiLockWorkingSetShared(BugCheckParameter1 + 1664, v11, v12, v13);
  BYTE6(v18[0]) = v15;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x20) != 0 )
  {
    v7 = -1073741558;
  }
  else
  {
    v17[1] = *(_QWORD *)(BugCheckParameter1 + 1752);
    if ( v17[1] )
    {
      MiWalkPageTables((__int64)v18);
      v15 = BYTE6(v18[0]);
    }
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1664, v15);
  if ( v8 == 1 )
    KiUnstackDetachProcess((__int64)v19, 0);
  return v7;
}
