/*
 * XREFs of CcScheduleReadAhead @ 0x1404E8B60
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadEx @ 0x140248720 (CcScheduleReadAheadEx.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
}
