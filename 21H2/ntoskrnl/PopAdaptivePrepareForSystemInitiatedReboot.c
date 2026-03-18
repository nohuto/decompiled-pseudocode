/*
 * XREFs of PopAdaptivePrepareForSystemInitiatedReboot @ 0x14099C9CC
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x1408125C4 (BcdOpenStore.c)
 *     BcdOpenObject @ 0x140812B74 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140812D00 (BcdCloseObject.c)
 *     PopDiagTraceAdaptiveBootOverridePrepared @ 0x140990E40 (PopDiagTraceAdaptiveBootOverridePrepared.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099C7F4 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099C8F8 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 */

__int64 PopAdaptivePrepareForSystemInitiatedReboot()
{
  __int64 v0; // rdi
  int SystemInitiatedRebootTargetBootEntry; // ebx
  unsigned __int64 SystemInitiatedRebootTargetState; // rax
  __int64 v3; // r8
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-20h] BYREF
  GUID v8; // [rsp+48h] [rbp-18h] BYREF

  v5 = -1LL;
  v7 = 0LL;
  v0 = -1LL;
  v6 = -1LL;
  v8 = 0LL;
  SystemInitiatedRebootTargetBootEntry = BcdOpenStore(0LL, 2u, &v5);
  if ( SystemInitiatedRebootTargetBootEntry >= 0 )
  {
    SystemInitiatedRebootTargetBootEntry = PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(v5, &v8);
    if ( SystemInitiatedRebootTargetBootEntry >= 0 )
    {
      SystemInitiatedRebootTargetBootEntry = BcdOpenObject(v5, &v8.Data1, &v6);
      if ( SystemInitiatedRebootTargetBootEntry < 0 )
      {
        v0 = v6;
      }
      else
      {
        SystemInitiatedRebootTargetState = PopAdaptiveGetSystemInitiatedRebootTargetState();
        v0 = v6;
        v7 = SystemInitiatedRebootTargetState;
        SystemInitiatedRebootTargetBootEntry = BcdSetElementDataWithFlags((void *)v6, 0x2500015Au, v3, (__int64)&v7, 8u);
      }
    }
  }
  PopDiagTraceAdaptiveBootOverridePrepared(v7 & 7, (v7 & 8) != 0, SystemInitiatedRebootTargetBootEntry);
  if ( v0 != -1 )
    BcdCloseObject(v0);
  if ( v5 != -1 )
    BcdCloseStore(v5);
  return (unsigned int)SystemInitiatedRebootTargetBootEntry;
}
