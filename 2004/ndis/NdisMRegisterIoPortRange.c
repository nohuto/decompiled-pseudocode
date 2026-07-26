/*
 * XREFs of NdisMRegisterIoPortRange @ 0x1C0061720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C003BD24 (-ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL.c)
 */

NDIS_STATUS __stdcall NdisMRegisterIoPortRange(
        PVOID *PortOffset,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts)
{
  NDIS_STATUS v4; // ebx
  __int64 v5; // rbp
  union _LARGE_INTEGER v8; // r14
  void *v9; // rax
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v11; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER v12; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0;
  v5 = NumberOfPorts;
  v12.QuadPart = 0LL;
  v11 = 0LL;
  v8.QuadPart = InitialPort;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x14u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      MiniportAdapterHandle);
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x20) != 0 )
    goto LABEL_4;
  if ( (unsigned int)ndisTranslateResources((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 1, v8, &v12, &v11) )
  {
    v4 = -1073741823;
  }
  else if ( v11->Type == 3 )
  {
    v9 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                   (union _LARGE_INTEGER)v12.QuadPart,
                   v5,
                   516LL);
    *PortOffset = v9;
    if ( !v9 )
LABEL_4:
      v4 = -1073741670;
  }
  else
  {
    *PortOffset = (PVOID)v12.LowPart;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x15u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)MiniportAdapterHandle,
      v4);
  return v4;
}
