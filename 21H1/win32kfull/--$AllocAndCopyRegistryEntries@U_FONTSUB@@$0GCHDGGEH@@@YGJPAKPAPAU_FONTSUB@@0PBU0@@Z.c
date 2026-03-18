/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YGJPAKPAPAU_FONTSUB@@0PBU0@@Z @ 0xE2F7A
 * Callers:
 *     _QueryRegistryFontSubstituteListRoutine@24 @ 0x292BF4 (_QueryRegistryFontSubstituteListRoutine@24.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _PREALLOCMEM2@20 @ 0xEA002 (_PREALLOCMEM2@20.c)
 */

int __stdcall AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(unsigned int *a1, const void *a2)
{
  unsigned int v3; // edi
  struct _FONTSUB *v4; // eax

  if ( gcfsTable < *a1 )
    goto LABEL_2;
  v3 = gcfsTable + 32;
  if ( gpfsTable )
    v4 = (struct _FONTSUB *)PREALLOCMEM2(196 * (gcfsTable + 32), 1651729991, gpfsTable);
  else
    v4 = (struct _FONTSUB *)PALLOCMEM2(196 * (gcfsTable + 32), 1651729991, 1);
  if ( v4 )
  {
    gpfsTable = v4;
    *a1 = v3;
LABEL_2:
    qmemcpy((char *)gpfsTable + 196 * gcfsTable++, a2, 0xC4u);
    return 0;
  }
  return -1073741801;
}
