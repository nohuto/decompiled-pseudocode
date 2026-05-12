/*
 * XREFs of RaFixupIds @ 0x1C0073B90
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C0017E54 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C0017F44 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C0018094 (RaidUnitGetHardwareIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaFixupIds(_WORD *a1, char a2, unsigned int a3)
{
  _WORD *v3; // r9
  unsigned int v4; // r10d
  unsigned int v5; // edx
  _WORD *v6; // r8
  int v7; // ecx
  __int64 result; // rax
  unsigned int i; // ecx
  int v10; // edx

  v3 = a1;
  if ( a2 )
  {
    v4 = a3 - 1;
    v5 = 0;
    if ( a3 != 1 )
    {
      v6 = a1;
      do
      {
        v7 = (unsigned __int16)*v6;
        if ( (_WORD)v7 )
        {
          result = (unsigned int)(v7 - 33);
          if ( (unsigned __int16)(v7 - 33) > 0x5Eu || (_WORD)v7 == 44 )
            *v6 = 95;
        }
        else
        {
          result = v5 + 1;
          if ( !v3[result] )
            return result;
        }
        ++v5;
        ++v6;
      }
      while ( v5 < v4 );
    }
  }
  else
  {
    for ( i = 0; i < a3; ++v3 )
    {
      v10 = (unsigned __int16)*v3;
      if ( !(_WORD)v10 )
        break;
      result = (unsigned int)(v10 - 33);
      if ( (unsigned __int16)(v10 - 33) > 0x5Eu || (_WORD)v10 == 44 )
        *v3 = 95;
      ++i;
    }
  }
  return result;
}
