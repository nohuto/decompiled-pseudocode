/*
 * XREFs of _ReportExceptionInternal@24 @ 0x4B33A3B1
 * Callers:
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 *     _RtlWerpReportException@24 @ 0x4B33AB60 (_RtlWerpReportException@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 */

int __fastcall ReportExceptionInternal(unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  int result; // eax
  unsigned int i; // ecx
  __int64 v9; // rax
  _DWORD v11[346]; // [esp+10h] [ebp-AD8h] BYREF
  _QWORD v12[173]; // [esp+578h] [ebp-570h] BYREF

  *a6 = 0;
  if ( a4 > 5 )
    return -1073740757;
  memset(v12, 0, sizeof(v12));
  v12[5] = a2;
  LODWORD(v12[0]) = 90703184;
  LODWORD(v12[3]) = 0x20000000;
  v12[4] = __PAIR64__(a1, a5);
  if ( a3 )
  {
    for ( i = 0; i < a4; ++i )
    {
      v9 = *(int *)(a3 + 4 * i);
      LODWORD(v12[i + 6]) = v9;
      HIDWORD(v12[i + 6]) = HIDWORD(v9);
    }
  }
  memset(&v11[1], 0, 0x564u);
  v11[0] = 90703184;
  result = SendMessageToWERService(v12, v11);
  if ( result >= 0 )
  {
    if ( result == 258 )
    {
      return -1073741248;
    }
    else
    {
      *a6 = v11[8];
      return 0;
    }
  }
  return result;
}
