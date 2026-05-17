/*
 * XREFs of _RtlDuplicateUnicodeString@12 @ 0x4B2ECEB0
 * Callers:
 *     _RtlpTpIoDllProcessUnloads@8 @ 0x4B38592E (_RtlpTpIoDllProcessUnloads@8.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlDuplicateUnicodeString@12 @ 0x4B2ECEB0 (_RtlDuplicateUnicodeString@12.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x4B2ECFE7 (RtlUnicodeStringValidateWorker_0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlDuplicateUnicodeString(int a1, int a2, int a3)
{
  unsigned __int16 v3; // bx
  void *StringRoutine; // edi
  int v5; // ecx
  int v6; // eax
  unsigned __int16 *v7; // ecx
  int v8; // esi
  unsigned __int16 v9; // si
  int v11; // [esp+14h] [ebp-2Ch]
  int v12; // [esp+48h] [ebp+8h]

  v3 = 0;
  StringRoutine = 0;
  if ( (a1 & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( !a3 )
    return -1073741811;
  v5 = a1 & 2;
  v11 = v5;
  v6 = a1 & 1;
  v12 = v6;
  if ( v5 )
  {
    if ( !v6 )
      return -1073741811;
  }
  v8 = RtlUnicodeStringValidateWorker_0(v5);
  if ( v8 >= 0 )
  {
    if ( v7 )
      v3 = *v7;
    if ( v12 && v3 == 0xFFFE )
    {
      return -1073741562;
    }
    else
    {
      if ( v12 )
        v9 = v3 + 2;
      else
        v9 = v3;
      if ( !v11 && !v3 )
        v9 = 0;
      if ( v9 )
      {
        StringRoutine = (void *)NtdllpAllocateStringRoutine(v9);
        if ( !StringRoutine )
          return -1073741801;
        if ( v3 )
          memcpy(StringRoutine, *(const void **)(a2 + 4), v3);
        if ( v12 )
          *((_WORD *)StringRoutine + (v3 >> 1)) = 0;
      }
      *(_WORD *)(a3 + 2) = v9;
      *(_WORD *)a3 = v3;
      *(_DWORD *)(a3 + 4) = StringRoutine;
      return 0;
    }
  }
  return v8;
}
