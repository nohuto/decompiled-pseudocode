/*
 * XREFs of sub_14078BA9C @ 0x14078BA9C
 * Callers:
 *     ClipInitHandles @ 0x1403B5A80 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x14078BD20 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_14078BA9C()
{
  qword_140C53BA8 = 10LL;
  qword_140C53B98 = 0LL;
  qword_140C53BC4 = 0LL;
  dword_140C53BCC = 0;
  qword_140C53BA0 = 0LL;
  qword_140C53BB8 = 0LL;
  dword_140C53BC0 = 54;
  qword_140C53B90 = 8LL;
  qword_140C53BB0 = (__int64)sub_1406F6320;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140C53BC4 + 4), L"SHA256", 0LL, 0);
}
