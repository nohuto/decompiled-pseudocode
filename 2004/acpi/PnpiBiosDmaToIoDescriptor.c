/*
 * XREFs of PnpiBiosDmaToIoDescriptor @ 0x1C00A3040
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C009D318 (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosDmaToIoDescriptor(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned int a4, __int16 a5)
{
  int v6; // edi
  int updated; // r8d
  _BYTE *v8; // rcx
  bool v9; // cf
  char v10; // al
  int v11; // eax
  _BYTE *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v6 = a2;
  updated = PnpiUpdateResourceList((const void **)(a3 + 8LL * a4), &v13);
  if ( updated >= 0 )
  {
    v8 = v13;
    v9 = a5 != 0;
    a5 = -a5;
    *v13 = v9 ? 8 : 0;
    *(_WORD *)(v8 + 1) = 260;
    *((_DWORD *)v8 + 2) = v6;
    *((_DWORD *)v8 + 3) = v6;
    if ( (*(_BYTE *)(a1 + 2) & 3) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 2) & 3) == 1 )
      {
        *((_WORD *)v8 + 2) |= 4u;
      }
      else if ( (*(_BYTE *)(a1 + 2) & 3) == 2 )
      {
        *((_WORD *)v8 + 2) |= 1u;
      }
      else
      {
        *((_WORD *)v8 + 2) |= 2u;
      }
    }
    v10 = *(_BYTE *)(a1 + 2);
    if ( (v10 & 4) != 0 )
    {
      *((_WORD *)v8 + 2) |= 8u;
      v10 = *(_BYTE *)(a1 + 2);
    }
    v11 = v10 & 0x60;
    switch ( v11 )
    {
      case ' ':
        *((_WORD *)v8 + 2) |= 0x10u;
        break;
      case '@':
        *((_WORD *)v8 + 2) |= 0x20u;
        break;
      case '`':
        *((_WORD *)v8 + 2) |= 0x40u;
        break;
    }
  }
  return (unsigned int)updated;
}
