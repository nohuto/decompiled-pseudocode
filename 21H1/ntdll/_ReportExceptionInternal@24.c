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

int __fastcall ReportExceptionInternal(int a1, int a2, int a3, unsigned int a4, int a5, _DWORD *a6)
{
  int result; // eax
  unsigned int i; // ecx
  __int64 v9; // rax
  size_t v10; // [esp-4h] [ebp-AECh]
  size_t v11; // [esp-4h] [ebp-AECh]
  _DWORD v13[346]; // [esp+10h] [ebp-AD8h] BYREF
  _DWORD v14[10]; // [esp+578h] [ebp-570h] BYREF
  __int64 v15; // [esp+5A0h] [ebp-548h]
  _DWORD v16[335]; // [esp+5A8h] [ebp-540h]

  *a6 = 0;
  if ( a4 > 5 )
    return -1073740757;
  LODWORD(v10) = 1384;
  memset(v14, 0, v10);
  v14[9] = a1;
  v15 = a2;
  v14[0] = 90703184;
  v14[6] = 0x20000000;
  v14[8] = a5;
  if ( a3 )
  {
    for ( i = 0; i < a4; ++i )
    {
      v9 = *(int *)(a3 + 4 * i);
      v16[2 * i] = v9;
      v16[2 * i + 1] = HIDWORD(v9);
    }
  }
  LODWORD(v11) = 1380;
  memset(&v13[1], 0, v11);
  v13[0] = 90703184;
  result = SendMessageToWERService(v14, v13);
  if ( result >= 0 )
  {
    if ( result == 258 )
    {
      return -1073741248;
    }
    else
    {
      *a6 = v13[8];
      return 0;
    }
  }
  return result;
}
