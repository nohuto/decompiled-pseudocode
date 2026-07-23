/*
 * XREFs of AslpFileGetExportName @ 0x14096B324
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x14096BAC0 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     AslpFileQueryExportName_Vb @ 0x1405D226C (AslpFileQueryExportName_Vb.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x140967A64 (AslStringAnsiToUnicode.c)
 */

__int64 __fastcall AslpFileGetExportName(wchar_t **a1, __int64 a2)
{
  int ExportName_Vb; // eax
  int v5; // ebx
  char pszDest[256]; // [rsp+30h] [rbp-118h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  ExportName_Vb = AslpFileQueryExportName_Vb(pszDest, a2);
  v5 = ExportName_Vb;
  if ( ExportName_Vb >= 0 )
  {
    v5 = AslStringAnsiToUnicode(a1, pszDest);
    if ( v5 >= 0 )
      return 0;
    goto LABEL_4;
  }
  if ( ExportName_Vb != -1073741275 && ExportName_Vb != -1073741701 )
LABEL_4:
    AslLogCallPrintf(1LL);
  return (unsigned int)v5;
}
