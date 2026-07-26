/*
 * XREFs of NdisCmDispatchIncomingCall @ 0x1C00B6F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B58D0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisClIncomingCallComplete @ 0x1C00B6A90 (NdisClIncomingCallComplete.c)
 *     ?ndisDereferenceSap@@YAXPEAU_NDIS_CO_SAP_BLOCK@@@Z @ 0x1C00B7570 (-ndisDereferenceSap@@YAXPEAU_NDIS_CO_SAP_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisCmDispatchIncomingCall(
        NDIS_HANDLE NdisSapHandle,
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters)
{
  __int64 v3; // rbx
  char v7; // si
  KIRQL v8; // al
  NDIS_STATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  NDIS_STATUS v13; // eax

  v3 = *((_QWORD *)NdisSapHandle + 2);
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisSapHandle + 5);
  if ( *((int *)NdisSapHandle + 8) >= 0 )
  {
    v7 = 1;
    ++*((_DWORD *)NdisSapHandle + 9);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)NdisSapHandle + 5, v8);
  if ( !v7 )
    return -1073741823;
  if ( ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)v3) )
  {
    v11 = *((_QWORD *)NdisVcHandle + 3);
    v12 = *((_QWORD *)NdisSapHandle + 1);
    if ( *(_DWORD *)(v3 + 396) >= 6u )
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, PCO_CALL_PARAMETERS))(v3 + 320))(v12, v11, CallParameters);
    else
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, PCO_CALL_PARAMETERS))(v3 + 168))(v12, v11, CallParameters);
    v10 = v13;
    if ( v13 != 259 )
    {
      NdisClIncomingCallComplete(v13, NdisVcHandle, CallParameters);
      v10 = 259;
    }
  }
  else
  {
    v10 = -1073741823;
  }
  ndisDereferenceSap(NdisSapHandle);
  return v10;
}
