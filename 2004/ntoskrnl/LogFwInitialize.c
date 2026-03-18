/*
 * XREFs of LogFwInitialize @ 0x1409F0654
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void *LogFwInitialize()
{
  dword_140C13310 |= 0x80u;
  qword_140CDAF70 = 0LL;
  qword_140CDAFF8 = 0LL;
  qword_140CDAFD8 = 0LL;
  dword_140CDAFB0 = 0;
  qword_140CDAF98 = 0LL;
  qword_140CDAFB8 = 0LL;
  qword_140CDAFA8 = 0LL;
  qword_140CDAFD0 = 0LL;
  qword_140CDAFA0 = 0LL;
  qword_140CDAF88 = 0LL;
  qword_140CDAF90 = 0LL;
  qword_140CDB008 = 0LL;
  qword_140CDAFF0 = 0LL;
  qword_140CDAFE8 = 0LL;
  qword_140CDAFC0 = 0LL;
  dword_140CDAF78 = 0;
  dword_140CDAF80 = 0;
  dword_140CDAFE0 = 0;
  dword_140CDB000 = 0;
  dword_140CDAFB4 = 0;
  dword_140CDAF7C = 0;
  qword_140C10FE0 = 1LL;
  qword_140C10FD8 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140C10FE8 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_140C540B0, 0, sizeof(stru_140C540B0));
}
