/*
 * XREFs of _RtlpIdnToUnicodeWorker@28 @ 0x4B36535D
 * Callers:
 *     _RtlIdnToUnicode@20 @ 0x4B365300 (_RtlIdnToUnicode@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlStringCchLengthW@12 @ 0x4B2D415E (_RtlStringCchLengthW@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _punycode_decode@32 @ 0x4B365668 (_punycode_decode@32.c)
 *     _RtlIsNormalizedString@16 @ 0x4B368550 (_RtlIsNormalizedString@16.c)
 */

int __fastcall RtlpIdnToUnicodeWorker(int a1, int a2, int a3, void *a4, int *a5, PCWSTR SourceString, int a7)
{
  char v8; // bl
  int *v9; // edi
  int v10; // edx
  unsigned __int16 v11; // cx
  int result; // eax
  __int16 v13; // ax
  int v14; // esi
  const WCHAR *v15; // ecx
  int v16; // edx
  LONG v17; // esi
  _BYTE *Heap; // edi
  const WCHAR *v19; // edx
  LONG i; // ecx
  LONG j; // eax
  SIZE_T v22; // [esp-4h] [ebp-28h]
  int v23; // [esp+10h] [ebp-14h] BYREF
  int v24; // [esp+14h] [ebp-10h] BYREF
  PCWSTR v25; // [esp+18h] [ebp-Ch]
  int v26; // [esp+1Ch] [ebp-8h] BYREF
  char v27; // [esp+22h] [ebp-2h] BYREF
  BOOLEAN Normalized; // [esp+23h] [ebp-1h] BYREF

  v8 = a1;
  if ( !a2 )
    return -1073741811;
  v9 = a5;
  if ( !a5 )
    return -1073741811;
  if ( *a5 < 0 )
    return -1073741811;
  v10 = a3;
  if ( a3 < -1 || *a5 > 0 && !a4 )
    return -1073741811;
  if ( (a1 & 0xFFFFFFF0) != 0 )
    return -1073741811;
  if ( a3 == -1 )
  {
    if ( RtlStringCchLengthW(a2, 0x203u, &v23) < 0 )
      return -1073740010;
    v10 = v23 + 1;
  }
  v11 = *(_WORD *)(a2 + 2 * v10 - 2);
  v25 = (PCWSTR)v11;
  v26 = 511;
  v23 = v8 & 4;
  result = punycode_decode(SourceString, &v26, v23 != 0, (v8 & 2) != 0, &v27, &v24);
  if ( result < 0 )
    return result;
  v13 = (__int16)v25;
  v14 = v26;
  if ( !(_WORD)v25 )
  {
    if ( v26 < 511 )
    {
      v15 = SourceString;
      SourceString[v26] = 0;
      v26 = ++v14;
      goto LABEL_16;
    }
    return -1073740010;
  }
  v15 = SourceString;
LABEL_16:
  if ( (v8 & 8) != 0 || v27 )
    goto LABEL_38;
  if ( v23 )
  {
    if ( RtlIsNormalizedString(1u, v15, (v24 - (int)v15) >> 1, &Normalized) < 0 || !Normalized )
      return -1073740010;
    v13 = (__int16)v25;
  }
  v16 = (v24 - (int)SourceString) >> 1;
  if ( v16 >= v14 - (v13 == 0) )
    goto LABEL_38;
  v17 = v14 - (((_WORD)v25 == 0) + 1) - v16;
  v25 = (PCWSTR)(v24 + 2);
  LODWORD(v22) = v17;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22);
  if ( !Heap )
    return -1073741801;
  v19 = v25;
  for ( i = 0; i < v17; ++i )
  {
    if ( (unsigned __int16)(v19[i] - 65) <= 0x19u )
    {
      v19[i] += 32;
      Heap[i] = 1;
    }
  }
  if ( RtlIsNormalizedString((((v8 & 1) == 0) << 8) + 13, v19, v17, &Normalized) < 0 || !Normalized )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return -1073740010;
  }
  for ( j = 0; j < v17; ++j )
  {
    if ( Heap[j] == 1 )
      v25[j] -= 32;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  v14 = v26;
  v9 = a5;
LABEL_38:
  if ( a4 && *v9 )
  {
    if ( v14 > *v9 )
      return -1073741789;
    LODWORD(v22) = 2 * v14;
    memcpy(a4, SourceString, v22);
  }
  *v9 = v14;
  return 0;
}
