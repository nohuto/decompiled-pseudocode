/*
 * XREFs of ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C00F9DB0
 * Callers:
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C00F8DC0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1C00F9990 (ndisNsiGetInterfaceRodInformation.c)
 * Callees:
 *     <none>
 */

struct _NDIS_IF_BLOCK *__fastcall ndisGetMiniportIfBlock(struct _NDIS_IF_BLOCK *a1)
{
  if ( a1->IsNdisFilter )
    return *(struct _NDIS_IF_BLOCK **)(*(_QWORD *)&a1->Miniport->Reserved4.Length + 4040LL);
  else
    return a1;
}
