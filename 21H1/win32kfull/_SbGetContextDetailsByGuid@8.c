/*
 * XREFs of _SbGetContextDetailsByGuid@8 @ 0x97B98
 * Callers:
 *     _SetManifestWinVer@0 @ 0x97ACA (_SetManifestWinVer@0.c)
 * Callees:
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

int __fastcall SbGetContextDetailsByGuid(void *Buf1, _DWORD *a2)
{
  const void *v3; // eax
  int v4; // esi
  const void *v5; // ecx
  int v6; // ebx
  char *v9; // [esp+Ch] [ebp-8h]
  unsigned int v10; // [esp+10h] [ebp-4h]

  v3 = Buf1;
  v4 = 0;
  if ( a2 && Buf1 )
  {
    v5 = &unk_24C06C;
    *a2 = 0;
    v6 = 0;
    v9 = (char *)&unk_24C06C;
    v10 = 0;
    while ( memcmp(v3, v5, 0x10u) )
    {
      ++v6;
      v5 = v9 + 28;
      v10 += 28;
      v9 += 28;
      v3 = Buf1;
      if ( v10 >= 0x8C )
        return v4;
    }
    v4 = 1;
    *a2 = (char *)&SbSupportedOsList + 28 * v6;
  }
  return v4;
}
