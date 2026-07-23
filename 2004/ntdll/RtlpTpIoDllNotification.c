/*
 * XREFs of RtlpTpIoDllNotification @ 0x1801131C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlpTpIoDllNotification(int a1, __int64 a2, PVOID a3)
{
  if ( a1 == 1 )
    RtlpTpIoDllLoaded(a2);
  else
    RtlpTpIoDllUnloaded(a2, a2, a3);
}
