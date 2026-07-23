/*
 * XREFs of LogFwInitialize @ 0x1409F4654
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void *LogFwInitialize()
{
  dword_140C134F0 |= 0x80u;
  qword_140CDB200 = 0LL;
  qword_140CDB218 = 0LL;
  qword_140CDB1B8 = 0LL;
  dword_140CDB1D0 = 0;
  qword_140CDB1C8 = 0LL;
  qword_140CDB220 = 0LL;
  qword_140CDB1E8 = 0LL;
  qword_140CDB1B0 = 0LL;
  qword_140CDB1E0 = 0LL;
  qword_140CDB1F8 = 0LL;
  qword_140CDB1C0 = 0LL;
  qword_140CDB248 = 0LL;
  qword_140CDB210 = 0LL;
  qword_140CDB238 = 0LL;
  qword_140CDB228 = 0LL;
  dword_140CDB208 = 0;
  dword_140CDB1F4 = 0;
  dword_140CDB1D8 = 0;
  dword_140CDB240 = 0;
  dword_140CDB1D4 = 0;
  dword_140CDB1F0 = 0;
  qword_140C11060 = 1LL;
  qword_140C11068 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140C11058 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_140C542F0, 0, sizeof(stru_140C542F0));
}
