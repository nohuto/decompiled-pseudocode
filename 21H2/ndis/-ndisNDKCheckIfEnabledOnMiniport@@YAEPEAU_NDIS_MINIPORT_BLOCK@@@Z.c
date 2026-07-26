/*
 * XREFs of ?ndisNDKCheckIfEnabledOnMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FF090
 * Callers:
 *     ndisQueryGuidData @ 0x1C00124B0 (ndisQueryGuidData.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000896C (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisNDKCheckIfEnabledOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax

  NDKBlock = ndisGetNDKBlock(a1);
  if ( NDKBlock )
    LOBYTE(NDKBlock) = *((_BYTE *)NDKBlock + 24);
  return (unsigned __int8)NDKBlock;
}
