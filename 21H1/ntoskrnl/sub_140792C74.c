/*
 * XREFs of sub_140792C74 @ 0x140792C74
 * Callers:
 *     ClipInitHandles @ 0x1403B3380 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x140792EF0 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_140792C74()
{
  qword_140C53CA8 = 10LL;
  qword_140C53C98 = 0LL;
  qword_140C53CC4 = 0LL;
  dword_140C53CCC = 0;
  qword_140C53CA0 = 0LL;
  qword_140C53CB8 = 0LL;
  dword_140C53CC0 = 54;
  qword_140C53C90 = 8LL;
  qword_140C53CB0 = (__int64)sub_1406D3730;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140C53CC4 + 4), L"SHA256", 0LL, 0);
}
