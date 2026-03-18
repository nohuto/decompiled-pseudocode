/*
 * XREFs of PoTraceForceIdleReset @ 0x14056E2B8
 * Callers:
 *     KiResetForceIdle @ 0x140521B40 (KiResetForceIdle.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall PoTraceForceIdleReset(int a1)
{
  int v1; // r9d
  REGHANDLE v2; // rbx
  int v3; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+Fh] BYREF
  GUID v5; // [rsp+58h] [rbp+1Fh] BYREF
  int *v6; // [rsp+78h] [rbp+3Fh]
  int v7; // [rsp+80h] [rbp+47h]
  int v8; // [rsp+84h] [rbp+4Bh]
  int v9; // [rsp+A0h] [rbp+67h] BYREF

  v9 = a1;
  if ( (unsigned int)dword_140C021E8 > 5 && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
  {
    v8 = 0;
    v6 = &v3;
    v3 = v1;
    v7 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C021E8,
      (unsigned __int8 *)byte_140026D78,
      0LL,
      0LL,
      3u,
      (PEVENT_DATA_DESCRIPTOR)&v5);
  }
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_FORCEIDLE_RESET) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      EtwWriteEx(v2, &POP_ETW_FORCEIDLE_RESET, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
