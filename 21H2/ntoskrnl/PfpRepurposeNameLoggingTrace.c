/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x140676204
 * Callers:
 *     PfTFreeTraceDump @ 0x140273D04 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140273370 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(PVOID P)
{
  PfFbBufferListInsertInFree(
    (_SLIST_ENTRY *)&stru_140C4FCE0,
    (_SLIST_ENTRY *)P,
    *((_DWORD *)P + 13),
    *((_DWORD *)P + 14),
    1);
}
