/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x14053CC2C
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DF840 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  unsigned int v6; // ebx
  int v7; // r14d
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  bool v13; // zf
  unsigned __int8 v14; // dl
  _QWORD v16[28]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[22]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v18[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v19[68]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v16, 0, 0xD8uLL);
  memset(v17, 0, sizeof(v17));
  memset(v19, 0, 0x108uLL);
  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v18);
  }
  v8 = v16[0];
  if ( (a3 & 2) != 0 )
  {
    v8 = LODWORD(v16[0]) | 1;
    LODWORD(v16[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v16[0]) = v8 | 2;
  HIDWORD(v16[0]) = a2;
  v16[4] = 20LL;
  v9 = MiTbFlushType(BugCheckParameter1 + 1664);
  v13 = (*(_BYTE *)(BugCheckParameter1 + 1848) & 7) == 0;
  LODWORD(v16[3]) = v9;
  WORD2(v16[3]) = 4;
  v16[5] = 0LL;
  v16[6] = 0LL;
  if ( v13 && *(_QWORD *)(BugCheckParameter1 + 2288) )
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
  v14 = MiLockWorkingSetShared(BugCheckParameter1 + 1664, v10, v11, v12);
  BYTE6(v17[0]) = v14;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x20) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    v16[1] = *(_QWORD *)(BugCheckParameter1 + 1752);
    if ( v16[1] )
    {
      MiWalkPageTables((__int64)v17);
      v14 = BYTE6(v17[0]);
    }
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1664, v14);
  if ( v7 == 1 )
    KiUnstackDetachProcess((__int64)v18, 0LL);
  return v6;
}
