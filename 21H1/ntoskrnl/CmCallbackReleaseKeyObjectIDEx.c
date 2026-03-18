/*
 * XREFs of CmCallbackReleaseKeyObjectIDEx @ 0x14061ADD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall CmCallbackReleaseKeyObjectIDEx(void *a1)
{
  CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
}
