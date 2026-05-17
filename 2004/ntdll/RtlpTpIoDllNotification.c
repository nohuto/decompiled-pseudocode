/*
 * XREFs of RtlpTpIoDllNotification @ 0x1801131C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpTpIoDllNotification(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  if ( a1 == 1 )
    return RtlpTpIoDllLoaded(a2, a2, a3, a4);
  else
    return RtlpTpIoDllUnloaded(a2);
}
