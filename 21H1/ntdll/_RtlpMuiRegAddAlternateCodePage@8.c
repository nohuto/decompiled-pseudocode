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

int __thiscall RtlpMuiRegAddAlternateCodePage(_WORD *this)
{
  wchar_t *v1; // edi
  int v3; // ecx
  int result; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  const wchar_t *v7; // esi
  bool v8; // zf
  _WORD *v9; // ebx
  const wchar_t *v10; // ecx
  __int16 v11; // ax
  int v12; // ecx
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-20h] BYREF
  _WORD *v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+24h] [ebp-Ch] BYREF
  int v18; // [esp+28h] [ebp-8h] BYREF
  int v19; // [esp+2Ch] [ebp-4h] BYREF

  v1 = 0;
  v18 = 7;
  v15 = 0;
  v16 = 0;
  v14 = this;
  v19 = 0;
  v17 = 0;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  result = LdrpQueryValueKey((int)&v18, 0, (int)&v19, v3);
  if ( result != -1073741772 )
  {
    v5 = v19;
    if ( v19 )
    {
      if ( result == -2147483643 )
      {
        v19 += 2;
        v6 = (v5 + 5) & 0xFFFFFFFC;
        if ( v6 )
        {
          result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, v6);
          v1 = (wchar_t *)result;
        }
        if ( v1 )
        {
          if ( !LdrpQueryValueKey((int)&v18, v1, (int)&v19, v6) && (v18 == 1 || v18 == 7) )
          {
            v7 = v1;
            v8 = (unsigned int)v19 >> 1 == 0;
            v19 = (unsigned int)v19 >> 1;
            v18 = 0;
            if ( !v8 )
            {
              v9 = this + 10;
              while ( v7 && *v7 )
              {
                if ( !_wcsicmp(v7, L"*") )
                {
                  v14[10] = -1;
                  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
                }
                RtlInitUnicodeString(&DestinationString, v7);
                if ( RtlUnicodeStringToInteger(&DestinationString, 10, &v17) || (*v9 = v17, ++v9, ++v16, v16 < 4) )
                {
                  v10 = v7;
                  do
                    v11 = *v10++;
                  while ( v11 != (_WORD)v15 );
                  v12 = v10 - (v7 + 1);
                  v18 += v12 + 1;
                  v7 += v12 + 1;
                  if ( v18 < (unsigned int)v19 )
                    continue;
                }
                return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
              }
            }
          }
          return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
        }
      }
    }
  }
  return result;
}
