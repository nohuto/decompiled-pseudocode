/*
 * XREFs of ?DXGADAPTER_ValidateMockDriverState@@YAXPEAVDXGADAPTER@@W4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z @ 0x1C00415E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x1C004D638 (-ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z.c)
 */

void __fastcall DXGADAPTER_ValidateMockDriverState(__int64 a1, int a2, struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a3)
{
  MOCKDRIVERSTATE *v3; // rcx

  v3 = *(MOCKDRIVERSTATE **)(a1 + 4488);
  if ( *((_BYTE *)v3 + 2728) )
  {
    if ( !a2 )
      MOCKDRIVERSTATE::ValidatePlaneHelper(v3, a3);
  }
}
