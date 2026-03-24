/*
 * XREFs of EtwpTraceSystemShutdown @ 0x140937A84
 * Callers:
 *     EtwShutdown @ 0x140773FC0 (EtwShutdown.c)
 * Callees:
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     KeQuerySystemTimePrecise @ 0x140278F00 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

char __fastcall EtwpTraceSystemShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  int v5; // [rsp+30h] [rbp-29h] BYREF
  __int64 v6; // [rsp+38h] [rbp-21h] BYREF
  __int64 v7; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp+7h] BYREF
  int *v10; // [rsp+80h] [rbp+27h]
  int v11; // [rsp+88h] [rbp+2Fh]
  int v12; // [rsp+8Ch] [rbp+33h]
  __int64 *v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]

  v6 = 0LL;
  result = KeQuerySystemTimePrecise(&v6, a2, a3, a4);
  if ( (unsigned int)dword_140C02BF0 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C02BF0, 0x400000000000LL);
    if ( result )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v5;
      v7 = v6;
      v11 = 4;
      v13 = &v7;
      v5 = 2;
      v14 = 8;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140C02BF0,
                 (unsigned __int8 *)&byte_14002CADF,
                 0LL,
                 0LL,
                 4u,
                 &v9);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v6;
    UserData.Size = 8;
    return EtwWrite(EtwKernelProvRegHandle, &KernelSystemStop, 0LL, 1u, &UserData);
  }
  return result;
}
