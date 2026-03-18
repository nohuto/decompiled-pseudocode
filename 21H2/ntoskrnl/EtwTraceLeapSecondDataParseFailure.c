/*
 * XREFs of EtwTraceLeapSecondDataParseFailure @ 0x1409E29E8
 * Callers:
 *     ExpReadLeapSecondData @ 0x140857F38 (ExpReadLeapSecondData.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall EtwTraceLeapSecondDataParseFailure(int a1)
{
  int v1; // r9d
  int v2; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+48h] [rbp-38h] BYREF
  int *v5; // [rsp+68h] [rbp-18h]
  int v6; // [rsp+70h] [rbp-10h]
  int v7; // [rsp+74h] [rbp-Ch]
  int v8; // [rsp+90h] [rbp+10h] BYREF

  v8 = a1;
  if ( (unsigned int)dword_140C043E0 > 5 && tlgKeywordOn((__int64)&dword_140C043E0, 0x400000000000LL) )
  {
    v7 = 0;
    v5 = &v2;
    v2 = v1;
    v6 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C043E0, (unsigned __int8 *)byte_140035238, 0LL, 0LL, 3u, &v4);
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v8;
    UserData.Size = 4;
    EtwWrite(EtwKernelProvRegHandle, &KernelLeapSecondDataParseFailure, 0LL, 1u, &UserData);
  }
}
