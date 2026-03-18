/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406BDD30
 * Callers:
 *     CmpKeyEnumStackCleanup @ 0x1406BDC48 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackReset @ 0x140725F8C (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackAdvance @ 0x140726068 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14072609C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140726268 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087CE68 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x14087D260 (CmpKeyEnumStackNotifyPromotion.c)
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
