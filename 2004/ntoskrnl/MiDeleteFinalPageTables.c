/*
 * XREFs of MiDeleteFinalPageTables @ 0x14026B62C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14061D27C (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14024ADB4 (UNLOCK_ADDRESS_SPACE.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x140251FF0 (MiDeleteVirtualAddresses.c)
 *     MiDeleteProcessShadow @ 0x140254168 (MiDeleteProcessShadow.c)
 *     MiDeleteTopLevelPage @ 0x14026B7A8 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x14026B944 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x14026B964 (MiUnlinkProcessFromSession.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiDeleteVadBitmap @ 0x14061D3D8 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter2)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // r14
  int i; // esi
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  __int64 result; // rax
  _OWORD v10[3]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v11[3]; // [rsp+60h] [rbp-58h] BYREF

  v1 = BugCheckParameter2->DirectoryTableBase >> 12;
  memset(v11, 0, sizeof(v11));
  v3 = 48 * v1;
  memset(v10, 0, sizeof(v10));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2, 0LL, (__int64)v11);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = qword_140C4DC48;
      if ( !qword_140C4DC48 )
        continue;
    }
    else
    {
      v6 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v6 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2[1].Affinity.Bitmap[7], 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      MiDeleteVirtualAddresses(v6, v6, 0, v10);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap((ULONG_PTR)BugCheckParameter2);
  if ( (*(_QWORD *)(v3 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      (ULONG_PTR)BugCheckParameter2,
      v3 / 48,
      *(_QWORD *)(v3 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow((__int64)BugCheckParameter2, 1LL);
  KiUnstackDetachProcess((__int64)v11, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter2->632, 0xAu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(BugCheckParameter2->DirectoryTableBase);
  v8 = (unsigned int)MiDeleteTopLevelPage(v7, BugCheckParameter2->DirectoryTableBase >> 12) == 3;
  result = *((_QWORD *)&v10[0] + 1);
  if ( v8 )
    return *((_QWORD *)&v10[0] + 1) + 1LL;
  return result;
}
