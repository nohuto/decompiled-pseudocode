/*
 * XREFs of CcScheduleReadAhead @ 0x1404E55D0
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadEx @ 0x1402C8600 (CcScheduleReadAheadEx.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, *(__int64 *)&Length, 0LL);
}
