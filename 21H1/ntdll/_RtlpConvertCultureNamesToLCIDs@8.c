/*
 * XREFs of _RtlpConvertCultureNamesToLCIDs@8 @ 0x4B353970
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _wcsnlen @ 0x4B2FA870 (_wcsnlen.c)
 *     _LdrpMultiSZCchLength@12 @ 0x4B35187C (_LdrpMultiSZCchLength@12.c)
 *     _RtlConvertLCIDToString@20 @ 0x4B351910 (_RtlConvertLCIDToString@20.c)
 */

int __stdcall RtlpConvertCultureNamesToLCIDs(wchar_t *Source, _DWORD *a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  const wchar_t *v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  int Heap; // eax
  __int16 *v8; // edi
  unsigned int v9; // eax
  __int16 *v10; // ecx
  __int16 v11; // ax
  int v12; // eax
  __int16 *v13; // ecx
  unsigned int v14; // edx
  __int16 v15; // ax
  unsigned int v17; // [esp+Ch] [ebp-34h] BYREF
  unsigned int v18; // [esp+10h] [ebp-30h]
  int v19; // [esp+14h] [ebp-2Ch]
  size_t v20; // [esp+18h] [ebp-28h]
  int v21; // [esp+1Ch] [ebp-24h]
  _DWORD *v22; // [esp+20h] [ebp-20h]
  UNICODE_STRING DestinationString; // [esp+24h] [ebp-1Ch] BYREF
  _DWORD v24[4]; // [esp+2Ch] [ebp-14h] BYREF

  v22 = a2;
  v21 = 0;
  v19 = 0;
  v2 = 0;
  v3 = 0;
  v4 = Source;
  if ( !a2 || !Source || *a2 || LdrpMultiSZCchLength(Source, &v17) < 0 )
    return -1073741811;
  v5 = 2 * v17;
  v17 = (unsigned int)v24;
  v18 = v5;
  while ( *v4 && v5 )
  {
    if ( v2 >= 4 )
      goto LABEL_16;
    v20 = 2 * wcsnlen(v4, v5 >> 1);
    RtlInitUnicodeString(&DestinationString, v4);
    if ( !RtlCultureNameToLCID(&DestinationString.Length, (_DWORD *)v17) )
      goto LABEL_16;
    v6 = 0;
    if ( v2 )
    {
      while ( *(_DWORD *)v17 != v24[v6] )
      {
        if ( ++v6 >= v2 )
          goto LABEL_13;
      }
LABEL_16:
      v3 = -1073741811;
LABEL_25:
      *v22 = v19;
      return v3;
    }
LABEL_13:
    v17 += 4;
    ++v2;
    v18 += -2 - v20;
    v5 = v18;
    v4 = (const wchar_t *)((char *)v4 + v20 + 2);
    if ( !v4 )
      break;
  }
  v18 = (unsigned __int16)(((_WORD)v2 << 6) + 4);
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v18);
  v19 = Heap;
  if ( !Heap )
  {
    v3 = -1073741801;
    goto LABEL_25;
  }
  v8 = (__int16 *)Heap;
  v9 = 0;
  v17 = 0;
  if ( !v2 )
  {
LABEL_24:
    *(_DWORD *)v8 = 0;
    goto LABEL_25;
  }
  while ( 1 )
  {
    RtlConvertLCIDToString(v24[v9], 16, 4u, v8, 0x20u);
    v10 = v8;
    do
      v11 = *v10++;
    while ( v11 != (_WORD)v21 );
    v12 = -2 - (v10 - (v8 + 1));
    v13 = v8;
    v14 = v12 + v18;
    v18 += v12;
    v20 = (size_t)(v8 + 1);
    do
      v15 = *v13++;
    while ( v15 != (_WORD)v21 );
    v8 += ((int)((int)v13 - v20) >> 1) + 1;
    if ( v14 < 4 )
      break;
    v9 = v17 + 1;
    v17 = v9;
    if ( v9 >= v2 )
      goto LABEL_24;
  }
  v3 = -1073741595;
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v19);
  return v3;
}
