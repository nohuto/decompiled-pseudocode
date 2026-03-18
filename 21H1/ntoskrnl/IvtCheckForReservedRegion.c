/*
 * XREFs of IvtCheckForReservedRegion @ 0x1408626B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIvtCheckIdPathMatch @ 0x1404E1C40 (HalpIvtCheckIdPathMatch.c)
 *     DmrGetNextDeviceScope @ 0x1404E2F04 (DmrGetNextDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x1404E2F4C (DmrGetNextRemappingStructure.c)
 */

char __fastcall IvtCheckForReservedRegion(_DWORD *a1)
{
  __int64 i; // rdx
  unsigned __int64 v3; // r14
  unsigned __int64 j; // r8
  char *NextDeviceScope; // rax
  char *v6; // rbp
  _WORD *NextRemappingStructure; // rax
  _WORD *v8; // rbx

  if ( *a1 == 1 && qword_140CF5190 )
  {
    for ( i = 0LL; ; i = (__int64)v8 )
    {
      NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(qword_140CF5190, i);
      v8 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( *NextRemappingStructure == 1 )
      {
        v3 = (unsigned __int64)NextRemappingStructure + (unsigned __int16)NextRemappingStructure[1];
        for ( j = 0LL; ; j = (unsigned __int64)v6 )
        {
          NextDeviceScope = (char *)DmrGetNextDeviceScope((unsigned __int64)(v8 + 12), v3, j);
          v6 = NextDeviceScope;
          if ( !NextDeviceScope )
            break;
          if ( HalpIvtCheckIdPathMatch((__int64)a1, NextDeviceScope) )
            return 1;
        }
      }
    }
  }
  return 0;
}
