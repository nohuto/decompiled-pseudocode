/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x140660DF4
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpAssignKeySecurity @ 0x1407D05C0 (CmpAssignKeySecurity.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086C3C0 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C6A8 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E29C (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1406DDF68 (CmpKeyNodeNeedsAccessBitUpdate.c)
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
