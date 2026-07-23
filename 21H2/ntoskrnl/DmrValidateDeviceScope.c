/*
 * XREFs of DmrValidateDeviceScope @ 0x1404E88B0
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x1404E764C (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     DmrGetNextDrhdDeviceScope @ 0x1404E866C (DmrGetNextDrhdDeviceScope.c)
 *     DmrCheckPathMatch @ 0x1404E8698 (DmrCheckPathMatch.c)
 *     DmrGetNextRemappingStructure @ 0x1404E885C (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall DmrValidateDeviceScope(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v5; // r15
  __int64 i; // rdx
  _BYTE *NextDrhdDeviceScope; // rax
  __int64 j; // rdx
  __int64 k; // rdx
  __int64 m; // rdx
  char *v11; // rax
  char *v12; // r14
  char *v13; // rbp
  unsigned __int64 NextRemappingStructure; // rax
  unsigned __int64 v15; // rdi

  v2 = 0;
  if ( *(_WORD *)a2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 4);
    if ( (v5 & 1) != 0 )
    {
      for ( i = 0LL; ; i = (__int64)NextDrhdDeviceScope )
      {
        NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, i);
        if ( !NextDrhdDeviceScope )
          break;
        if ( (unsigned __int8)(*NextDrhdDeviceScope - 1) <= 1u )
          return (unsigned int)-1073741823;
      }
    }
    for ( j = 0LL; ; j = v15 )
    {
      NextRemappingStructure = DmrGetNextRemappingStructure(a1, j);
      v15 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( !*(_WORD *)NextRemappingStructure
        && NextRemappingStructure != a2
        && *(_WORD *)(NextRemappingStructure + 6) == *(_WORD *)(a2 + 6) )
      {
        if ( (v5 & *(_BYTE *)(NextRemappingStructure + 4) & 1) != 0 )
          return (unsigned int)-1073741823;
        for ( k = 0LL; ; k = (__int64)v13 )
        {
          v13 = (char *)DmrGetNextDrhdDeviceScope(a2, k);
          if ( !v13 )
            break;
          for ( m = 0LL; ; m = (__int64)v12 )
          {
            v11 = (char *)DmrGetNextDrhdDeviceScope(v15, m);
            v12 = v11;
            if ( !v11 )
              break;
            if ( DmrCheckPathMatch(v13, v11) )
              return (unsigned int)-1073741823;
          }
        }
      }
    }
  }
  return v2;
}
