/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x1407028D4
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14072F5F8 (CmpCommitDeleteKeyUoW.c)
 *     CmpAssignKeySecurity @ 0x1407CC190 (CmpAssignKeySecurity.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086E630 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086E904 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140670160 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x140672198 (CmpKeyNodeNeedsAccessBitUpdate.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // rcx
  __int64 v8; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 32) + 8LL))(
         *(_QWORD *)(a1 + 32),
         *(unsigned int *)(a1 + 40),
         a2);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = v6;
  if ( a3 )
  {
    CmpUpdateKeyNodeAccessBits(v7, v6, *(_DWORD *)(a1 + 40));
  }
  else if ( CmpKeyNodeNeedsAccessBitUpdate(v7, v6) )
  {
    (*(void (__fastcall **)(__int64, __int64))(v10 + 16))(v10, a2);
    ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 32) + 8LL))(
           *(_QWORD *)(a1 + 32),
           *(unsigned int *)(a1 + 40),
           a2);
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(a1 + 32), v8, *(_DWORD *)(a1 + 40));
    v11 = *(_QWORD *)(a1 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v11 + 72));
    KeAbPostRelease(v11 + 72);
  }
  return v8;
}
