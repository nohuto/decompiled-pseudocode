/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140699C08
 * Callers:
 *     CmpKeyEnumStackCleanup @ 0x140699B20 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackReset @ 0x140729A4C (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackAdvance @ 0x140729B28 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140729BBC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140729D88 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087A7E4 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x14087ABDC (CmpKeyEnumStackNotifyPromotion.c)
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
