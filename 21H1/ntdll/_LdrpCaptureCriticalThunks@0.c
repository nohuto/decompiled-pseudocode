/*
 * XREFs of _LdrpCaptureCriticalThunks@0 @ 0x4B333BB3
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char *__stdcall LdrpCaptureCriticalThunks()
{
  unsigned int v0; // ebx
  _DWORD *v1; // edx
  unsigned int i; // ecx
  int v3; // eax
  char *result; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  _BYTE v8[4]; // [esp+Ch] [ebp-2Ch] BYREF
  char v9; // [esp+10h] [ebp-28h] BYREF

  v0 = 0;
  v1 = v8;
  for ( i = 0; i < 0x14; i += 4 )
  {
    v3 = *(int *)((char *)&LdrpCriticalLoaderFunctions + i);
    *v1 = v3;
    v1 += 2;
  }
  result = (char *)NtQueryVirtualMemory(-1, 0, 4, (int)v8, 40, 0);
  if ( (int)result >= 0 )
  {
    v5 = &LdrpThunkSignature;
    result = &v9;
    while ( (*(_DWORD *)result & 0x40000000) != 0 )
    {
      v6 = *(int (__stdcall **)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, PIO_STATUS_BLOCK, ULONG, ULONG))((char *)&LdrpCriticalLoaderFunctions + v0);
      v7 = v5;
      v0 += 4;
      v5 += 4;
      result += 8;
      *v7 = *v6++;
      *++v7 = *v6++;
      *++v7 = *v6;
      v7[1] = v6[1];
      if ( v0 >= 0x14 )
        return result;
    }
  }
  LdrpDetourExist = 1;
  return result;
}
