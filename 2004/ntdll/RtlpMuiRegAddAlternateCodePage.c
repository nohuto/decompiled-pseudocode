/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x180103B90
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x180103D48 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x18003F670 (LdrpQueryValueKey.c)
 *     RtlUnicodeStringToInteger @ 0x1800754D0 (RtlUnicodeStringToInteger.c)
 *     _wcsicmp @ 0x18008DC70 (_wcsicmp.c)
 */

__int64 __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  wchar_t *v8; // rbx
  unsigned int v9; // r13d
  unsigned int v10; // esi
  const wchar_t *v11; // rdi
  _WORD *v12; // r15
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+50h] BYREF
  int v17; // [rsp+A8h] [rbp+58h] BYREF

  v17 = 7;
  v4 = 0LL;
  v16 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  result = LdrpQueryValueKey(a2, (__int64)&DestinationString, &v17, 0LL, &v16);
  if ( (_DWORD)result != -1073741772 )
  {
    v6 = v16;
    if ( v16 )
    {
      if ( (_DWORD)result == -2147483643 )
      {
        v16 += 2;
        v7 = (v6 + 5) & 0xFFFFFFFC;
        if ( v7 )
        {
          result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v7);
          v8 = (wchar_t *)result;
        }
        else
        {
          v8 = 0LL;
        }
        if ( v8 )
        {
          if ( !(unsigned int)LdrpQueryValueKey(a2, (__int64)&DestinationString, &v17, v8, &v16)
            && (v17 == 1 || v17 == 7) )
          {
            v9 = 0;
            v10 = v16 >> 1;
            v11 = v8;
            if ( v16 >> 1 )
            {
              v12 = (_WORD *)(a1 + 20);
              while ( v11 && *v11 )
              {
                if ( !wcsicmp(v11, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v8);
                }
                RtlInitUnicodeString(&DestinationString, v11);
                if ( (unsigned int)RtlUnicodeStringToInteger(&DestinationString.Length, 0xAu, &v14)
                  || (++v4, *v12 = v14, ++v12, v4 < 4) )
                {
                  v13 = -1LL;
                  do
                    ++v13;
                  while ( v11[v13] );
                  v9 += v13 + 1;
                  v11 += (unsigned int)(v13 + 1);
                  if ( v9 < v10 )
                    continue;
                }
                return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v8);
              }
            }
          }
          return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v8);
        }
      }
    }
  }
  return result;
}
