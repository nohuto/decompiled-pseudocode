/*
 * XREFs of ndisNsiProviderCleanupNsiClientContext @ 0x1C00B58B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall ndisNsiProviderCleanupNsiClientContext(__int64 a1)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4u,
                            0x16u,
                            0xEu,
                            (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids,
                            a1);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4u,
                            0x16u,
                            0xFu,
                            (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids,
                            a1);
  }
  return result;
}
