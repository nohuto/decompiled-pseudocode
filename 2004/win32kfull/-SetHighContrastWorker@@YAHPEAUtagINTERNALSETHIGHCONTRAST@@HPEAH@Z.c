/*
 * XREFs of ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D7318
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C6090 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01577A0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *a1, int a2, unsigned int *a3)
{
  __int64 v6; // rsi
  const void *v8; // rdx
  __int64 v9; // r15
  unsigned int v10; // esi
  int v11; // r15d
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int128 v14; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-198h]
  unsigned __int16 v16[40]; // [rsp+50h] [rbp-188h] BYREF
  char v17[256]; // [rsp+A0h] [rbp-138h] BYREF

  v6 = *((unsigned __int16 *)a1 + 4);
  if ( (unsigned __int16)v6 >= 0x100u )
    return 0LL;
  v8 = (const void *)*((_QWORD *)a1 + 2);
  if ( v8 )
    memmove(v17, v8, *((unsigned __int16 *)a1 + 4));
  if ( (v6 & 0xFFFFFFFFFFFFFFFEuLL) >= 0x100 )
    _report_rangecheckfailure();
  *(_WORD *)&v17[v6 & 0xFFFFFFFFFFFFFFFEuLL] = 0;
  if ( a2 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v9 = CreateProfileUserName(&v14);
    RtlStringCchPrintfW(v16, 0x28uLL, (size_t *)L"%d", *((unsigned int *)a1 + 1));
    v10 = FastWriteProfileStringW(v9, 29LL, L"Flags", v16);
    *a3 = v10;
    if ( *((_QWORD *)a1 + 2) )
      v10 &= FastWriteProfileStringW(v9, 29LL, L"High Contrast Scheme", v17);
    FreeProfileUserName(v9, &v14);
  }
  else
  {
    *a3 = 1;
    v10 = 0;
  }
  if ( *a3 )
  {
    v11 = gHighContrast[1];
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW((char *)gHighContrastDefaultScheme, 128LL, v17);
    gHighContrast[1] = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    v12 = *((_DWORD *)a1 + 1);
    if ( (v12 & 0x1000) == 0 )
    {
      if ( (v12 & 1) != 0 )
      {
        if ( (v11 & 1) != 0 )
          v13 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 14;
        else
          v13 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 12;
      }
      else
      {
        v13 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 13;
      }
      PostWinlogonMessage(1026LL, v13);
    }
  }
  return v10;
}
