/*
 * XREFs of _RtlpComputeBackupIndex@4 @ 0x4B2A95AD
 * Callers:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 * Callees:
 *     _RtlDetermineDosPathNameType_Ustr@4 @ 0x4B2E42FE (_RtlDetermineDosPathNameType_Ustr@4.c)
 */

int __thiscall RtlpComputeBackupIndex(_DWORD *this)
{
  int result; // eax
  int v3; // edx
  unsigned int v4; // ecx
  int v5; // edi
  int v6; // esi

  if ( RtlDetermineDosPathNameType_Ustr() != 1 )
    return 3;
  v3 = 0;
  result = 2;
  v4 = *(unsigned __int16 *)this >> 1;
  if ( v4 > 2 )
  {
    v5 = this[1];
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)(v5 + 2 * result);
      if ( (v6 == 92 || v6 == 47) && ++v3 == 2 )
        break;
      if ( ++result >= v4 )
        return result;
    }
    ++result;
  }
  return result;
}
