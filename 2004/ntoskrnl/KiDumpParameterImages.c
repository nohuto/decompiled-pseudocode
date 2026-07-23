/*
 * XREFs of KiDumpParameterImages @ 0x140512FE4
 * Callers:
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x140512C50 (KiDisplayBlueScreen.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
 *     RtlStringCbPrintfA @ 0x1403A5654 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiBugCheckUnicodeToAnsi @ 0x140512BD0 (KiBugCheckUnicodeToAnsi.c)
 *     KiPcToFileHeader @ 0x140513400 (KiPcToFileHeader.c)
 *     MmLocateUnloadedDriver @ 0x1405303FC (MmLocateUnloadedDriver.c)
 */

void __fastcall KiDumpParameterImages(NTSTRSAFE_PSTR pszDest, const void **a2, unsigned int a3, char a4)
{
  char v7; // r13
  __int64 v8; // r14
  unsigned int TimeDateStamp; // r15d
  const void *v10; // rbp
  __int64 UnloadedDriver; // rax
  __int64 v12; // rbx
  unsigned __int16 *v13; // rcx
  __int64 v14; // rbx
  PIMAGE_NT_HEADERS v15; // rax
  const char *v16; // r9
  _BYTE v17[8]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-D0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-C8h] BYREF

  v18 = 0LL;
  v17[0] = 0;
  v7 = 1;
  if ( pszDest )
    *pszDest = 0;
  if ( a3 )
  {
    v8 = a3;
    while ( 1 )
    {
      TimeDateStamp = 0;
      v10 = (const void *)KiPcToFileHeader(*a2, &v18, 1LL, v17);
      if ( v10 )
        break;
      v10 = *a2;
      UnloadedDriver = MmLocateUnloadedDriver(*a2);
      v12 = UnloadedDriver;
      if ( UnloadedDriver )
      {
        if ( a4 )
        {
          v13 = (unsigned __int16 *)UnloadedDriver;
          goto LABEL_14;
        }
        goto LABEL_15;
      }
LABEL_20:
      ++a2;
      if ( !--v8 )
        return;
    }
    v14 = v18;
    if ( MmIsAddressValidEx(*(_QWORD *)(v18 + 48)) == 1 )
    {
      v15 = RtlImageNtHeader(*(PVOID *)(v14 + 48));
      if ( v15 )
        TimeDateStamp = v15->FileHeader.TimeDateStamp;
    }
    v12 = v14 + 88;
    if ( a4 )
    {
      v13 = (unsigned __int16 *)v12;
LABEL_14:
      KiBugCheckUnicodeToAnsi(v13, v19);
    }
LABEL_15:
    if ( pszDest )
    {
      v16 = "\r\n*";
      if ( !v7 )
        v16 = "*";
      RtlStringCbPrintfA(
        pszDest,
        0x80uLL,
        "%s**  %12s - Address %p base at %p, DateStamp %08lx\r\n",
        v16,
        v19,
        *a2,
        v10,
        TimeDateStamp);
    }
    KiBugCheckDriver = v12;
    v7 = 0;
    goto LABEL_20;
  }
}
