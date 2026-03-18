/*
 * XREFs of MiDeleteFinalPageTables @ 0x140216EE8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiDeleteTopLevelPage @ 0x140217060 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x1402171FC (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x14021721C (MiUnlinkProcessFromSession.c)
 *     MiDeleteProcessShadow @ 0x14027D408 (MiDeleteProcessShadow.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x14030FE40 (MiDeleteVirtualAddresses.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiDeleteVadBitmap @ 0x140693D80 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // r15
  int i; // r14d
  unsigned __int64 v6; // rsi
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 result; // rax
  _OWORD v11[3]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+60h] [rbp-9h]
  _OWORD v13[3]; // [rsp+68h] [rbp-1h] BYREF

  v12 = 0LL;
  v2 = *(_QWORD *)(BugCheckParameter2 + 40) >> 12;
  memset(v13, 0, sizeof(v13));
  v3 = 48 * v2;
  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = qword_140C50678;
      if ( !qword_140C50678 )
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
      MiDeleteVirtualAddresses(0, v6, v6, 0, (__int64)v11);
      UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap(BugCheckParameter2);
  BugCheckParameter4 = *(_QWORD *)(v3 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 2 )
    KeBugCheckEx(0x1Au, 0x3453uLL, BugCheckParameter2, 0xAAAAAAAAAAAAAAABuLL * (v3 >> 4), BugCheckParameter4);
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess(v13, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 632), 0xBu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(*(_QWORD *)(BugCheckParameter2 + 40));
  v9 = (unsigned int)MiDeleteTopLevelPage(v8, *(_QWORD *)(BugCheckParameter2 + 40) >> 12) == 3;
  result = *((_QWORD *)&v11[0] + 1);
  if ( v9 )
    return *((_QWORD *)&v11[0] + 1) + 1LL;
  return result;
}
