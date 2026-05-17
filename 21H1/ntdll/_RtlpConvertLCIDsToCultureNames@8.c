/*
 * XREFs of _RtlpConvertLCIDsToCultureNames@8 @ 0x4B353B60
 * Callers:
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _wcsnlen @ 0x4B2FA870 (_wcsnlen.c)
 *     _LdrpMultiSZCchLength@12 @ 0x4B35187C (_LdrpMultiSZCchLength@12.c)
 *     _RtlUnicodeStringToLcid@8 @ 0x4B352FCF (_RtlUnicodeStringToLcid@8.c)
 */

int __stdcall RtlpConvertLCIDsToCultureNames(wchar_t *Source, _DWORD *a2)
{
  int v2; // esi
  wchar_t *v3; // edi
  _DWORD *Heap; // ebx
  _DWORD *v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v9; // [esp+10h] [ebp-F8h] BYREF
  unsigned int v10; // [esp+14h] [ebp-F4h]
  int *v11; // [esp+18h] [ebp-F0h]
  void *v12; // [esp+1Ch] [ebp-ECh]
  unsigned int v13; // [esp+20h] [ebp-E8h]
  int v14; // [esp+24h] [ebp-E4h] BYREF
  void *Src; // [esp+28h] [ebp-E0h]
  int v16; // [esp+2Ch] [ebp-DCh]
  size_t v17; // [esp+30h] [ebp-D8h]
  _DWORD *v18; // [esp+34h] [ebp-D4h]
  UNICODE_STRING DestinationString; // [esp+38h] [ebp-D0h] BYREF
  _DWORD v20[4]; // [esp+40h] [ebp-C8h] BYREF
  char v21; // [esp+50h] [ebp-B8h] BYREF

  v18 = a2;
  v10 = 0;
  v16 = 0;
  v2 = 0;
  v3 = Source;
  if ( !a2 || !Source || *a2 || LdrpMultiSZCchLength(Source, &v9) < 0 )
    return -1073741811;
  v13 = 2 * v9;
  v9 *= 2;
  Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 680);
  v11 = v20;
  v5 = Heap;
  v6 = v13;
  v12 = Heap;
  while ( 1 )
  {
    if ( !*v3 || !v6 )
    {
LABEL_16:
      *v5 = 0;
      goto LABEL_17;
    }
    if ( v10 >= 4 )
      goto LABEL_20;
    v17 = 2 * wcsnlen(v3, v6 >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    if ( RtlUnicodeStringToLcid(&DestinationString.Length, v11) < 0 )
      goto LABEL_20;
    v14 = 11141120;
    Src = &v21;
    v13 = *v11;
    if ( !RtlLCIDToCultureName(v13, (unsigned __int16 *)&v14) )
      goto LABEL_20;
    v7 = 0;
    if ( v10 )
      break;
LABEL_14:
    v16 += v14 + 2;
    if ( (unsigned __int16)v16 >= 0x2A7u )
    {
      v2 = -1073741595;
      goto LABEL_21;
    }
    memcpy(v12, Src, (unsigned __int16)v14 + 2);
    ++v11;
    v5 = (char *)v12 + 2 * ((unsigned __int16)v14 >> 1) + 2;
    ++v10;
    v6 = -2 - v17 + v9;
    v12 = v5;
    v9 = v6;
    v3 = (wchar_t *)((char *)v3 + v17 + 2);
    if ( !v3 )
      goto LABEL_16;
  }
  while ( v13 != v20[v7] )
  {
    if ( ++v7 >= v10 )
      goto LABEL_14;
  }
LABEL_20:
  v2 = -1073741811;
LABEL_21:
  if ( !Heap )
  {
LABEL_17:
    *v18 = Heap;
    return v2;
  }
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return v2;
}
