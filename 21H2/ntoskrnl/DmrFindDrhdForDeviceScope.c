/*
 * XREFs of DmrFindDrhdForDeviceScope @ 0x14053802C
 * Callers:
 *     DmrEnumerateRmrrDomains @ 0x140538580 (DmrEnumerateRmrrDomains.c)
 * Callees:
 *     DmrGetNextDrhdDeviceScope @ 0x1405380DC (DmrGetNextDrhdDeviceScope.c)
 *     DmrCheckPathMatch @ 0x140538108 (DmrCheckPathMatch.c)
 *     DmrGetNextRemappingStructure @ 0x14053842C (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall DmrFindDrhdForDeviceScope(__int64 a1, __int16 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 i; // rdx
  __int64 NextDrhdDeviceScope; // rax
  __int64 v10; // rbp
  __int64 NextRemappingStructure; // rax
  __int64 v12; // rdi

  v3 = 0LL;
  v6 = a1;
  if ( *a3 == 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextRemappingStructure = DmrGetNextRemappingStructure(a1, v7);
      v12 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( !*(_WORD *)NextRemappingStructure && *(_WORD *)(NextRemappingStructure + 6) == a2 )
      {
        if ( (*(_BYTE *)(NextRemappingStructure + 4) & 1) != 0 )
          return v12 + 4;
        for ( i = 0LL; ; i = v10 )
        {
          NextDrhdDeviceScope = DmrGetNextDrhdDeviceScope(v12, i);
          v10 = NextDrhdDeviceScope;
          if ( !NextDrhdDeviceScope )
            break;
          if ( (unsigned __int8)DmrCheckPathMatch(NextDrhdDeviceScope, a3) )
            return v12 + 4;
        }
      }
      v7 = v12;
      a1 = v6;
    }
  }
  return v3;
}
