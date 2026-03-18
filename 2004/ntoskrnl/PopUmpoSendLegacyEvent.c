/*
 * XREFs of PopUmpoSendLegacyEvent @ 0x1407628D8
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E036C (PopDirectedDripsSendSuspendResumeNotification.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1402769F8 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PfPowerActionNotify @ 0x14098D9C4 (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoSendLegacyEvent(__int128 *a1)
{
  bool v2; // zf
  __int128 v3; // xmm0
  _QWORD Src[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x48uLL);
  v2 = *((_BYTE *)a1 + 12) == 0;
  v3 = *a1;
  LODWORD(Src[0]) = 7;
  *(_OWORD *)&Src[1] = v3;
  if ( !v2 && *((_DWORD *)a1 + 1) == 18 )
    PfPowerActionNotify(5LL);
  return PopUmpoSendPowerMessage(Src, 0x48uLL, *((_BYTE *)a1 + 13));
}
