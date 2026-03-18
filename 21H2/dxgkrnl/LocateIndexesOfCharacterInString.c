/*
 * XREFs of LocateIndexesOfCharacterInString @ 0x1C0218DA0
 * Callers:
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C01FAB24 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LocateIndexesOfCharacterInString(unsigned __int16 *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // r11d
  __int64 v5; // r8
  unsigned int v6; // r10d

  v4 = 0;
  v5 = 0LL;
  v6 = -1073741275;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v5) == 46 )
      {
        *a4++ = v5;
        if ( ++v4 == 3 )
          break;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *a1 >> 1 )
        return v6;
    }
    return 0;
  }
  return v6;
}
