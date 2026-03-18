/*
 * XREFs of ?CleanupChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C02B0020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::CleanupChannelObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v2 + 24) = 236LL;
  return WdLogEvent5_WdAssertion(v2);
}
