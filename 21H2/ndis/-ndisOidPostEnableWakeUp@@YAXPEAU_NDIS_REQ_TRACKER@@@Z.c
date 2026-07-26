/*
 * XREFs of ?ndisOidPostEnableWakeUp@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00912C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0095D0C (-ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisOidPostEnableWakeUp(struct _NDIS_OID_REQUEST **a1)
{
  struct _NDIS_OID_REQUEST *v1; // rax

  v1 = *a1;
  if ( !*((_DWORD *)a1 + 10)
    && a1[4]->RequestType == NdisRequestSetInformation
    && !a1[3]
    && v1
    && (LOBYTE(v1->DATA.QUERY_INFORMATION.Oid) > 6u
     || LOBYTE(v1->DATA.QUERY_INFORMATION.Oid) == 6 && BYTE1(v1->DATA.QUERY_INFORMATION.Oid) >= 0x14u) )
  {
    ndisXlatePMParametersToWakeUpEnableOid(a1[4]);
  }
}
