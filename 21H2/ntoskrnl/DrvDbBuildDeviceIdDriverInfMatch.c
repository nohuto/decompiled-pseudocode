/*
 * XREFs of DrvDbBuildDeviceIdDriverInfMatch @ 0x140673054
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140672DB0 (DrvDbGetDeviceIdDriverInfMatches.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 */

int __fastcall DrvDbBuildDeviceIdDriverInfMatch(__int64 a1, unsigned __int8 *a2, wchar_t *a3, unsigned int a4)
{
  unsigned __int8 v5; // al
  int v6; // eax
  int result; // eax
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+38h] [rbp-10h]
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp+10h] BYREF

  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v5 = *a2;
  if ( !*a2 )
    return RtlStringCchCopyExW(a3, a4, &word_1407D7CE0, 0LL, 0LL, 0x800u);
  if ( v5 > 2u )
  {
    if ( v5 == 3 )
      return RtlStringCchPrintfExW(a3, a4, &ppszDestEnd, &pcchRemaining, 0x800u, L"%ws\\*", &word_1407D7CE0);
    else
      return -1073741811;
  }
  else
  {
    if ( v5 == 1 )
      v6 = 0;
    else
      v6 = *((unsigned __int16 *)a2 + 1) + 1;
    v9 = v6;
    result = RtlStringCchPrintfExW(a3, a4, &ppszDestEnd, &pcchRemaining, 0x800u, L"%ws\\%X", &word_1407D7CE0, v9);
    if ( result >= 0 && a2[1] != 0xFF )
    {
      LODWORD(v8) = a2[1];
      return RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining, 0LL, 0LL, 0x800u, L"\\%X", v8);
    }
  }
  return result;
}
