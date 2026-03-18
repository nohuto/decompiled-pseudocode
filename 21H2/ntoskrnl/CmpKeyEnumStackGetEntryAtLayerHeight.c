/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069F130
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x14065B900 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14065B994 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackReset @ 0x14065BC50 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14065BD24 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x14065CB84 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackCleanup @ 0x14069F024 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140920D44 (CmpKeyEnumStackCreateResumeContext.c)
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
