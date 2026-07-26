/*
 * XREFs of ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0008A70
 * Callers:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ndisQueryGuidData @ 0x1C00124B0 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00127B0 (ndisQueryGuidDataSize.c)
 *     ndisWmiEnableEvents @ 0x1C0029A24 (ndisWmiEnableEvents.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C7B0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ndisWmiDisableEvents @ 0x1C008D17C (ndisWmiDisableEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWmiGetGuid(struct _NDIS_GUID **a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _GUID *a3, int a4)
{
  _NDIS_GUID *pNdisGuidMap; // r10
  unsigned int v6; // r11d
  unsigned int cNdisGuidMap; // edx
  unsigned int i; // edi
  __int64 v9; // rcx
  bool v10; // zf

  *a1 = 0LL;
  pNdisGuidMap = a2->pNdisGuidMap;
  v6 = -1073741823;
  if ( pNdisGuidMap )
  {
    cNdisGuidMap = a2->cNdisGuidMap;
    for ( i = 0; i < cNdisGuidMap; ++pNdisGuidMap )
    {
      if ( a3 )
      {
        v9 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&a3->Data1;
        if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&a3->Data1 )
          v9 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)a3->Data4;
        v10 = v9 == 0;
      }
      else
      {
        if ( (pNdisGuidMap->Flags & 2) == 0 )
          goto LABEL_8;
        v10 = pNdisGuidMap->Oid == a4;
      }
      if ( v10 )
      {
        *a1 = pNdisGuidMap;
        return 0;
      }
LABEL_8:
      ++i;
    }
  }
  return v6;
}
