/*
 * XREFs of PopNotifySessionUserPowerRequestCreated @ 0x14064E318
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x14064E220 (PopPowerRequestCreateInfo.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140202510 (RtlLookupElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A85E8 (PopAcquirePowerRequestPushLock.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408FC770 (TtmpInsertPowerRequestToSession.c)
 *     TtmiLogSessionPowerRequestCreated @ 0x140900C38 (TtmiLogSessionPowerRequestCreated.c)
 */

void __fastcall PopNotifySessionUserPowerRequestCreated(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  int v6; // esi
  PVOID v7; // rax
  PVOID v8; // rbx
  __int64 v9; // r8
  __int128 Buffer; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1;
  LOBYTE(a1) = 1;
  v6 = 0;
  PopAcquirePowerRequestPushLock(a1);
  Buffer = 0LL;
  DWORD2(Buffer) = a2;
  v7 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  v8 = v7;
  if ( v7 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)v7 + 88LL);
    *(_QWORD *)(*(_QWORD *)v7 + 96LL) = a3;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( v8 )
  {
    if ( TtmpEnabled == 1 )
    {
      LOBYTE(v9) = TtmpInsertPowerRequestToSession(v3, a2, v6, a3, 0LL, 0);
      TtmiLogSessionPowerRequestCreated(v3, a2, v9);
    }
  }
}
