/*
 * XREFs of NdisReadPciSlotInformation @ 0x1C00C0400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C00C02E0 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisReadPciSlotInformation(
        NDIS_HANDLE NdisAdapterHandle,
        ULONG SlotNumber,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  ULONG SetBusConfigSpace; // edi

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x14u,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((__int64)NdisAdapterHandle, Offset, (__int64)Buffer, Length, 0, 1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x15u,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      NdisAdapterHandle);
  return SetBusConfigSpace;
}
