/*
 * XREFs of PopPepProcessEvent @ 0x1402D4C54
 * Callers:
 *     PopFxProcessWork @ 0x140246294 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x140246E60 (PopPluginComponentActive.c)
 *     PopPluginDevicePower @ 0x140246F08 (PopPluginDevicePower.c)
 *     PopPepNotifyIdleState @ 0x1403A4120 (PopPepNotifyIdleState.c)
 *     PopPepCompleteComponentIdleState @ 0x140572784 (PopPepCompleteComponentIdleState.c)
 *     PopPepUnregisterDevice @ 0x1407AF88C (PopPepUnregisterDevice.c)
 * Callees:
 *     PopPepLockActivityLink @ 0x1402D4288 (PopPepLockActivityLink.c)
 *     PopPepCountReadyActivities @ 0x1402D4DAC (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1402D4DF8 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1402D4E6C (PopPepRequestWork.c)
 *     PopPepComponentGetWork @ 0x1402D4E98 (PopPepComponentGetWork.c)
 *     PopPepPromoteActivities @ 0x1402D4FF8 (PopPepPromoteActivities.c)
 *     PopPepCompleteActivity @ 0x1402D59D4 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x1402D5AB0 (PopPepTriggerActivity.c)
 *     PopPepTryPowerDownDevice @ 0x14033F734 (PopPepTryPowerDownDevice.c)
 */

char __fastcall PopPepProcessEvent(
        __int64 a1,
        volatile LONG *a2,
        signed int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rsi
  char v10; // r12
  unsigned int v11; // ebp
  unsigned int ready; // r15d
  char Work; // r14
  unsigned int v14; // eax
  bool v15; // si
  __int64 v16; // r9
  __int64 v17; // r8
  KIRQL v19; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  v19 = 0;
  v10 = PopPepLockActivityLink(a1, a2, a3, a4, &v19);
  if ( (_DWORD)v6 == 6 || (v11 = dword_14000174C[34 * v6], (int)v11 < 2) )
    v11 = 2;
  ready = PopPepCountReadyActivities(a1, a2, v11);
  if ( (_DWORD)v6 != 6 )
    PopPepCompleteActivity(a1, a2, (unsigned int)v6);
  if ( a4 != 6 )
    PopPepTriggerActivity(a1, a2, a4, 0LL);
  PopPepPromoteActivities(a1, a2, v11);
  Work = PopPepComponentGetWork(a1, a2, a6);
  v14 = PopPepCountReadyActivities(a1, a2, v11);
  v15 = 0;
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 && !v14 && !Work && !*(_DWORD *)(a1 + 140) )
    v15 = *(_BYTE *)(a1 + 136) != 0;
  PopPepRequestWork(ready, v14);
  LOBYTE(v16) = v19;
  LOBYTE(v17) = v10;
  PopPepReleaseActivityLink(a1, a2, v17, v16);
  if ( v15 )
    return PopPepTryPowerDownDevice(a1, a6);
  return Work;
}
