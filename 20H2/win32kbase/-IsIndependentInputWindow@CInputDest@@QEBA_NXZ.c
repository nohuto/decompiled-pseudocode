/*
 * XREFs of ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C00B47A8
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033C60 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0180E2C (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0192370 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C003339C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?IsMessageOnlyWindow@CInputDest@@AEBA_NXZ @ 0x1C0180FCC (-IsMessageOnlyWindow@CInputDest@@AEBA_NXZ.c)
 */

bool __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  char v2; // bl

  v2 = 0;
  if ( CInputDest::IsCompositionInput(this) )
    return CInputDest::IsMessageOnlyWindow(this);
  return v2;
}
