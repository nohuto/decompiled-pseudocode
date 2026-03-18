/*
 * XREFs of MiDeleteFinalPageTables @ 0x1402D4FCC
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x1402AB020 (MiDeleteVirtualAddresses.c)
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MiDeleteTopLevelPage @ 0x1402D5148 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x1402D52E4 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x1402D5304 (MiUnlinkProcessFromSession.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiDeleteVadBitmap @ 0x140662AF8 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // r14
  int i; // esi
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // rcx
  bool v13; // zf
  __int64 result; // rax
  _OWORD v15[3]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v16[3]; // [rsp+60h] [rbp-58h] BYREF

  v4 = BugCheckParameter2->DirectoryTableBase >> 12;
  memset(v16, 0, sizeof(v16));
  v6 = 48 * v4;
  memset(v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2, 0LL, (__int64)v16, a4);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v9 = qword_140C4DD88;
      if ( !qword_140C4DD88 )
        continue;
    }
    else
    {
      v9 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v9 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2[1].Affinity.Bitmap[7], 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      MiDeleteVirtualAddresses(v9, v9, 0, v15);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap((ULONG_PTR)BugCheckParameter2);
  if ( (*(_QWORD *)(v6 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      (ULONG_PTR)BugCheckParameter2,
      v6 / 48,
      *(_QWORD *)(v6 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow((__int64)BugCheckParameter2, 1);
  KiUnstackDetachProcess((__int64)v16, 0LL, v10, v11);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter2->632, 0xAu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(BugCheckParameter2->DirectoryTableBase);
  v13 = (unsigned int)MiDeleteTopLevelPage(v12, BugCheckParameter2->DirectoryTableBase >> 12) == 3;
  result = *((_QWORD *)&v15[0] + 1);
  if ( v13 )
    return *((_QWORD *)&v15[0] + 1) + 1LL;
  return result;
}
