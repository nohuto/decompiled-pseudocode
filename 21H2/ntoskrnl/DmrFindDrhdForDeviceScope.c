/*
 * XREFs of DmrFindDrhdForDeviceScope @ 0x1404E85BC
 * Callers:
 *     DmrEnumerateRmrrDomains @ 0x1404E89B0 (DmrEnumerateRmrrDomains.c)
 * Callees:
 *     DmrGetNextDrhdDeviceScope @ 0x1404E866C (DmrGetNextDrhdDeviceScope.c)
 *     DmrCheckPathMatch @ 0x1404E8698 (DmrCheckPathMatch.c)
 *     DmrGetNextRemappingStructure @ 0x1404E885C (DmrGetNextRemappingStructure.c)
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
