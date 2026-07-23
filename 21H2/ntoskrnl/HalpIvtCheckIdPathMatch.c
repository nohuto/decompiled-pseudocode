/*
 * XREFs of HalpIvtCheckIdPathMatch @ 0x1404E7510
 * Callers:
 *     IvtCreateDevice @ 0x1404E7C70 (IvtCreateDevice.c)
 *     IvtFindDevice @ 0x1404E7DC0 (IvtFindDevice.c)
 *     IvtCheckForReservedRegion @ 0x140867160 (IvtCheckForReservedRegion.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpIvtCheckIdPathMatch(__int64 a1, char *a2)
{
  char v2; // r11
  char v4; // dl
  unsigned int v5; // r9d
  unsigned int v6; // eax
  bool v7; // cf
  unsigned int v8; // r8d

  v2 = 0;
  if ( *(_DWORD *)a1 == 1 )
  {
    v4 = *a2;
    if ( (unsigned __int8)(v4 - 1) <= 1u && *(_BYTE *)(a1 + 11) == a2[5] )
    {
      v5 = *(unsigned __int16 *)(a1 + 14);
      v6 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
      if ( v4 != 1 || v5 == v6 )
      {
        v7 = v5 < v6;
        if ( v5 < v6 )
        {
          if ( v4 == 2 )
            return v2;
          v7 = v5 < v6;
        }
        if ( !v7 )
          v5 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
        v8 = 0;
        if ( v5 )
        {
          while ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2LL * v8) == ((unsigned __int16)((unsigned __int8)a2[2 * v8 + 7] << 8) | (unsigned __int8)a2[2 * v8 + 6]) )
          {
            if ( ++v8 >= v5 )
              return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return v2;
}
