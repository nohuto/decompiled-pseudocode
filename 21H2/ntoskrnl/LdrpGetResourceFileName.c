/*
 * XREFs of LdrpGetResourceFileName @ 0x140380798
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x140227614 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     __report_rangecheckfailure @ 0x1404B66AC (__report_rangecheckfailure.c)
 */

int __fastcall LdrpGetResourceFileName(
        __int64 a1,
        char a2,
        const WCHAR *a3,
        const WCHAR *a4,
        UNICODE_STRING *Destination)
{
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  WCHAR *v14; // rdx
  int result; // eax
  __int64 v16; // rax
  WCHAR *v17; // rcx
  WCHAR v18[2]; // [rsp+1Ch] [rbp-25Ch] BYREF
  WCHAR Source[264]; // [rsp+20h] [rbp-258h] BYREF

  if ( !a1 || !Destination || !a4 )
    return -1073741811;
  v9 = *(unsigned __int16 *)(a1 + 88);
  v10 = *(unsigned __int16 *)(a1 + 72);
  v11 = v10 - v9;
  if ( v11 >= 0x208 || (unsigned __int16)v10 <= (unsigned __int16)v9 )
    return -1073020927;
  v12 = (unsigned int)v11;
  memmove(Source, *(const void **)(a1 + 80), (unsigned int)v11);
  v13 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v13 >= 0x208 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v13) = 0;
  if ( !a2 )
  {
    v14 = Source;
    goto LABEL_9;
  }
  v16 = -1LL;
  do
    ++v16;
  while ( Source[v16] );
  v17 = &v18[(unsigned int)v16];
  if ( v17 <= Source )
    return -1073741686;
  do
  {
    if ( *v17 == 92 )
      break;
    --v17;
  }
  while ( v17 > Source );
  if ( v17 <= Source )
    return -1073741686;
  v17[1] = 0;
  result = RtlAppendUnicodeToString(Destination, Source);
  if ( result >= 0 )
  {
    v14 = L"SystemResources\\";
LABEL_9:
    result = RtlAppendUnicodeToString(Destination, v14);
    if ( result >= 0 )
    {
      if ( !a2 )
      {
        RtlAppendUnicodeToString(Destination, a4);
        RtlAppendUnicodeToString(Destination, L"\\");
      }
      result = RtlAppendUnicodeToString(Destination, *(PCWSTR *)(a1 + 96));
      if ( result >= 0 )
      {
        if ( a3 )
          return RtlAppendUnicodeToString(Destination, a3);
      }
    }
  }
  return result;
}
