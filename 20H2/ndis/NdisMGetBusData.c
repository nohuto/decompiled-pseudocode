/*
 * XREFs of NdisMGetBusData @ 0x1C003A9C0
 * Callers:
 *     ?ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A884 (-ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

ULONG __stdcall NdisMGetBusData(
        NDIS_HANDLE NdisMiniportHandle,
        ULONG WhichSpace,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  ULONG v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, PVOID, _QWORD, ULONG); // r10
  __int64 v11; // rcx
  char v13[4]; // [rsp+30h] [rbp-28h]

  v9 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0xEu,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      NdisMiniportHandle);
  if ( (*((_DWORD *)NdisMiniportHandle + 922) & 0x40) != 0 )
    return 0;
  v10 = (__int64 (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, ULONG))*((_QWORD *)NdisMiniportHandle + 463);
  if ( v10 )
  {
    v11 = *((_QWORD *)NdisMiniportHandle + 464);
    if ( v11 )
      v9 = v10(v11, WhichSpace, Buffer, Offset, Length);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0xFu,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      (char)NdisMiniportHandle,
      *(_DWORD *)v13);
  }
  return v9;
}
