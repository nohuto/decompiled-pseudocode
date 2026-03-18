/*
 * XREFs of PopNotifySessionUserPowerRequestCreated @ 0x1406FF5FC
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x1406FF504 (PopPowerRequestCreateInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402E5E00 (RtlLookupElementGenericTableAvl.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408FB480 (TtmpInsertPowerRequestToSession.c)
 *     TtmiLogSessionPowerRequestCreated @ 0x1408FF948 (TtmiLogSessionPowerRequestCreated.c)
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
