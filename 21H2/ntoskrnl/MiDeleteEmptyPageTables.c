/*
 * XREFs of MiDeleteEmptyPageTables @ 0x1403F4F90
 * Callers:
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MmFreeVirtualMemory @ 0x1407049E0 (MmFreeVirtualMemory.c)
 * Callees:
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1403214D8 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403216DC (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall MiDeleteEmptyPageTables(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r14
  __int64 v8; // rdi
  __int64 **Address; // rax
  int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  char v17; // al
  char result; // al
  _OWORD v19[3]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v20[22]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v21[20]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v22[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  memset(v22, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (a3 & 1) != 0 )
  {
    v8 = 0LL;
  }
  else
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
    if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
      return UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    Address = MiLocateAddress(a1);
    v8 = (__int64)Address;
    if ( !Address
      || a2 >> 12 > (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) )
    {
      return UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    }
    MiLockVad((__int64)CurrentThread, (__int64)Address);
    if ( (*(_DWORD *)(v8 + 48) & 0x100000) == 0
      || !(unsigned int)MiVadPureReserve(v8)
      || (v10 & 0x1000000) == 0 && (v10 & 0x2000000) != 0
      || (v11 = *(unsigned int *)(v8 + 52),
          LODWORD(v11) = v11 & 0x7FFFFFFF,
          v12 = v11 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 34) << 31),
          v12 == 0x7FFFFFFFDLL)
      || (v10 & 4) != 0
      || v12 >= 0x7FFFFFFFDLL && v12 != 0x7FFFFFFFELL )
    {
LABEL_19:
      MiUnlockVad((__int64)CurrentThread, v8);
      return UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    }
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  }
  memset(v19, 0, sizeof(v19));
  memset(v21, 0, 0x98uLL);
  memset(v20, 0, sizeof(v20));
  v21[12] = v8;
  v21[2] = v19;
  LODWORD(v21[13]) = 128;
  v13 = MiTbFlushType(Process + 1664);
  WORD2(v22[0]) = 0;
  v22[2] = 0LL;
  v22[3] = 0LL;
  LODWORD(v22[0]) = v13;
  v20[2] = v22;
  v17 = BYTE4(v21[13]);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    v17 = 1;
  LODWORD(v22[1]) = 20;
  LODWORD(v20[1]) = 0;
  BYTE4(v21[13]) = v17;
  v20[4] = a1;
  v20[5] = a2;
  BYTE2(v20[0]) = BYTE2(v20[0]) & 0xE3 | 4;
  v20[21] = v21;
  LOWORD(v20[0]) = 7;
  v20[3] = Process + 1664;
  v20[19] = MiDeleteEmptyPageTable;
  v20[20] = MiDeleteEmptyPageTableTail;
  BYTE6(v20[0]) = MiLockWorkingSetShared(Process + 1664, v14, v15, v16);
  MiWalkPageTables((__int64)v20);
  result = MiUnlockWorkingSetShared(Process + 1664, BYTE6(v20[0]));
  if ( v8 )
  {
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    goto LABEL_19;
  }
  return result;
}
