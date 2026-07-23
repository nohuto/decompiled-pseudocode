/*
 * XREFs of _EtwpFindDebugId@16 @ 0x4B2F1F5F
 * Callers:
 *     _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF (_EtwpProviderArrivalCallback@8.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 */

int __thiscall EtwpFindDebugId(char *BaseOfImage, char **a2, _DWORD *a3)
{
  int v4; // esi
  _DWORD *v5; // ecx
  ULONG v6; // edx
  char *v7; // eax
  ULONG Size; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  Size = 0;
  v5 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 6u, &Size);
  if ( !v5 || Size < 0x1C )
    return 87;
  v6 = Size / 0x1C;
  if ( !(Size / 0x1C) )
    return 232;
  while ( 1 )
  {
    if ( v5[3] == 2 )
    {
      v7 = &BaseOfImage[v5[5]];
      *a2 = v7;
      if ( *(_DWORD *)v7 == 1396986706 )
        break;
    }
    v5 += 7;
    if ( ++v4 >= v6 )
      return 232;
  }
  *a3 = v5[4];
  return 0;
}
