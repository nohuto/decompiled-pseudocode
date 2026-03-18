/*
 * XREFs of MiStoreLogWriteCompleteFailure @ 0x1405B657C
 * Callers:
 *     SmIoRequestComplete @ 0x14037ADB8 (SmIoRequestComplete.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x14024A9B0 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void MiStoreLogWriteCompleteFailure()
{
  int v0; // edx
  __int64 v1; // r8
  int v2; // r9d
  __int64 v3; // r10
  int v4; // [rsp+20h] [rbp-68h]
  int v5; // [rsp+28h] [rbp-60h]
  int v6; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+48h] [rbp-40h] BYREF
  int *v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+70h] [rbp-18h]
  int v10; // [rsp+74h] [rbp-14h]

  if ( *(_QWORD *)&qword_140C53448 && **(_DWORD **)&qword_140C53448 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C53448, 2LL) )
    {
      v10 = 0;
      v8 = &v6;
      v6 = v2;
      v9 = 4;
      tlgWriteEx_EtwWriteEx(v3, (unsigned __int8 *)&byte_14002DDDB, v1, v0 - 1, v4, v5, 3u, &v7);
    }
  }
}
