/*
 * XREFs of MiDeleteEmptyPageTables @ 0x1403F3750
 * Callers:
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MmFreeVirtualMemory @ 0x140624BF0 (MmFreeVirtualMemory.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x14022C3E0 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x14022E378 (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14022E3A8 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14022E5AC (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402304A4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14027D170 (MiVadPureReserve.c)
 *     MiTbFlushType @ 0x1402BA458 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

_QWORD *__fastcall MiDeleteEmptyPageTables(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r14
  __int64 v8; // rdi
  __int64 **Address; // rax
  int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // eax
  char v14; // al
  _QWORD *result; // rax
  _OWORD v16[3]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[22]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v18[20]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v19[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  memset(v19, 0, 0xB8uLL);
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
  memset(v16, 0, sizeof(v16));
  memset(v18, 0, 0x98uLL);
  memset(v17, 0, sizeof(v17));
  v18[12] = v8;
  v18[2] = v16;
  LODWORD(v18[13]) = 128;
  v13 = MiTbFlushType(Process + 1664);
  WORD2(v19[0]) = 0;
  v19[2] = 0LL;
  v19[3] = 0LL;
  LODWORD(v19[0]) = v13;
  v17[2] = v19;
  v14 = BYTE4(v18[13]);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    v14 = 1;
  LODWORD(v19[1]) = 20;
  LODWORD(v17[1]) = 0;
  BYTE4(v18[13]) = v14;
  v17[4] = a1;
  v17[5] = a2;
  BYTE2(v17[0]) = BYTE2(v17[0]) & 0xE3 | 4;
  v17[21] = v18;
  LOWORD(v17[0]) = 7;
  v17[3] = Process + 1664;
  v17[19] = MiDeleteEmptyPageTable;
  v17[20] = MiDeleteEmptyPageTableTail;
  BYTE6(v17[0]) = MiLockWorkingSetShared(Process + 1664);
  MiWalkPageTables((__int64)v17);
  result = (_QWORD *)MiUnlockWorkingSetShared(Process + 1664, BYTE6(v17[0]));
  if ( v8 )
  {
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    goto LABEL_19;
  }
  return result;
}
