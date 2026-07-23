/*
 * XREFs of _RtlpMuiRegAddAlternateCodePage@8 @ 0x4B2ACD4A
 * Callers:
 *     _RtlpMuiRegAddLanguageByName@24 @ 0x4B2AC9AE (_RtlpMuiRegAddLanguageByName@24.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

wchar_t *__fastcall RtlpMuiRegAddAlternateCodePage(int a1, int a2)
{
  wchar_t *v2; // edi
  int v5; // ecx
  wchar_t *result; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  const wchar_t *v9; // esi
  bool v10; // zf
  _WORD *v11; // ebx
  const wchar_t *v12; // ecx
  __int16 v13; // ax
  int v14; // ecx
  SIZE_T v15; // [esp-4h] [ebp-34h]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-20h] BYREF
  int v17; // [esp+18h] [ebp-18h]
  int v18; // [esp+1Ch] [ebp-14h]
  int v19; // [esp+20h] [ebp-10h]
  ULONG Value; // [esp+24h] [ebp-Ch] BYREF
  unsigned int v21; // [esp+28h] [ebp-8h] BYREF
  unsigned int v22; // [esp+2Ch] [ebp-4h] BYREF

  v2 = 0;
  v21 = 7;
  v18 = 0;
  v19 = 0;
  v17 = a1;
  v22 = 0;
  Value = 0;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  result = (wchar_t *)LdrpQueryValueKey(a2, &DestinationString, &v21, 0, &v22, v5);
  if ( result != (wchar_t *)-1073741772 )
  {
    v7 = v22;
    if ( v22 )
    {
      if ( result == (wchar_t *)-2147483643 )
      {
        v22 += 2;
        v8 = (v7 + 5) & 0xFFFFFFFC;
        if ( v8 )
        {
          LODWORD(v15) = v8;
          result = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v15);
          v2 = result;
        }
        if ( v2 )
        {
          if ( !LdrpQueryValueKey(a2, &DestinationString, &v21, v2, &v22, v8) && (v21 == 1 || v21 == 7) )
          {
            v9 = v2;
            v10 = v22 >> 1 == 0;
            v22 >>= 1;
            v21 = 0;
            if ( !v10 )
            {
              v11 = (_WORD *)(a1 + 20);
              while ( v9 && *v9 )
              {
                if ( !_wcsicmp(v9, L"*") )
                {
                  *(_WORD *)(v17 + 20) = -1;
                  return (wchar_t *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
                }
                RtlInitUnicodeString(&DestinationString, (PCWSTR)v9);
                if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value)
                  || (*v11 = Value, ++v11, ++v19, v19 < 4) )
                {
                  v12 = v9;
                  do
                    v13 = *v12++;
                  while ( v13 != (_WORD)v18 );
                  v14 = v12 - (v9 + 1);
                  v21 += v14 + 1;
                  v9 += v14 + 1;
                  if ( v21 < v22 )
                    continue;
                }
                return (wchar_t *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
              }
            }
          }
          return (wchar_t *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
        }
      }
    }
  }
  return result;
}
