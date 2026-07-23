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

int __usercall LdrpAppendUnicodeStringToFilenameBuffer@<eax>(
        unsigned __int16 *a1@<edx>,
        unsigned __int16 *a2@<ecx>,
        int a3@<edi>)
{
  int v3; // eax
  int v4; // ebx
  unsigned int v6; // edi
  unsigned int v8; // edi
  PVOID StringRoutine; // ecx
  SIZE_T v10; // [esp-Ch] [ebp-1Ch]
  size_t v11; // [esp-8h] [ebp-18h]
  PVOID v12; // [esp+8h] [ebp-8h]
  unsigned __int16 *v13; // [esp+Ch] [ebp-4h]

  v3 = *a1;
  v4 = 0;
  v13 = a1;
  if ( (_WORD)v3 )
  {
    HIDWORD(v11) = a3;
    v6 = *a2 + v3 + 2;
    if ( v6 <= a2[1] )
    {
LABEL_3:
      LODWORD(v11) = *a1;
      memcpy((void *)(*((_DWORD *)a2 + 1) + *a2), *((const void **)a1 + 1), v11);
      *a2 += *v13;
      *(_WORD *)(*((_DWORD *)a2 + 1) + 2 * (*a2 >> 1)) = 0;
      return v4;
    }
    if ( v6 > 0xFFFE )
      return -1073741562;
    v8 = (v6 + 63) & 0xFFFFFFC0;
    if ( v8 > 0xFFFE )
      v8 = 65534;
    if ( *((unsigned __int16 **)a2 + 1) == a2 + 4 )
    {
      StringRoutine = NtdllpAllocateStringRoutine(v8);
      v12 = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      if ( *a2 )
      {
        LODWORD(v11) = *a2;
        memcpy(StringRoutine, *((const void **)a2 + 1), v11);
        StringRoutine = v12;
      }
    }
    else
    {
      HIDWORD(v10) = *((_DWORD *)a2 + 1);
      LODWORD(v10) = v8;
      StringRoutine = (PVOID)NtdllpReallocateStringRoutine(v10);
    }
    if ( StringRoutine )
    {
      a1 = v13;
      *((_DWORD *)a2 + 1) = StringRoutine;
      a2[1] = v8;
      goto LABEL_3;
    }
    return -1073741801;
  }
  return v4;
}
