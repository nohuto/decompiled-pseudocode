/*
 * XREFs of EtwpTraceSystemShutdown @ 0x14093A2B4
 * Callers:
 *     EtwShutdown @ 0x1407700F0 (EtwShutdown.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     KeQuerySystemTimePrecise @ 0x1402D6A70 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

char EtwpTraceSystemShutdown()
{
  char result; // al
  int v1; // [rsp+30h] [rbp-29h] BYREF
  LARGE_INTEGER v2; // [rsp+38h] [rbp-21h] BYREF
  LARGE_INTEGER v3; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+60h] [rbp+7h] BYREF
  int *v6; // [rsp+80h] [rbp+27h]
  int v7; // [rsp+88h] [rbp+2Fh]
  int v8; // [rsp+8Ch] [rbp+33h]
  LARGE_INTEGER *v9; // [rsp+90h] [rbp+37h]
  int v10; // [rsp+98h] [rbp+3Fh]
  int v11; // [rsp+9Ch] [rbp+43h]

  v2.QuadPart = 0LL;
  result = KeQuerySystemTimePrecise(&v2).LowPart;
  if ( (unsigned int)dword_140C02B78 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C02B78, 0x400000000000LL);
    if ( result )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v1;
      v3 = v2;
      v7 = 4;
      v9 = &v3;
      v1 = 2;
      v10 = 8;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140C02B78,
                 (unsigned __int8 *)word_14002BA42,
                 0LL,
                 0LL,
                 4u,
                 &v5);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v2;
    UserData.Size = 8;
    return EtwWrite(EtwKernelProvRegHandle, &KernelSystemStop, 0LL, 1u, &UserData);
  }
  return result;
}
