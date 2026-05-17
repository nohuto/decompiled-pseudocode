/*
 * XREFs of _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80
 * Callers:
 *     _RtlQueryApplicationKeyOption@32 @ 0x4B2A6C1D (_RtlQueryApplicationKeyOption@32.c)
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     _LdrpQueryDllExecuteOptions@8 @ 0x4B2E76BD (_LdrpQueryDllExecuteOptions@8.c)
 *     _RtlQueryImageFileExecutionOptions@28 @ 0x4B2E9700 (_RtlQueryImageFileExecutionOptions@28.c)
 *     _LdrpInitializeApplicationVerifierPackage@24 @ 0x4B331CC8 (_LdrpInitializeApplicationVerifierPackage@24.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpQueryAndUpdateVerifierLaunchCounter@8 @ 0x4B333771 (_LdrpQueryAndUpdateVerifierLaunchCounter@8.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 *     _WerpGlobalFlagsForProcess@4 @ 0x4B33B104 (_WerpGlobalFlagsForProcess@4.c)
 *     _RtlpQueryEafPlusModuleList@8 @ 0x4B342700 (_RtlpQueryEafPlusModuleList@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlQueryImageFileKeyOption(int a1, int a2, int a3, _DWORD *a4, unsigned int a5, int *a6)
{
  int result; // eax
  _DWORD *v7; // edi
  int v8; // esi
  int v9; // esi
  int v10; // edx
  unsigned int v11; // ecx
  void *ProcessHeap; // ecx
  _DWORD *Heap; // eax
  int v14; // eax
  int v15; // eax
  size_t v16; // eax
  int v17; // [esp+10h] [ebp-420h] BYREF
  _DWORD *v18; // [esp+14h] [ebp-41Ch]
  _WORD v19[2]; // [esp+18h] [ebp-418h] BYREF
  _DWORD *v20; // [esp+1Ch] [ebp-414h]
  int v21; // [esp+20h] [ebp-410h]
  int *v22; // [esp+24h] [ebp-40Ch]
  _BYTE v23[1028]; // [esp+28h] [ebp-408h] BYREF

  v21 = a1;
  v22 = a6;
  result = RtlInitUnicodeStringEx(v19, a2);
  if ( result < 0 )
    return result;
  if ( a5 >= 0x3F4 )
  {
    v9 = a5 + 12;
    goto LABEL_20;
  }
  v7 = v23;
  result = ZwQueryValueKey(a1, v19, 2, v23, 1024, &v17);
  v8 = result;
  if ( result >= 0 )
  {
    v18 = 0;
LABEL_8:
    v10 = a3;
    if ( a3 )
    {
      v11 = a5;
    }
    else
    {
      v11 = v7[2];
      if ( v11 > a5 )
      {
        v17 = v7[2];
        goto LABEL_11;
      }
      v10 = v7[1];
    }
    v15 = v7[1];
    switch ( v15 )
    {
      case 3:
      case 7:
        if ( v10 == v15 )
        {
          v17 = v7[2];
          if ( a4 && v7[2] <= v11 )
          {
            memcpy(a4, v7 + 3, v7[2]);
            goto LABEL_12;
          }
          goto LABEL_11;
        }
        goto LABEL_57;
      case 4:
        if ( v10 == 4 )
        {
          if ( v11 == 4 && v7[2] == 4 )
          {
            v17 = v7[1];
            if ( a4 )
            {
              *a4 = v7[3];
              goto LABEL_12;
            }
LABEL_11:
            v8 = -2147483643;
LABEL_12:
            if ( v22 && (v8 >= 0 || v8 == -2147483643) )
              *v22 = v17;
            goto LABEL_16;
          }
          break;
        }
LABEL_57:
        v8 = -1073741788;
        goto LABEL_16;
      case 11:
        if ( v10 != 11 )
          goto LABEL_57;
        if ( v11 == 8 && v7[2] == 8 )
        {
          v17 = 8;
          if ( a4 )
          {
            *a4 = v7[3];
            a4[1] = v7[4];
            goto LABEL_12;
          }
          goto LABEL_11;
        }
        break;
      case 1:
        if ( v10 != 4 )
        {
          v16 = v7[2];
          v17 = v16;
          if ( v16 <= v11 )
          {
            memcpy(a4, v7 + 3, v16);
            goto LABEL_12;
          }
          goto LABEL_11;
        }
        if ( v11 == 4 )
        {
          if ( ((unsigned __int8)a4 & 3) == 0 )
          {
            v17 = 4;
            if ( a4 )
            {
              v20 = v7 + 3;
              v19[0] = *((_WORD *)v7 + 4);
              v19[1] = *((_WORD *)v7 + 4);
              v8 = RtlUnicodeStringToInteger(v19, 0, a4);
              goto LABEL_12;
            }
            goto LABEL_11;
          }
          v8 = -2147483646;
LABEL_16:
          if ( v18 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
          return v8;
        }
        break;
      default:
        v8 = -1073741788;
        goto LABEL_12;
    }
    v8 = -1073741820;
    goto LABEL_16;
  }
  if ( result == -2147483643 )
  {
    while ( 1 )
    {
      v9 = v17;
LABEL_20:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return -1073741801;
      Heap = (_DWORD *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v9);
      v18 = Heap;
      if ( !Heap )
        return -1073741801;
      v7 = Heap;
      v14 = ZwQueryValueKey(v21, v19, 2, Heap, v9, &v17);
      v8 = v14;
      if ( v14 >= 0 )
        goto LABEL_8;
      if ( v14 != -2147483643 )
        goto LABEL_16;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  return result;
}
