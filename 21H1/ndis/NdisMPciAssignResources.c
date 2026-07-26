/*
 * XREFs of NdisMPciAssignResources @ 0x1C0060DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

NDIS_STATUS __stdcall NdisMPciAssignResources(
        NDIS_HANDLE MiniportHandle,
        ULONG SlotNumber,
        PNDIS_RESOURCE_LIST *AssignedResources)
{
  __int64 v5; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x33u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      MiniportHandle);
  if ( *((_DWORD *)MiniportHandle + 930) == 5 && (v5 = *((_QWORD *)MiniportHandle + 118)) != 0 )
  {
    *AssignedResources = (PNDIS_RESOURCE_LIST)(v5 + 12);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x35u,
        (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
        MiniportHandle);
    return 0;
  }
  else
  {
    *AssignedResources = 0LL;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x34u,
        (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
        MiniportHandle);
    return -1073741823;
  }
}
