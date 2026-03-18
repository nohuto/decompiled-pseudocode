/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x1407D933C
 * Callers:
 *     PfTFreeTraceDump @ 0x140360674 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14035FAE8 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(PVOID P)
{
  PfFbBufferListInsertInFree(
    (_SLIST_ENTRY *)&stru_140C4EA40,
    (struct _SLIST_ENTRY *)P,
    *((_DWORD *)P + 13),
    *((_DWORD *)P + 14),
    1);
}
