/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406C8CF8
 * Callers:
 *     CmpKeyEnumStackCleanup @ 0x1406C8C10 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackReset @ 0x140715C3C (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackAdvance @ 0x140715D18 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140715D4C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140715F18 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140875FFC (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1408763F4 (CmpKeyEnumStackNotifyPromotion.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpKeyEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  __int64 v2; // rax

  v2 = (unsigned int)a2;
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 344) + ((unsigned __int64)(unsigned int)(v2 - 2) << 7);
  else
    return a1 + (v2 << 7) + 88;
}
