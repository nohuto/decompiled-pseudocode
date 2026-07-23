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
  SIZE_T v9; // [esp-4h] [ebp-10Ch]
  size_t v10; // [esp-4h] [ebp-10Ch]
  size_t v11; // [esp-4h] [ebp-10Ch]
  unsigned int v12; // [esp+10h] [ebp-F8h] BYREF
  unsigned int v13; // [esp+14h] [ebp-F4h]
  ULONG *v14; // [esp+18h] [ebp-F0h]
  void *v15; // [esp+1Ch] [ebp-ECh]
  LCID v16; // [esp+20h] [ebp-E8h]
  _UNICODE_STRING String; // [esp+24h] [ebp-E4h] BYREF
  int v18; // [esp+2Ch] [ebp-DCh]
  int v19; // [esp+30h] [ebp-D8h]
  _DWORD *v20; // [esp+34h] [ebp-D4h]
  _UNICODE_STRING DestinationString; // [esp+38h] [ebp-D0h] BYREF
  _DWORD v22[4]; // [esp+40h] [ebp-C8h] BYREF
  char v23; // [esp+50h] [ebp-B8h] BYREF

  v20 = a2;
  v13 = 0;
  v18 = 0;
  v2 = 0;
  v3 = Source;
  if ( !a2 || !Source || *a2 || LdrpMultiSZCchLength(Source, &v12) < 0 )
    return -1073741811;
  v16 = 2 * v12;
  v12 *= 2;
  LODWORD(v9) = 680;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  v14 = v22;
  v5 = Heap;
  v6 = v16;
  v15 = Heap;
  while ( 1 )
  {
    if ( !*v3 || !v6 )
    {
LABEL_16:
      *v5 = 0;
      goto LABEL_17;
    }
    if ( v13 >= 4 )
      goto LABEL_20;
    LODWORD(v10) = v6 >> 1;
    v19 = 2 * wcsnlen(v3, v10);
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v3);
    if ( RtlUnicodeStringToLcid(&DestinationString, v14) < 0 )
      goto LABEL_20;
    *(_DWORD *)&String.Length = 11141120;
    String.Buffer = (wchar_t *)&v23;
    v16 = *v14;
    if ( !RtlLCIDToCultureName(v16, &String) )
      goto LABEL_20;
    v7 = 0;
    if ( v13 )
      break;
LABEL_14:
    v18 += *(_DWORD *)&String.Length + 2;
    if ( (unsigned __int16)v18 >= 0x2A7u )
    {
      v2 = -1073741595;
      goto LABEL_21;
    }
    LODWORD(v11) = String.Length + 2;
    memcpy(v15, String.Buffer, v11);
    ++v14;
    v5 = (char *)v15 + 2 * (String.Length >> 1) + 2;
    ++v13;
    v6 = -2 - v19 + v12;
    v15 = v5;
    v12 = v6;
    v3 = (wchar_t *)((char *)v3 + v19 + 2);
    if ( !v3 )
      goto LABEL_16;
  }
  while ( v16 != v22[v7] )
  {
    if ( ++v7 >= v13 )
      goto LABEL_14;
  }
LABEL_20:
  v2 = -1073741811;
LABEL_21:
  if ( !Heap )
  {
LABEL_17:
    *v20 = Heap;
    return v2;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v2;
}
