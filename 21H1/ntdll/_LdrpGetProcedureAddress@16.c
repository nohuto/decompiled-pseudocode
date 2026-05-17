/*
 * XREFs of _LdrpGetProcedureAddress@16 @ 0x4B2A6260
 * Callers:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _LdrpResolveForwarder@16 @ 0x4B2ED6C1 (_LdrpResolveForwarder@16.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _LdrpBuildImportRedirection@8 @ 0x4B334238 (_LdrpBuildImportRedirection@8.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     _LdrpNameToOrdinal@24 @ 0x4B2A6330 (_LdrpNameToOrdinal@24.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __fastcall LdrpGetProcedureAddress(int a1, const char *a2, int a3, unsigned int *a4)
{
  _DWORD *v6; // esi
  int v7; // ebx
  unsigned int v8; // ecx
  int v10; // [esp+10h] [ebp-8h] BYREF
  const char *v11; // [esp+14h] [ebp-4h]

  v11 = a2;
  v6 = (_DWORD *)RtlImageDirectoryEntryToData(a1, 1, 0, &v10);
  if ( !v6 )
    return -1073741702;
  if ( a2 )
  {
    if ( (ShowSnaps & 5) != 0 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrsnap.c",
        812,
        "LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        a2);
    v7 = LdrpNameToOrdinal(a1, v6[6], a1 + v6[8], a1 + v6[9]);
    if ( v7 >= 0 )
      goto LABEL_6;
    return -1073741702;
  }
  if ( (ShowSnaps & 5) != 0 )
    LdrpLogDbgPrint(
      "minkernel\\ntdll\\ldrsnap.c",
      830,
      "LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      a3);
  if ( !a3 )
    return -1073741811;
  v7 = a3 - v6[4];
LABEL_6:
  if ( (unsigned int)v7 >= v6[5] )
    return (v11 != 0) - 1073741512;
  v8 = a1 + *(_DWORD *)(v6[7] + 4 * v7 + a1);
  *a4 = v8;
  if ( v8 < (unsigned int)v6 || v8 >= (unsigned int)v6 + v10 )
    return 0;
  else
    return -1073741267;
}
