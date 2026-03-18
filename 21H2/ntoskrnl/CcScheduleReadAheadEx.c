/*
 * XREFs of CcScheduleReadAheadEx @ 0x14029CC10
 * Callers:
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14029CC2C (CcScheduleReadAheadNuma.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(void *a1)
{
  return CcScheduleReadAheadNuma(a1, 0LL);
}
