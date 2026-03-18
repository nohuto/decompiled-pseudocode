/*
 * XREFs of ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C005FECC
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0064FA8 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C018906C (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C019A5A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C00635EC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?IsMessageOnlyWindow@CInputDest@@AEBA_NXZ @ 0x1C018920C (-IsMessageOnlyWindow@CInputDest@@AEBA_NXZ.c)
 */

bool __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  char v2; // bl

  v2 = 0;
  if ( CInputDest::IsCompositionInput(this) )
    return CInputDest::IsMessageOnlyWindow(this);
  return v2;
}
