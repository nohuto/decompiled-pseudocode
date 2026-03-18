/*
 * XREFs of LogFwInitialize @ 0x1409F0654
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void *LogFwInitialize()
{
  dword_140C132D0 |= 0x80u;
  qword_140CDB080 = 0LL;
  qword_140CDB0C8 = 0LL;
  qword_140CDB0C0 = 0LL;
  dword_140CDB0B8 = 0;
  qword_140CDB0A0 = 0LL;
  qword_140CDB0E0 = 0LL;
  qword_140CDB088 = 0LL;
  qword_140CDB098 = 0LL;
  qword_140CDB090 = 0LL;
  qword_140CDB0B0 = 0LL;
  qword_140CDB0A8 = 0LL;
  qword_140CDB0F0 = 0LL;
  qword_140CDB100 = 0LL;
  qword_140CDB108 = 0LL;
  qword_140CDB0D0 = 0LL;
  dword_140CDB078 = 0;
  dword_140CDB070 = 0;
  dword_140CDB0BC = 0;
  dword_140CDB0F8 = 0;
  dword_140CDB0E8 = 0;
  dword_140CDB074 = 0;
  qword_140C10FD0 = 1LL;
  qword_140C10FC8 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140C10FD8 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_140C541B0, 0, sizeof(stru_140C541B0));
}
