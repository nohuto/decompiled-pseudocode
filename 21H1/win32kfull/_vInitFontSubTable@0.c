/*
 * XREFs of _vInitFontSubTable@0 @ 0x293130
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _PREALLOCMEM2@20 @ 0xEA002 (_PREALLOCMEM2@20.c)
 */

struct _FONTSUB *__stdcall vInitFontSubTable()
{
  struct _FONTSUB *result; // eax
  struct _FONTSUB *v1; // edi
  char *v2; // edi
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [esp+8h] [ebp-3Ch] BYREF
  int v4; // [esp+24h] [ebp-20h]
  int v5; // [esp+28h] [ebp-1Ch]
  int v6; // [esp+2Ch] [ebp-18h]
  unsigned int Context; // [esp+40h] [ebp-4h] BYREF

  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontSubstituteListRoutine;
  Context = 0;
  memset(&QueryTable.Flags, 0, 24);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  gpfsTable = 0;
  gcfsTable = 1;
  gcfsCharSetTable = 0;
  RtlQueryRegistryValues(3u, L"FontSubstitutes", &QueryTable, &Context, 0);
  if ( gpfsTable )
  {
    result = (struct _FONTSUB *)gcfsTable;
    if ( Context <= gcfsTable )
      goto LABEL_5;
    result = (struct _FONTSUB *)PREALLOCMEM2(gpfsTable, 196 * gcfsTable, 196 * gcfsTable, 1651729991, (int)gpfsTable);
    if ( !result )
      goto LABEL_5;
  }
  else
  {
    result = (struct _FONTSUB *)PALLOCMEM2(196 * gcfsTable, 1651729991, 1);
  }
  gpfsTable = result;
LABEL_5:
  v1 = gpfsTable;
  if ( gpfsTable )
  {
    qmemcpy(gpfsTable, L"Default Sans Serif", 0x24u);
    *((_WORD *)v1 + 18) = aDefaultSansSer[18];
    v2 = (char *)gpfsTable + 64;
    qmemcpy((char *)gpfsTable + 64, L"DEFAULT SANS SERIF", 0x24u);
    *((_WORD *)v2 + 18) = aDefaultSansSer_0[18];
    qmemcpy((char *)gpfsTable + 130, L"MS SANS SERIF", 0x1Cu);
    *((_BYTE *)gpfsTable + 128) = 1;
    *((_BYTE *)gpfsTable + 129) = 1;
    *((_BYTE *)gpfsTable + 194) = 1;
    result = gpfsTable;
    *((_BYTE *)gpfsTable + 195) = 1;
  }
  else
  {
    gcfsTable = 0;
  }
  return result;
}
