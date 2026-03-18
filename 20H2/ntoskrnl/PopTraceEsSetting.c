/*
 * XREFs of PopTraceEsSetting @ 0x1403CD09C
 * Callers:
 *     PopEsUpdateSetting @ 0x1407CDB28 (PopEsUpdateSetting.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopTraceEsSetting(__int64 a1, int a2, unsigned __int8 a3)
{
  NTSTATUS result; // eax
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140C021E8 > 5 )
  {
    v4 = PopEsMode;
    v5 = a2;
    v8 = &v4;
    v9 = 4LL;
    v10 = &v5;
    v6 = a3;
    v12 = &v6;
    v11 = 4LL;
    v13 = 4LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C021E8,
             (unsigned __int8 *)byte_140027663,
             0LL,
             0LL,
             5u,
             &v7);
  }
  return result;
}
