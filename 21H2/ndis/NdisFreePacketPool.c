/*
 * XREFs of NdisFreePacketPool @ 0x1C00C0FA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisFreePacketPoolInternal@@YAXPEAXE@Z @ 0x1C00C0E10 (-ndisFreePacketPoolInternal@@YAXPEAXE@Z.c)
 */

void __stdcall NdisFreePacketPool(NDIS_HANDLE PoolHandle)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xCu,
      (struct _GUID *)&WPP_04c15853d33533e3b941c1f11ee3988a_Traceguids,
      PoolHandle);
  ndisFreePacketPoolInternal((struct _NDIS_PKT_POOL *)PoolHandle);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xDu,
      (struct _GUID *)&WPP_04c15853d33533e3b941c1f11ee3988a_Traceguids,
      PoolHandle);
}
