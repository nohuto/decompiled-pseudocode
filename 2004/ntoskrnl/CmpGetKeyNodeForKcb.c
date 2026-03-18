/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x140644540
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x140721608 (CmpCommitDeleteKeyUoW.c)
 *     CmpAssignKeySecurity @ 0x1407BD900 (CmpAssignKeySecurity.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140868C10 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140868EE4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405E2CC4 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1406701EC (CmpKeyNodeNeedsAccessBitUpdate.c)
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
  else if ( (unsigned __int8)CmpKeyNodeNeedsAccessBitUpdate(v7, v6) )
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
