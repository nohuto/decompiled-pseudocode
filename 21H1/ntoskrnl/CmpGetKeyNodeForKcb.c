/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x140692A30
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14071F748 (CmpCommitDeleteKeyUoW.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408678C0 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140867B94 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1405F814C (CmpKeyNodeNeedsAccessBitUpdate.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406182F0 (CmpUpdateKeyNodeAccessBits.c)
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
