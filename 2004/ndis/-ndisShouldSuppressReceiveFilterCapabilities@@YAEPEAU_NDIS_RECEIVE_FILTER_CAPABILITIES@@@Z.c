/*
 * XREFs of ?ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1C001EE34
 * Callers:
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C001EBB0 (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 * Callees:
 *     WPP_RECORDER_SF_qdDd @ 0x1C001EEA0 (WPP_RECORDER_SF_qdDd.c)
 */

bool __fastcall ndisShouldSuppressReceiveFilterCapabilities(
        struct _NDIS_RECEIVE_FILTER_CAPABILITIES *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  bool v4; // bl

  v4 = 0;
  if ( (a1->EnabledQueueTypes & 1) != 0 )
    v4 = (a1->SupportedQueueProperties & 8) == 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdDd(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Header.Revision, (_DWORD)a1, a4);
  return v4;
}
