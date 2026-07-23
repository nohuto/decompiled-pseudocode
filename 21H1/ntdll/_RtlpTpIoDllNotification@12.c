/*
 * XREFs of _RtlpTpIoDllNotification@12 @ 0x4B385910
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpIoDllLoaded@4 @ 0x4B385807 (_RtlpTpIoDllLoaded@4.c)
 *     _RtlpTpIoDllUnloaded@4 @ 0x4B3859C1 (_RtlpTpIoDllUnloaded@4.c)
 */

void __stdcall RtlpTpIoDllNotification(ULONG a1, LDR_DLL_NOTIFICATION_DATA *a2, PVOID a3)
{
  int savedregs; // [esp+0h] [ebp+0h]

  if ( a1 == 1 )
    RtlpTpIoDllLoaded(a2, savedregs);
  else
    RtlpTpIoDllUnloaded(a2);
}
