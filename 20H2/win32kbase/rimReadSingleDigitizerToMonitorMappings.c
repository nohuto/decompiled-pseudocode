/*
 * XREFs of rimReadSingleDigitizerToMonitorMappings @ 0x1C0163CFC
 * Callers:
 *     RIMReadDigitizerToMonitorMappings @ 0x1C016497C (RIMReadDigitizerToMonitorMappings.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0032934 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008FCEC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     wcsstr @ 0x1C00CBD98 (wcsstr.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

int __fastcall rimReadSingleDigitizerToMonitorMappings(
        const UNICODE_STRING *a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        char *KeyValueInformation,
        __int64 a6,
        unsigned __int16 *a7)
{
  int v10; // edx
  wchar_t *v11; // rax
  const WCHAR *v12; // rdx
  int v13; // r10d
  signed __int64 v14; // r9
  WCHAR v15; // ax
  _UNKNOWN **v16; // rax
  int v17; // r9d
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-B0h] BYREF

  Length = 524;
  memset(SourceString, 0, sizeof(SourceString));
  DestinationString = 0LL;
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( (int)RtlStringCchPrintfW(SourceString, 256LL, L"%d-", a3) < 0 )
  {
    v16 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 16;
      goto LABEL_19;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.MaximumLength = 512;
    if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 13) < 0 )
    {
      v16 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 15;
        goto LABEL_19;
      }
    }
    else
    {
      v11 = wcsstr(DestinationString.Buffer, L"?");
      if ( v11 )
      {
        v12 = L"\\";
        v13 = 1;
        v14 = (char *)v11 - (char *)L"\\";
        do
        {
          v15 = *v12;
          *(const WCHAR *)((char *)v12 + v14) = *v12;
          ++v12;
          if ( !v15 )
            break;
          --v13;
        }
        while ( v13 );
      }
      LODWORD(v16) = ZwQueryValueKey(
                       a2,
                       &DestinationString,
                       KeyValuePartialInformation,
                       KeyValueInformation,
                       Length,
                       &Length);
      if ( (int)v16 >= 0 )
      {
        if ( *((_DWORD *)KeyValueInformation + 1) == 1 && Length <= 0x200 )
        {
          LODWORD(v16) = RtlStringCchCopyW(a7, 0x80uLL, (size_t *)(KeyValueInformation + 12));
          if ( (int)v16 < 0 )
          {
            v16 = &WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v17 = 13;
LABEL_19:
              LOBYTE(v10) = 3;
              LODWORD(v16) = WPP_RECORDER_SF_(
                               (_DWORD)gRimLog,
                               v10,
                               1,
                               v17,
                               (__int64)&WPP_516b30da09af3a4d670a255114438942_Traceguids);
            }
          }
        }
        else
        {
          v16 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 14;
            goto LABEL_19;
          }
        }
      }
    }
  }
  return (int)v16;
}
