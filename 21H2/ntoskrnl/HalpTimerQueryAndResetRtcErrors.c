/*
 * XREFs of HalpTimerQueryAndResetRtcErrors @ 0x14038DA10
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

bool __fastcall HalpTimerQueryAndResetRtcErrors(char a1)
{
  __int32 v1; // ebx
  int v2; // eax
  __int64 v4; // r8
  __int64 v5; // r8
  int v6; // [rsp+20h] [rbp-39h]
  int v7; // [rsp+28h] [rbp-31h]
  __int32 v8; // [rsp+40h] [rbp-19h] BYREF
  __int32 v9; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-11h] BYREF
  __int32 *v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+74h] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+78h] [rbp+1Fh] BYREF
  __int32 *v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+A0h] [rbp+47h]
  int v17; // [rsp+A4h] [rbp+4Bh]

  v1 = _InterlockedExchange(&HalpTimerRtcErrorCode, 0);
  if ( a1 )
  {
    if ( (unsigned int)dword_140C02E38 > 5 && tlgKeywordOn((__int64)&dword_140C02E38, 0x400000000000LL) )
    {
      v13 = 0;
      v11 = &v8;
      v8 = v1;
      v12 = 4;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140C02E38, (unsigned __int8 *)&byte_140022839, v4, 1u, v6, v7, 3u, &v10);
    }
    v2 = 9;
  }
  else
  {
    if ( (unsigned int)dword_140C02E38 > 5 && tlgKeywordOn((__int64)&dword_140C02E38, 0x400000000000LL) )
    {
      v17 = 0;
      v15 = &v9;
      v9 = v1;
      v16 = 4;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140C02E38, (unsigned __int8 *)&word_1400227FE, v5, 1u, v6, v7, 3u, &v14);
    }
    v2 = 31;
  }
  return (v2 & v1) != 0;
}
