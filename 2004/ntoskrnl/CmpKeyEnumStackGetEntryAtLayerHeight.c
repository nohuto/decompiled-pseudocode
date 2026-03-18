/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406E93B8
 * Callers:
 *     CmpKeyEnumStackCleanup @ 0x1406E92D0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackReset @ 0x140717FCC (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackAdvance @ 0x1407180A8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1407180DC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1407182A8 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408772EC (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1408776E4 (CmpKeyEnumStackNotifyPromotion.c)
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
