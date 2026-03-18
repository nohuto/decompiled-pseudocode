/*
 * XREFs of PnpTraceInterruptConnection @ 0x1408178F8
 * Callers:
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140817258 (IopConnectInterrupt.c)
 * Callees:
 *     _tlgWriteAgg @ 0x1402A1A20 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void PnpTraceInterruptConnection()
{
  __int64 v0; // r8
  int v1; // r9d
  char v2; // r10
  char v3; // [rsp+30h] [rbp-29h] BYREF
  __int64 v4; // [rsp+38h] [rbp-21h] BYREF
  __int64 v5; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  char *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  __int64 *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140C06550 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C06550, 0x400000000000LL) )
    {
      v8 = 8LL;
      v4 = (unsigned int)(v1 - 4);
      v7 = &v4;
      v10 = v4;
      v9 = &v3;
      v3 = v2;
      v11 = &v5;
      v5 = 0x1000000LL;
      v12 = 8LL;
      tlgWriteAgg((__int64)&dword_140C06550, (unsigned __int8 *)&byte_14002BCFD, v0, v1, &v6);
    }
  }
}
