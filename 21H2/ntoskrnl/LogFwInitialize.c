/*
 * XREFs of LogFwInitialize @ 0x1409F3654
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

void *LogFwInitialize()
{
  dword_140C134F0 |= 0x80u;
  qword_140CDB178 = 0LL;
  qword_140CDB180 = 0LL;
  qword_140CDB1F0 = 0LL;
  dword_140CDB1F8 = 0;
  qword_140CDB1E0 = 0LL;
  qword_140CDB200 = 0LL;
  qword_140CDB1B8 = 0LL;
  qword_140CDB1D8 = 0LL;
  qword_140CDB1C0 = 0LL;
  qword_140CDB1D0 = 0LL;
  qword_140CDB1C8 = 0LL;
  qword_140CDB198 = 0LL;
  qword_140CDB1A0 = 0LL;
  qword_140CDB1A8 = 0LL;
  qword_140CDB188 = 0LL;
  dword_140CDB170 = 0;
  dword_140CDB1B0 = 0;
  dword_140CDB1E8 = 0;
  dword_140CDB194 = 0;
  dword_140CDB208 = 0;
  dword_140CDB1B4 = 0;
  qword_140C11080 = 1LL;
  qword_140C11078 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140C11088 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_140C542B0, 0, sizeof(stru_140C542B0));
}
