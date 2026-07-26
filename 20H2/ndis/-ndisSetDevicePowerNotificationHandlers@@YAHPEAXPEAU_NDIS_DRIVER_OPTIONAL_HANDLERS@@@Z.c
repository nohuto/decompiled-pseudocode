/*
 * XREFs of ?ndisSetDevicePowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C011E7B8
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C0024320 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisSetDevicePowerNotificationHandlers(_QWORD *a1, struct _NDIS_DRIVER_OPTIONAL_HANDLERS *a2)
{
  __int64 v5; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xA9u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a1);
  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  if ( a2->Header.Revision != 1 )
    return 3221225485LL;
  if ( a2->Header.Size < 0x10u )
    return 3221225485LL;
  if ( a2[1] )
    return 3221225485LL;
  v5 = *(_QWORD *)&a2[2].Header.Type;
  if ( !v5 )
    return 3221225485LL;
  a1[107] = v5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xAAu,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a1);
  return 0LL;
}
