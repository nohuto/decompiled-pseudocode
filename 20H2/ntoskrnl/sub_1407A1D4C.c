/*
 * XREFs of sub_1407A1D4C @ 0x1407A1D4C
 * Callers:
 *     ClipInitHandles @ 0x1403B6B40 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x1407A1FD0 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_1407A1D4C()
{
  qword_140C53C28 = 10LL;
  qword_140C53C18 = 0LL;
  qword_140C53C44 = 0LL;
  dword_140C53C4C = 0;
  qword_140C53C20 = 0LL;
  qword_140C53C38 = 0LL;
  dword_140C53C40 = 54;
  qword_140C53C10 = 8LL;
  qword_140C53C30 = (__int64)sub_1406C9390;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140C53C44 + 4), L"SHA256", 0LL, 0);
}
