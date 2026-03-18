/*
 * XREFs of LogFwInitialize @ 0x1409F6654
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void *LogFwInitialize()
{
  dword_140C13330 |= 0x80u;
  qword_140CDAFF8 = 0LL;
  qword_140CDB058 = 0LL;
  qword_140CDB028 = 0LL;
  dword_140CDB04C = 0;
  qword_140CDB038 = 0LL;
  qword_140CDB070 = 0LL;
  qword_140CDB020 = 0LL;
  qword_140CDB030 = 0LL;
  qword_140CDB000 = 0LL;
  qword_140CDB018 = 0LL;
  qword_140CDB040 = 0LL;
  qword_140CDB080 = 0LL;
  qword_140CDB090 = 0LL;
  qword_140CDB078 = 0LL;
  qword_140CDB060 = 0LL;
  dword_140CDB010 = 0;
  dword_140CDB008 = 0;
  dword_140CDB050 = 0;
  dword_140CDB088 = 0;
  dword_140CDB048 = 0;
  dword_140CDB00C = 0;
  qword_140C11000 = 1LL;
  qword_140C10FF8 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140C11008 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_140C54130, 0, sizeof(stru_140C54130));
}
