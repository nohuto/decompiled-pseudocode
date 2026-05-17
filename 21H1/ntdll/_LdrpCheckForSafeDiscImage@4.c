/*
 * XREFs of _LdrpCheckForSafeDiscImage@4 @ 0x4B33155E
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _strncmp @ 0x4B2F9EA0 (_strncmp.c)
 */

char __thiscall LdrpCheckForSafeDiscImage(int this)
{
  char v2; // bl
  const char *v3; // edi
  int v4; // edi
  const char *v5; // esi
  int v6; // eax
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v2 = 0;
  v3 = (char *)NtCurrentPeb()->ImageBaseAddress + *(_DWORD *)(this + 84) - 44;
  if ( !strncmp(v3, "BoG_ *90.0&!!  Yy>", 0x13u) && *((_DWORD *)v3 + 8) <= 3u )
  {
LABEL_13:
    v2 = 1;
    NtCurrentPeb()->BitField = NtCurrentPeb()->BitField | 8;
    return v2;
  }
  v4 = 1;
  v10 = 1;
  v5 = (const char *)(*(unsigned __int16 *)(this + 20) + this + 24);
  v9 = 0;
  if ( *(_WORD *)(this + 6) )
  {
    while ( strncmp(v5, "stxt371", 9u) )
    {
      if ( v4 )
        v4 = strncmp(v5, ".txt", 6u);
      v6 = v10;
      if ( v10 )
      {
        v6 = strncmp(v5, ".txt2", 7u);
        v10 = v6;
      }
      if ( !v4 && !v6 )
        break;
      v5 += 40;
      if ( ++v9 >= (unsigned int)*(unsigned __int16 *)(this + 6) )
        return v2;
    }
    goto LABEL_13;
  }
  return v2;
}
