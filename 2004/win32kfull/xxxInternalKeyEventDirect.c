/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C003AC50
 * Callers:
 *     xxxSendInput @ 0x1C003A9BC (xxxSendInput.c)
 * Callees:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C003AEFC (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00EB62C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D5148 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int16 a2, char a3, int a4, __int64 a5)
{
  __int64 v9; // rdx
  __int16 v10; // cx
  __int64 v11; // r9
  _WORD *v12; // r8
  __int16 v14; // cx
  __int16 v15; // ax
  ULONG v16; // eax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+48h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput
    && (PsGetCurrentProcess() == gpepCSRSS || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 880LL), 0x20u)) )
  {
    if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1) )
    {
      MSGLUA_GPQFOREGROUND();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (unsigned int)&WPP_6364ce0f1f553625c01e28e6d30a6cdc_Traceguids,
          2,
          20,
          11,
          (__int64)&WPP_6364ce0f1f553625c01e28e6d30a6cdc_Traceguids);
      return 1LL;
    }
    if ( (unsigned int)dword_1C0330B30 > 4 )
    {
      v9 = 0x4000LL;
      if ( (qword_1C0330B40 & 0x4000) != 0 && (qword_1C0330B48 & 0x4000) == qword_1C0330B48 )
      {
        v17 = (__int64)"SendInput";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (int)&dword_1C0330B30,
          (__int64)&v17);
      }
    }
    LOBYTE(v18) = a2;
    *((_QWORD *)&v18 + 1) = 0LL;
    if ( (a3 & 8) != 0 )
    {
      LOBYTE(v9) = (a3 & 1) != 0 ? 0xE0 : 0;
      a1 = VKFromVSC(&v18, v9, 256LL);
      v10 = a1;
      WORD1(v18) = a1;
    }
    else
    {
      switch ( a1 )
      {
        case 0x10u:
          a1 = ((a2 & 0x7F) == 54) - 96;
          break;
        case 0x11u:
          a1 = a3 & 1 | 0xA2;
          break;
        case 0x12u:
          a1 = a3 & 1 | 0xA4;
          break;
      }
      v10 = a1 | 0x2000;
      WORD1(v18) = v10;
      if ( a1 == 0xA1 )
      {
        v10 |= 0x100u;
        WORD1(v18) = v10;
      }
    }
    if ( (a3 & 2) != 0 )
    {
      v10 |= 0x8000u;
      WORD1(v18) = v10;
    }
    if ( (a3 & 4) != 0 )
    {
      v15 = 4096;
      LOWORD(v18) = a2;
    }
    else
    {
      if ( (a3 & 1) != 0 )
      {
        v14 = v10 | 0x100;
LABEL_29:
        WORD1(v18) = v14;
        goto LABEL_23;
      }
      if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
      {
        if ( !ausNumPadCvt )
        {
LABEL_23:
          WORD1(v19) = (unsigned __int8)a2;
          WORD2(v19) = (a3 & 2) != 0;
          if ( (a3 & 1) != 0 )
            WORD2(v19) = ((a3 & 2) != 0) | 2;
          LOWORD(v19) = -2;
          WORD3(v19) = 0;
          DWORD2(v19) = a5;
          gppiInputProvider = *(_QWORD *)(gptiCurrent + 416LL);
          DWORD1(v18) = a4;
          xxxProcessKeyEvent(&v18, a5, 1LL, 0LL, 0LL, 0LL);
          return 1LL;
        }
        v11 = 0LL;
        v12 = (_WORD *)ausNumPadCvt;
        while ( a1 != *(_BYTE *)v12 )
        {
          ++v11;
          v12 = (_WORD *)((char *)&ausNumPadCvt + 2 * v11);
          if ( !*v12 )
            goto LABEL_23;
        }
      }
      v15 = 2048;
    }
    v14 = v15 | v10;
    goto LABEL_29;
  }
  v16 = RtlNtStatusToDosError(-1073741790);
  UserSetLastError(v16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (unsigned int)&WPP_6364ce0f1f553625c01e28e6d30a6cdc_Traceguids,
      2,
      20,
      10,
      (__int64)&WPP_6364ce0f1f553625c01e28e6d30a6cdc_Traceguids);
  return 0LL;
}
