/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140A6F5C0
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140C1ECB4 = 100;
  byte_140C1F764 = 100;
  result = &unk_140C1F766;
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
  word_140C1ECA8 = 0;
  word_140C1F758 = 0;
  dword_140C1ECB0 = 1;
  dword_140C1F760 = 1;
  dword_140C1ECAC = 1;
  dword_140C1F75C = 1;
  word_140C1ECA4 = 24902;
  word_140C1F754 = 24902;
  byte_140C1ECA6 = 20;
  byte_140C1F756 = 20;
  return result;
}
