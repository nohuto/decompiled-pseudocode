/*
 * XREFs of NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1C0121590
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C005D5F0 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A840C (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

void __fastcall NdisWdfAsyncPowerReferenceCompleteNotification(struct _NDIS_MINIPORT_BLOCK *a1, int a2, char a3)
{
  if ( a3 )
    ndisWdfAoAcDisengageComplete(a1, a2);
  else
    ndisWdfSelectiveSuspendResumeOperations(a1, (unsigned int)a2 >> 31, a2 < 0);
}
