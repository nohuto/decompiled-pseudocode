/*
 * XREFs of ?ndisIfDeleteStackEntries@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00B1080
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00098F0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000C780 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F740 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C00187A4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D82C (-ndisIMDeleteIfStackEntry@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfDeleteStackEntries(struct _NDIS_IF_BLOCK *a1)
{
  PVOID *v2; // rbx
  struct _NDIS_IF_BLOCK **v3; // rcx
  struct _NDIS_IF_BLOCK *v4; // rax
  struct _NDIS_IF_BLOCK *v5; // rdx
  struct _NDIS_IF_BLOCK ***v6; // rax

  KeAcquireSpinLockAtDpcLevel(&qword_1C00E4B68);
  v2 = (PVOID *)qword_1C00E4B58;
  while ( v2 != &qword_1C00E4B58 )
  {
    v3 = (struct _NDIS_IF_BLOCK **)v2;
    v2 = (PVOID *)*v2;
    v4 = v3[3];
    if ( v4 == a1 || v3[4] == a1 )
    {
      --v4->LowerLayerIfCount;
      --v3[4]->HigherLayerIfCount;
      v5 = *v3;
      if ( *(struct _NDIS_IF_BLOCK ***)&(*v3)->ifDescr.Length != v3
        || (v6 = (struct _NDIS_IF_BLOCK ***)v3[1], *v6 != v3) )
      {
        __fastfail(3u);
      }
      *v6 = (struct _NDIS_IF_BLOCK **)v5;
      *(_QWORD *)&v5->ifDescr.Length = v6;
      ExFreePoolWithTag(v3, 0);
    }
  }
  a1->LowerLayerIfCount = 0;
  a1->HigherLayerIfCount = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_1C00E4B68);
}
