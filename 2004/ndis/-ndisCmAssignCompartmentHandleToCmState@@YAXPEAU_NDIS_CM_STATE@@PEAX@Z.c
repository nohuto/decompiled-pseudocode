/*
 * XREFs of ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C001DE44
 * Callers:
 *     ndisCmSetThreadState @ 0x1C0009060 (ndisCmSetThreadState.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C01262DC (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C0020614 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C0020718 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 */

void __fastcall ndisCmAssignCompartmentHandleToCmState(struct _NDIS_CM_STATE *a1, void *a2)
{
  void *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void *)*((_QWORD *)a1 + 1);
  if ( a2 != v4 )
  {
    if ( v4 )
      ndisIfDereferenceCompartmentForUser(v4);
    *((_QWORD *)a1 + 1) = a2;
    if ( a2 )
    {
      v5 = a2;
      ndisIfReferenceCompartmentForUser(0LL, 0, &v5);
    }
  }
}
