/*
 * XREFs of PpmInitHeteroPolicy @ 0x140A6E9CC
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PpmInitHeteroPolicy()
{
  char *v0; // rdx
  unsigned int v1; // r8d
  char v2; // cl
  char v3; // cl
  char v4; // cl
  __int64 result; // rax

  PpmHeteroMinRelativePerformance = 0x10000;
  v0 = (char *)&unk_140C1FD99;
  v1 = 0;
  do
  {
    v2 = v1 != 0 ? 80 : 90;
    *(v0 - 2736) = v2;
    *v0 = v2;
    v3 = -(v1++ != 0);
    v4 = (v3 & 0x14) + 30;
    *(v0 - 4016) = v4;
    *(v0 - 1280) = v4;
    ++v0;
  }
  while ( v1 < 0x40 );
  result = 5LL;
  byte_140C1EDE7 = 3;
  dword_140C1F7F0 = 5;
  dword_140C202A0 = 5;
  dword_140C1F7EC = 5;
  dword_140C2029C = 5;
  byte_140C1F897 = 3;
  word_140C1F7E9 = 12850;
  word_140C20299 = 12850;
  return result;
}
