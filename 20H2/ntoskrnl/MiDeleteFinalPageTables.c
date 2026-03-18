/*
 * XREFs of MiDeleteFinalPageTables @ 0x14026314C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402304A4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     MiDeleteVirtualAddresses @ 0x1402508A0 (MiDeleteVirtualAddresses.c)
 *     MiDeleteTopLevelPage @ 0x1402632C8 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140263464 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x140263484 (MiUnlinkProcessFromSession.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiDeleteVadBitmap @ 0x1406602C0 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // r14
  int i; // esi
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  __int64 result; // rax
  _OWORD v10[3]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v11[3]; // [rsp+60h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 40) >> 12;
  memset(v11, 0, sizeof(v11));
  v3 = 48 * v1;
  memset(v10, 0, sizeof(v10));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = qword_140C4DCC8;
      if ( !qword_140C4DCC8 )
        continue;
    }
    else
    {
      v6 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 1224, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      MiDeleteVirtualAddresses(v6, v6, 0, (__int64)v10);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap(BugCheckParameter2);
  if ( (*(_QWORD *)(v3 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      BugCheckParameter2,
      v3 / 48,
      *(_QWORD *)(v3 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess(v11, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 632), 0xAu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(*(_QWORD *)(BugCheckParameter2 + 40));
  v8 = (unsigned int)MiDeleteTopLevelPage(v7, *(_QWORD *)(BugCheckParameter2 + 40) >> 12) == 3;
  result = *((_QWORD *)&v10[0] + 1);
  if ( v8 )
    return *((_QWORD *)&v10[0] + 1) + 1LL;
  return result;
}
