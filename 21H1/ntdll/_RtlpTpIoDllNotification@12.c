/*
 * XREFs of _RtlpTpIoDllNotification@12 @ 0x4B385910
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpIoDllLoaded@4 @ 0x4B385807 (_RtlpTpIoDllLoaded@4.c)
 *     _RtlpTpIoDllUnloaded@4 @ 0x4B3859C1 (_RtlpTpIoDllUnloaded@4.c)
 */

signed __int32 __stdcall RtlpTpIoDllNotification(int a1, _DWORD *a2, int a3)
{
  int savedregs; // [esp+0h] [ebp+0h]

  if ( a1 == 1 )
    return RtlpTpIoDllLoaded(a2, savedregs);
  else
    return RtlpTpIoDllUnloaded(a2);
}
