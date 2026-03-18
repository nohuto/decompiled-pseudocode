/*
 * XREFs of ?RemoveSasKey@@YG_NII@Z @ 0xD484C
 * Callers:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YG_NPAPAUtagHOTKEY@@@Z @ 0xC8F5A (-HKRemoveHotkeyOrMakePlaceholder@@YG_NPAPAUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RemoveSasKey(int a1, struct tagSASKEY *a2)
{
  unsigned int v2; // eax
  bool result; // al

  v2 = 0;
  while ( dword_273B00[v2] != a1 || *(struct tagSASKEY **)((char *)&gSasKeyList + v2 * 4) != a2 )
  {
    v2 += 2;
    if ( v2 >= 4 )
      return 0;
  }
  dword_273B08 = 0;
  result = 1;
  dword_273B04 = 0;
  return result;
}
