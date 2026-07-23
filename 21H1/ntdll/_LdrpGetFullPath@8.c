/*
 * XREFs of _LdrpGetFullPath@8 @ 0x4B2D2394
 * Callers:
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 */

int __fastcall LdrpGetFullPath(unsigned __int16 *a1, int a2)
{
  unsigned int i; // eax
  __int16 v4; // di
  _WORD *StringRoutine; // ebx
  _WORD *v7; // eax
  unsigned __int16 *v8; // ecx
  int v9[2]; // [esp+Ch] [ebp-14h] BYREF
  unsigned __int16 *v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h] BYREF
  int var1; // [esp+1Fh] [ebp-1h] BYREF

  v10 = a1;
  for ( i = RtlGetFullPathName_Ustr(a1, *(unsigned __int16 *)(a2 + 2), *(wchar_t **)(a2 + 4), &v11, &var1, v9);
        ;
        i = RtlGetFullPathName_Ustr(v8, *(unsigned __int16 *)(a2 + 2), *(wchar_t **)(a2 + 4), &v11, &var1, v9) )
  {
    v4 = i;
    if ( (_BYTE)var1 )
      return -1073741515;
    if ( !i || i > 0xFFFE )
      break;
    if ( v9[0] == 5 && (LdrpIllegalCWDDevices & v9[1]) != 0 )
      return -1073741515;
    if ( i < *(unsigned __int16 *)(a2 + 2) )
    {
      *(_WORD *)a2 = i;
      return 0;
    }
    StringRoutine = NtdllpAllocateStringRoutine(i);
    if ( !StringRoutine )
      return -1073741801;
    v7 = (_WORD *)(a2 + 8);
    if ( a2 + 8 != *(_DWORD *)(a2 + 4) )
    {
      RtlDeleteBoundaryDescriptor(*(POBJECT_BOUNDARY_DESCRIPTOR *)(a2 + 4));
      v7 = (_WORD *)(a2 + 8);
    }
    *v7 = 0;
    v8 = v10;
    *(_WORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = StringRoutine;
    *(_WORD *)(a2 + 2) = v4;
    *StringRoutine = 0;
  }
  return -1073741562;
}
