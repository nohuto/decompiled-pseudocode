/*
 * XREFs of NdisReadPcmciaAttributeMemory @ 0x1C00C0B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C00C0910 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisReadPcmciaAttributeMemory(NDIS_HANDLE NdisAdapterHandle, ULONG Offset, PVOID Buffer, ULONG Length)
{
  ULONG SetBusConfigSpace; // eax
  ULONG v9; // ebx
  char v11[4]; // [rsp+30h] [rbp-28h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x18u,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      NdisAdapterHandle);
  SetBusConfigSpace = ndisGetSetBusConfigSpace((__int64)NdisAdapterHandle, Offset, (__int64)Buffer, Length, 1u, 1);
  v9 = SetBusConfigSpace;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = SetBusConfigSpace;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x19u,
      (struct _GUID *)&WPP_109404c3ad973fe8418a3e268c0230ea_Traceguids,
      (char)NdisAdapterHandle,
      *(_DWORD *)v11);
  }
  return v9;
}
