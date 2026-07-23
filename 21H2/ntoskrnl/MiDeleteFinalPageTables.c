/*
 * XREFs of MiDeleteFinalPageTables @ 0x14027404C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiDeleteTopLevelPage @ 0x1402741C8 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140274364 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x140274384 (MiUnlinkProcessFromSession.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x1403092D0 (MiDeleteVirtualAddresses.c)
 *     MiDeleteProcessShadow @ 0x1403104B8 (MiDeleteProcessShadow.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiDeleteVadBitmap @ 0x14067C9A4 (MiDeleteVadBitmap.c)
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
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-98h]
  __int64 v11; // [rsp+28h] [rbp-90h]
  _OWORD v12[3]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v13[3]; // [rsp+60h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 40) >> 12;
  memset(v13, 0, sizeof(v13));
  v3 = 48 * v1;
  memset(v12, 0, sizeof(v12));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = qword_140C4DE88;
      if ( !qword_140C4DE88 )
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
      ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, _OWORD *, ULONG_PTR, __int64))MiDeleteVirtualAddresses)(
        v6,
        v6,
        0LL,
        v12,
        BugCheckParameter4,
        v11);
      UNLOCK_ADDRESS_SPACE(CurrentThread, BugCheckParameter2);
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
  KiUnstackDetachProcess(v13, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 632), 0xAu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(*(_QWORD *)(BugCheckParameter2 + 40));
  v8 = (unsigned int)MiDeleteTopLevelPage(v7, *(_QWORD *)(BugCheckParameter2 + 40) >> 12) == 3;
  result = *((_QWORD *)&v12[0] + 1);
  if ( v8 )
    return *((_QWORD *)&v12[0] + 1) + 1LL;
  return result;
}
