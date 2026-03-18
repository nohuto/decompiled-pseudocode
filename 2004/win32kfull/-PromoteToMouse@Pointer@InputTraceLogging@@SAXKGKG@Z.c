/*
 * XREFs of ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x1C0219A08
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C021A064 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C021A270 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D2934 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall InputTraceLogging::Pointer::PromoteToMouse(int a1, __int16 a2, int a3, unsigned __int16 a4)
{
  __int16 v4; // [rsp+30h] [rbp-29h] BYREF
  int v5; // [rsp+34h] [rbp-25h] BYREF
  int v6; // [rsp+38h] [rbp-21h] BYREF
  int v7; // [rsp+3Ch] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-19h] BYREF
  int *v9; // [rsp+60h] [rbp+7h]
  __int64 v10; // [rsp+68h] [rbp+Fh]
  __int16 *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  int *v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  int *v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0330B30 > 4 && (qword_1C0330B40 & 0x20) != 0 && (qword_1C0330B48 & 0x20) == qword_1C0330B48 )
  {
    v6 = a3;
    v15 = &v5;
    v4 = a2;
    v13 = &v6;
    v7 = a1;
    v11 = &v4;
    v5 = a4;
    v9 = &v7;
    v16 = 4LL;
    v14 = 4LL;
    v12 = 2LL;
    v10 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0330B30, (unsigned __int8 *)dword_1C02F1346, 0LL, 0LL, 6u, &v8);
  }
}
