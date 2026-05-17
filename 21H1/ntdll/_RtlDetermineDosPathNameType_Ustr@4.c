/*
 * XREFs of _RtlDetermineDosPathNameType_Ustr@4 @ 0x4B2E42FE
 * Callers:
 *     _RtlpComputeBackupIndex@4 @ 0x4B2A95AD (_RtlpComputeBackupIndex@4.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _RtlpDetermineDosPathNameType4@16 @ 0x4B2E400E (_RtlpDetermineDosPathNameType4@16.c)
 *     _RtlpInitCurrentDir@4 @ 0x4B2E412F (_RtlpInitCurrentDir@4.c)
 *     _RtlNtPathNameToDosPathName@16 @ 0x4B32D370 (_RtlNtPathNameToDosPathName@16.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlDetermineDosPathNameType_Ustr(_DWORD *this)
{
  unsigned int v1; // edx
  _WORD *v2; // eax
  int v3; // ecx
  __int16 v4; // ax
  __int16 v6; // si
  int v7; // esi
  __int16 v8; // ax

  v1 = *(unsigned __int16 *)this;
  v2 = (_WORD *)this[1];
  v3 = 2;
  if ( (unsigned __int16)v1 >= 2u && (*v2 == 92 || *v2 == 47) )
  {
    v3 = 4;
    if ( (unsigned __int16)v1 >= 4u )
    {
      v6 = v2[1];
      if ( v6 == 92 || v6 == 47 )
      {
        v3 = 6;
        if ( (unsigned __int16)v1 >= 6u && ((v7 = (unsigned __int16)v2[2], v7 == 46) || v7 == 63) )
        {
          if ( v1 < 8 )
            return (_WORD)v1 != 6 ? 1 : 7;
          v8 = v2[3];
          if ( v8 != 92 && v8 != 47 )
            return (_WORD)v1 != 6 ? 1 : 7;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  else
  {
    if ( v1 < 4 || !*v2 || v2[1] != 58 )
      return 5;
    if ( v1 < 6 )
      return 3;
    v4 = v2[2];
    if ( v4 != 92 && v4 != 47 )
      return 3;
  }
  return v3;
}
