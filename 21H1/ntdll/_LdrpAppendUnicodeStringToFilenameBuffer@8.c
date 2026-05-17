/*
 * XREFs of _LdrpAppendUnicodeStringToFilenameBuffer@8 @ 0x4B2CC7A7
 * Callers:
 *     _LdrpBuildSystem32FileName@8 @ 0x4B2A6BD1 (_LdrpBuildSystem32FileName@8.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 * Callees:
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _NtdllpReallocateStringRoutine@8 @ 0x4B333B47 (_NtdllpReallocateStringRoutine@8.c)
 */

int __fastcall LdrpAppendUnicodeStringToFilenameBuffer(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v5; // edi
  unsigned int v7; // edi
  void *StringRoutine; // ecx
  void *v9; // [esp+8h] [ebp-8h]
  unsigned __int16 *v10; // [esp+Ch] [ebp-4h]

  v2 = *a2;
  v3 = 0;
  v10 = a2;
  if ( (_WORD)v2 )
  {
    v5 = *a1 + v2 + 2;
    if ( v5 <= a1[1] )
    {
LABEL_3:
      memcpy((void *)(*((_DWORD *)a1 + 1) + *a1), *((const void **)a2 + 1), *a2);
      *a1 += *v10;
      *(_WORD *)(*((_DWORD *)a1 + 1) + 2 * (*a1 >> 1)) = 0;
      return v3;
    }
    if ( v5 > 0xFFFE )
      return -1073741562;
    v7 = (v5 + 63) & 0xFFFFFFC0;
    if ( v7 > 0xFFFE )
      v7 = 65534;
    if ( *((unsigned __int16 **)a1 + 1) == a1 + 4 )
    {
      StringRoutine = (void *)NtdllpAllocateStringRoutine(v7);
      v9 = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      if ( *a1 )
      {
        memcpy(StringRoutine, *((const void **)a1 + 1), *a1);
        StringRoutine = v9;
      }
    }
    else
    {
      StringRoutine = (void *)NtdllpReallocateStringRoutine(v7, *((_DWORD *)a1 + 1));
    }
    if ( StringRoutine )
    {
      a2 = v10;
      *((_DWORD *)a1 + 1) = StringRoutine;
      a1[1] = v7;
      goto LABEL_3;
    }
    return -1073741801;
  }
  return v3;
}
