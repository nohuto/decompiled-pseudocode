/*
 * XREFs of ?CloseChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C02B45A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::CloseChannelObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v2 + 24) = 248LL;
  WdLogEvent5_WdAssertion(v2);
  return 0;
}
