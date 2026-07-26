/*
 * XREFs of ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002ABBC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C01046E4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003AE28 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPostProcessRestartParametersAfterProtocols(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  bool v2; // zf
  unsigned int *SupportedOidList; // rcx
  _NDIS_RESTART_ATTRIBUTES *Next; // rcx
  KIRQL v7; // dl
  _NDIS_RESTART_ATTRIBUTES *v8; // rbx
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2->Attributes.Oid == 0;
  NewIrql = 0;
  if ( !v2 )
  {
    ndisUpdateOperationalStatus(a1);
    SupportedOidList = a2->General.SupportedOidList;
    if ( SupportedOidList )
    {
      ExFreePoolWithTag(SupportedOidList, 0);
      a2->General.SupportedOidList = 0LL;
    }
    Next = a2->Attributes.Next;
    if ( a2->Attributes.Next )
    {
      do
      {
        v8 = Next->Next;
        ExFreePoolWithTag(Next, 0);
        Next = v8;
      }
      while ( v8 );
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( (a1->PnPFlags & 0x10) != 0 || (a1->Flags & 0x100) != 0 )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, NewIrql);
    }
    else
    {
      v7 = NewIrql;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v7);
      if ( IoWMIRegistrationControl(a1->DeviceObject, 4u) )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0x25u,
            (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
            a1);
      }
    }
  }
}
