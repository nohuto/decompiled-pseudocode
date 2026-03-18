/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140A75AC4
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140C1EDD4 = 100;
  byte_140C1F884 = 100;
  result = &unk_140C1F886;
  do
  {
    *(result - 2736) = 100;
    *result = 100;
    *(result - 2757) = 0;
    *(result - 21) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_140C1EDC8 = 0;
  word_140C1F878 = 0;
  dword_140C1EDD0 = 1;
  dword_140C1F880 = 1;
  dword_140C1EDCC = 1;
  dword_140C1F87C = 1;
  word_140C1EDC4 = 24902;
  word_140C1F874 = 24902;
  byte_140C1EDC6 = 20;
  byte_140C1F876 = 20;
  return result;
}
