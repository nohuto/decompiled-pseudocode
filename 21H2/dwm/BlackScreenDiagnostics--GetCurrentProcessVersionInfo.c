/*
 * XREFs of BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x1400088AC
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     memset_0 @ 0x14000430C (memset_0.c)
 *     memmove_0 @ 0x140004AE3 (memmove_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400075FC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140008458 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000849C (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x140008590 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x14000861C (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1400097D4 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000A064 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::GetCurrentProcessVersionInfo(_QWORD *a1, __int64 a2, __int64 a3)
{
  _WORD *v4; // rdi
  HANDLE CurrentProcess; // rax
  __int64 v6; // r8
  DWORD v7; // eax
  __int64 v8; // rcx
  const WCHAR *v9; // rcx
  DWORD FileVersionInfoSizeW; // eax
  DWORD v11; // eax
  __int64 v12; // rcx
  const WCHAR *v13; // rcx
  const void *v14; // rdi
  DWORD LastError; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  char *v20; // rdi
  __int64 v21; // rbx
  DWORD dwSize[2]; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID lpBuffer; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID lpData; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+60h] [rbp-A8h]
  LPCWSTR lptstrFilename[3]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp-80h]
  _OWORD Src[3]; // [rsp+90h] [rbp-78h] BYREF
  __int16 v29; // [rsp+C0h] [rbp-48h]
  WCHAR ExeName[264]; // [rsp+C8h] [rbp-40h] BYREF

  if ( a1[3] < 7uLL )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
      (__int64)a1,
      7uLL,
      a3,
      L"Unknown");
  }
  else
  {
    v4 = a1;
    if ( a1[3] >= 8uLL )
      v4 = (_WORD *)*a1;
    a1[2] = 7LL;
    memmove_0(v4, L"Unknown", 0xEuLL);
    v4[7] = 0;
  }
  dwSize[0] = 260;
  memset_0(ExeName, 0, 0x208uLL);
  CurrentProcess = GetCurrentProcess();
  if ( QueryFullProcessImageNameW(CurrentProcess, 0, ExeName, dwSize) )
  {
    std::wstring::wstring((char *)lptstrFilename, ExeName, v6);
    v9 = (const WCHAR *)lptstrFilename;
    if ( v27 >= 8 )
      v9 = lptstrFilename[0];
    FileVersionInfoSizeW = GetFileVersionInfoSizeW(v9, 0LL);
    if ( FileVersionInfoSizeW )
    {
      std::vector<unsigned char>::vector<unsigned char>(&lpData, FileVersionInfoSizeW);
      v13 = (const WCHAR *)lptstrFilename;
      v14 = lpData;
      if ( v27 >= 8 )
        v13 = lptstrFilename[0];
      if ( GetFileVersionInfoW(v13, 0, v25 - (_DWORD)lpData, lpData) )
      {
        lpBuffer = 0LL;
        dwSize[1] = 0;
        if ( VerQueryValueW(v14, L"\\", &lpBuffer, &dwSize[1]) )
        {
          memset(Src, 0, sizeof(Src));
          v29 = 0;
          StringCchPrintfW(
            (unsigned __int16 *)Src,
            0x19uLL,
            (size_t *)L"%hu.%hu.%hu.%hu",
            *((unsigned __int16 *)lpBuffer + 5),
            *((unsigned __int16 *)lpBuffer + 4),
            *((unsigned __int16 *)lpBuffer + 7),
            *((unsigned __int16 *)lpBuffer + 6));
          v19 = -1LL;
          do
            ++v19;
          while ( *((_WORD *)Src + v19) );
          if ( v19 > a1[3] )
          {
            std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
              (__int64)a1,
              v19,
              v18,
              Src);
          }
          else
          {
            v20 = (char *)a1;
            if ( a1[3] >= 8uLL )
              v20 = (char *)*a1;
            a1[2] = v19;
            v21 = 2 * v19;
            memmove_0(v20, Src, 2 * v19);
            *(_WORD *)&v20[v21] = 0;
          }
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgs(v17, 0LL, 0LL);
        }
      }
      else
      {
        LastError = GetLastError();
        MicrosoftTelemetryAssertTriggeredArgs(v16, LastError, 0LL);
      }
      std::vector<unsigned char>::_Tidy(&lpData);
    }
    else
    {
      v11 = GetLastError();
      MicrosoftTelemetryAssertTriggeredArgs(v12, v11, 0LL);
    }
    if ( v27 >= 8 )
      std::_Deallocate<16,0>((char *)lptstrFilename[0], 2 * v27 + 2);
  }
  else
  {
    v7 = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v8, v7, 0LL);
  }
}
