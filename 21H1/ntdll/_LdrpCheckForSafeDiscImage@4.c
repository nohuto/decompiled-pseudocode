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
  size_t v8; // [esp-4h] [ebp-1Ch]
  size_t v9; // [esp-4h] [ebp-1Ch]
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v2 = 0;
  LODWORD(v8) = 19;
  v3 = (char *)NtCurrentPeb()->ImageBaseAddress + *(_DWORD *)(this + 84) - 44;
  if ( !strncmp(v3, "BoG_ *90.0&!!  Yy>", v8) && *((_DWORD *)v3 + 8) <= 3u )
  {
LABEL_13:
    v2 = 1;
    NtCurrentPeb()->BitField = NtCurrentPeb()->BitField | 8;
    return v2;
  }
  v4 = 1;
  v12 = 1;
  v5 = (const char *)(*(unsigned __int16 *)(this + 20) + this + 24);
  v11 = 0;
  if ( *(_WORD *)(this + 6) )
  {
    while ( 1 )
    {
      LODWORD(v9) = 9;
      if ( !strncmp(v5, "stxt371", v9) )
        break;
      if ( v4 )
      {
        LODWORD(v9) = 6;
        v4 = strncmp(v5, ".txt", v9);
      }
      v6 = v12;
      if ( v12 )
      {
        LODWORD(v9) = 7;
        v6 = strncmp(v5, ".txt2", v9);
        v12 = v6;
      }
      if ( !v4 && !v6 )
        break;
      v5 += 40;
      if ( ++v11 >= (unsigned int)*(unsigned __int16 *)(this + 6) )
        return v2;
    }
    goto LABEL_13;
  }
  return v2;
}
