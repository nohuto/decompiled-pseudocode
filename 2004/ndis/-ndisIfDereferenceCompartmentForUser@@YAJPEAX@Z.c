/*
 * XREFs of ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C0020614
 * Callers:
 *     ndisCmDeleteStateObject @ 0x1C0008F60 (ndisCmDeleteStateObject.c)
 *     ndisCmSetThreadState @ 0x1C0009060 (ndisCmSetThreadState.c)
 *     ndisDispatchRequest @ 0x1C001D340 (ndisDispatchRequest.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C001DD50 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C001DE44 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B0E90 (NdisSetSessionCompartmentId.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00B4678 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B2C (WPP_RECORDER_SF_Lq.c)
 *     ndisIfDeleteCompartment @ 0x1C00B28C8 (ndisIfDeleteCompartment.c)
 */

__int64 __fastcall ndisIfDereferenceCompartmentForUser(_DWORD *a1)
{
  unsigned int v1; // edi
  char v3; // si
  KIRQL v4; // dl
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v3 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Du,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v5 = a1[12];
  if ( v5 <= 0 )
  {
    v1 = -1073741811;
  }
  else
  {
    v6 = v5 - 1;
    a1[12] = v6;
    if ( !v6 && (a1[10] & 2) != 0 )
      v3 = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( v3 )
    ndisIfDeleteCompartment(a1[4]);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Eu,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      v1,
      a1);
  return v1;
}
