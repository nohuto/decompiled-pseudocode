/*
 * XREFs of CcScheduleReadAhead @ 0x1404EA6F0
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadEx @ 0x1402F8E00 (CcScheduleReadAheadEx.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
}
