/*
 * XREFs of MiDeleteFinalPageTables @ 0x140296F6C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140682D54 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiDeleteTopLevelPage @ 0x1402970E8 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140297284 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x1402972A4 (MiUnlinkProcessFromSession.c)
 *     MiDeleteVirtualAddresses @ 0x1402FE580 (MiDeleteVirtualAddresses.c)
 *     MiDeleteProcessShadow @ 0x140305768 (MiDeleteProcessShadow.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140314860 (UNLOCK_ADDRESS_SPACE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiDeleteVadBitmap @ 0x140682EB0 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // r14
  int i; // esi
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  bool v11; // zf
  __int64 result; // rax
  _OWORD v13[3]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v14[3]; // [rsp+60h] [rbp-58h] BYREF

  v4 = BugCheckParameter2->DirectoryTableBase >> 12;
  memset(v14, 0, sizeof(v14));
  v6 = 48 * v4;
  memset(v13, 0, sizeof(v13));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2, 0LL, (__int64)v14, a4);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v9 = qword_140C4DE48;
      if ( !qword_140C4DE48 )
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
      MiDeleteVirtualAddresses(v9, v9, 0LL, v13);
      UNLOCK_ADDRESS_SPACE(CurrentThread, BugCheckParameter2);
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
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess((__int64)v14, 0);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter2->632, 0xAu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(BugCheckParameter2->DirectoryTableBase);
  v11 = (unsigned int)MiDeleteTopLevelPage(v10, BugCheckParameter2->DirectoryTableBase >> 12) == 3;
  result = *((_QWORD *)&v13[0] + 1);
  if ( v11 )
    return *((_QWORD *)&v13[0] + 1) + 1LL;
  return result;
}
