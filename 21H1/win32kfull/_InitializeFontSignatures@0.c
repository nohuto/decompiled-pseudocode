/*
 * XREFs of _InitializeFontSignatures@0 @ 0x29292A
 * Callers:
 *     _vInitMapper@0 @ 0x292920 (_vInitMapper@0.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

void __stdcall InitializeFontSignatures()
{
  unsigned int *v0; // eax
  int v1; // ecx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [esp+8h] [ebp-58h] BYREF
  int v3; // [esp+24h] [ebp-3Ch]
  int v4; // [esp+28h] [ebp-38h]
  int v5; // [esp+2Ch] [ebp-34h]
  int Context; // [esp+40h] [ebp-20h] BYREF
  int v7; // [esp+44h] [ebp-1Ch]
  unsigned int *v8; // [esp+48h] [ebp-18h]
  unsigned __int16 *v9; // [esp+4Ch] [ebp-14h]
  unsigned __int16 *v10; // [esp+50h] [ebp-10h]
  int v11; // [esp+54h] [ebp-Ch]
  USHORT OemCodePage[2]; // [esp+58h] [ebp-8h] BYREF
  USHORT AnsiCodePage[2]; // [esp+5Ch] [ebp-4h] BYREF

  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&DefaultFontQueryRoutine;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  QueryTable.Flags = 4;
  memset(&QueryTable.Name, 0, 20);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  Context = 0;
  v7 = 0;
  v8 = 0;
  MAPPER::SignatureTable = 0;
  MAPPER::FaceNameTable = 0;
  if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0) >= 0 )
  {
    v0 = (unsigned int *)PALLOCMEM2(v7 + 4 * Context, 1885433159, 1);
    MAPPER::SignatureTable = v0;
    if ( v0 )
    {
      v1 = Context;
      v8 = v0;
      Context = 0;
      v9 = (unsigned __int16 *)&v0[v1];
      v10 = v9;
      if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0) < 0 )
      {
        Win32FreePool((PATHOBJ *)MAPPER::SignatureTable);
        MAPPER::SignatureTable = 0;
      }
      else
      {
        MAPPER::FaceNameTable = v9;
        MAPPER::DefaultCharset = v11;
        *(_DWORD *)AnsiCodePage = 0;
        *(_DWORD *)OemCodePage = 0;
        RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
        if ( AnsiCodePage[0] == 0xFDE9 )
          MAPPER::DefaultCharset = -2;
      }
    }
  }
}
