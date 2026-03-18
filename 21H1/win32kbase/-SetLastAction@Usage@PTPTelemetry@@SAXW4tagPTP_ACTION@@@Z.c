/*
 * XREFs of ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1C01AA148
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A9640 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     EtwTraceTouchpadGestureDetected @ 0x1C012F1F0 (EtwTraceTouchpadGestureDetected.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@334@Z @ 0x1C01A7F80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

char __fastcall PTPTelemetry::Usage::SetLastAction(int a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  signed __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  int v12; // [rsp+50h] [rbp-9h] BYREF
  int v13; // [rsp+54h] [rbp-5h] BYREF
  int v14; // [rsp+58h] [rbp-1h] BYREF
  LONGLONG v15; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+70h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+78h] [rbp+1Fh] BYREF
  int *v19; // [rsp+98h] [rbp+3Fh]
  __int64 v20; // [rsp+A0h] [rbp+47h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = (unsigned __int64)(1000
                        * (PerformanceCounter.QuadPart - _InterlockedCompareExchange64(&qword_1C0256DC0, 0LL, 0LL)))
     / gliQpcFreq.QuadPart;
  if ( v3 <= 500 )
  {
    _InterlockedCompareExchange64(&qword_1C0256DB0, 0LL, 0LL);
    LOBYTE(v3) = _InterlockedCompareExchange64(&qword_1C0256DB8, 0LL, 0LL);
    if ( (unsigned int)dword_1C024B250 > 5 )
    {
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C024B250, 0x400000000000LL);
      if ( (_BYTE)v3 )
      {
        v12 = dword_1C0256DCC;
        v8 = v4 - v7;
        v13 = a1;
        v9 = 1000 * (v4 - v7);
        v10 = v4 - v6;
        v17 = v5;
        v15 = v9 / gliQpcFreq.QuadPart;
        v16 = (unsigned __int64)(1000 * v10) / gliQpcFreq.QuadPart;
        LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                       v8,
                       byte_1C022000A,
                       v10,
                       v5,
                       (__int64)&v17,
                       (__int64)&v13,
                       (__int64)&v16,
                       (__int64)&v15,
                       (__int64)&v12);
      }
    }
  }
  if ( dword_1C0252D18 || qword_1C0252D00 || PTPTelemetry::Usage::gTPTelemTimings <= 0 )
    dword_1C0252D1C = a1;
  else
    dword_1C0252D18 = a1;
  if ( a1 > 12 )
  {
    if ( a1 > 21 )
    {
      switch ( a1 )
      {
        case 22:
          ++dword_1C0259AAC;
          ++dword_1C0259AEC;
          goto LABEL_57;
        case 23:
          ++dword_1C0259AD4;
          break;
        case 24:
          ++dword_1C0259AD8;
          break;
        case 25:
          ++dword_1C0259A9C;
          break;
        default:
          goto LABEL_57;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 21:
          ++dword_1C0259AB4;
          break;
        case 16:
          ++dword_1C0259AA8;
          break;
        case 17:
          ++dword_1C0259AB8;
          break;
        case 18:
          ++dword_1C0259AA0;
          break;
        case 19:
          ++dword_1C0259AA4;
          break;
        case 20:
          ++dword_1C0259AB0;
          break;
        default:
          goto LABEL_57;
      }
    }
LABEL_20:
    ++dword_1C0259AEC;
    goto LABEL_57;
  }
  if ( a1 == 12 )
  {
    ++dword_1C0259AE0;
    goto LABEL_20;
  }
  if ( a1 <= 6 )
  {
    switch ( a1 )
    {
      case 6:
        ++dword_1C0259AC0;
        break;
      case 1:
        ++dword_1C0259AC4;
        break;
      case 2:
        ++dword_1C0259AC8;
        break;
      case 3:
        ++dword_1C0259ACC;
        break;
      case 4:
        ++dword_1C0259AD0;
        break;
      case 5:
        ++dword_1C0259ABC;
        break;
      default:
        goto LABEL_57;
    }
    goto LABEL_20;
  }
  if ( a1 == 7 )
  {
    ++dword_1C0259A94;
    goto LABEL_20;
  }
  if ( a1 == 8 )
  {
    ++dword_1C0259A98;
    goto LABEL_20;
  }
  if ( a1 != 9 )
  {
    if ( a1 == 10 )
    {
      ++dword_1C0259AE4;
      return v3;
    }
    ++dword_1C0259ADC;
    goto LABEL_20;
  }
  ++PTPTelemetry::Usage::gTPTelemState;
  ++dword_1C0259AEC;
  LOBYTE(v3) = EtwTraceTouchpadGestureDetected(0LL);
LABEL_57:
  if ( (unsigned int)dword_1C024B250 > 5 )
  {
    v14 = a1;
    v19 = &v14;
    v20 = 4LL;
    LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                   (__int64)&dword_1C024B250,
                   (unsigned __int8 *)dword_1C0220073,
                   0LL,
                   0LL,
                   3u,
                   &v18);
  }
  return v3;
}
