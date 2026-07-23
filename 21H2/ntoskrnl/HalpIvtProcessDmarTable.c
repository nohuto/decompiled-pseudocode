/*
 * XREFs of HalpIvtProcessDmarTable @ 0x1404E75A0
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1403AA248 (HalpIommuRegisterBuiltinPlugins.c)
 * Callees:
 *     HalpIvtProcessDrhdEntry @ 0x1404E764C (HalpIvtProcessDrhdEntry.c)
 *     DmrGetNextRemappingStructure @ 0x1404E885C (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall HalpIvtProcessDmarTable(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rbx
  int v4; // r10d
  bool v5; // zf
  char v6; // r11
  _WORD *v7; // rdx
  _WORD *NextRemappingStructure; // rax
  _WORD *i; // rdx
  _WORD *v10; // rax
  _WORD *v11; // rdi

  v3 = a1;
  v4 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) >= 0x40u )
    {
      v5 = (*(_BYTE *)(a1 + 37) & 4) == 0;
      v6 = 0;
      qword_140CF5618 = a1;
      if ( !v5 )
      {
        v7 = 0LL;
        while ( 1 )
        {
          NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v7);
          if ( !NextRemappingStructure )
            break;
          if ( *NextRemappingStructure == 4 )
          {
            v6 = 0;
            break;
          }
          v7 = NextRemappingStructure;
          a1 = v3;
        }
      }
      *a2 = v6;
      for ( i = 0LL; ; i = v11 )
      {
        v10 = (_WORD *)DmrGetNextRemappingStructure(v3, i);
        v11 = v10;
        if ( !v10 )
          break;
        if ( !*v10 )
          v4 = HalpIvtProcessDrhdEntry(v3, v10);
        if ( v4 < 0 )
          break;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
