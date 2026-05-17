/*
 * XREFs of _RtlInterlockedPushListSListEx@16 @ 0x4B366790
 * Callers:
 *     <none>
 * Callees:
 *     @InterlockedPushListSList@16 @ 0x4B33E8A0 (@InterlockedPushListSList@16.c)
 */

PSLIST_ENTRY __stdcall RtlInterlockedPushListSListEx(
        PSLIST_HEADER ListHead,
        PSLIST_ENTRY List,
        PSLIST_ENTRY ListEnd,
        DWORD Count)
{
  return (PSLIST_ENTRY)InterlockedPushListSList((unsigned int)ListHead, (int)List, ListEnd, Count);
}
