/*
 * XREFs of _RtlNtPathNameToDosPathName@16 @ 0x4B32D370
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpEnsureBufferSize@12 @ 0x4B2E1480 (_RtlpEnsureBufferSize@12.c)
 *     _RtlPrefixUnicodeString@12 @ 0x4B2E40C0 (_RtlPrefixUnicodeString@12.c)
 *     _RtlDetermineDosPathNameType_Ustr@4 @ 0x4B2E42FE (_RtlDetermineDosPathNameType_Ustr@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __stdcall RtlNtPathNameToDosPathName(int a1, unsigned __int16 *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // esi
  int *v5; // ebx
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v12; // [esp+Ch] [ebp-Ch]
  int *v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+10h] [ebp-8h]
  int *v15; // [esp+14h] [ebp-4h]

  v4 = 0;
  v12 = 0;
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return -1073741811;
  if ( a1 )
    return -1073741811;
  if ( a4 )
  {
    if ( *a4 )
    {
      v12 = (*a4 - *((_DWORD *)a2 + 1)) >> 1;
      if ( v12 >= *a2 >> 1 )
        return -1073741811;
    }
  }
  v13 = &RtlpDosDevicesUncPrefix;
  if ( RtlPrefixUnicodeString((unsigned __int16 *)&RtlpDosDevicesUncPrefix, a2, 1) )
  {
    v15 = &dword_4B281988;
    if ( a3 )
      *a3 = 2;
  }
  else
  {
    v13 = &RtlpDosDevicesPrefix;
    if ( !RtlPrefixUnicodeString((unsigned __int16 *)&RtlpDosDevicesPrefix, a2, 1) )
    {
      if ( a3 )
      {
        switch ( RtlDetermineDosPathNameType_Ustr(a2) )
        {
          case 0:
          case 3:
          case 4:
          case 5:
            *a3 = 1;
            break;
          case 1:
          case 2:
          case 6:
          case 7:
            *a3 = 4;
            break;
          default:
            return v4;
        }
      }
      return v4;
    }
    v15 = &RtlpEmptyString;
    if ( a3 )
      *a3 = 3;
  }
  v5 = v13;
  v14 = (unsigned __int16)((*(_WORD *)v15 >> 1) + (*a2 >> 1) - (*(_WORD *)v13 >> 1));
  v6 = 2 * v14 + 2;
  if ( v6 > 0xFFFE )
    return -1073741562;
  v7 = (int *)(a2 + 4);
  if ( a2 == (unsigned __int16 *)-8 || v6 > *((_DWORD *)a2 + 4) )
  {
    if ( RtlpEnsureBufferSize(0, (int)(a2 + 4), v6) < 0 )
      return -1073741801;
    v7 = (int *)(a2 + 4);
  }
  v8 = *v7;
  a2[1] = a2[8];
  v9 = *a2;
  *((_DWORD *)a2 + 1) = v8;
  memmove(
    (void *)(v8 + 2 * (*(unsigned __int16 *)v15 >> 1)),
    (const void *)(v8 + 2 * (*(unsigned __int16 *)v5 >> 1)),
    v9 - *(unsigned __int16 *)v5);
  memcpy(*((void **)a2 + 1), (const void *)v15[1], *(unsigned __int16 *)v15);
  v10 = (unsigned __int16)(2 * v14);
  *a2 = v10;
  *(_WORD *)(*((_DWORD *)a2 + 1) + 2 * (v10 >> 1)) = 0;
  if ( v12 )
    *a4 = *((_DWORD *)a2 + 1) + 2 * (v12 + (*(unsigned __int16 *)v15 >> 1) - (*(unsigned __int16 *)v5 >> 1));
  return v4;
}
