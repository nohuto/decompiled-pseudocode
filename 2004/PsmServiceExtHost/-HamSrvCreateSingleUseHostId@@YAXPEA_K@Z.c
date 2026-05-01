/*
 * XREFs of ?HamSrvCreateSingleUseHostId@@YAXPEA_K@Z @ 0x1800792E8
 * Callers:
 *     HamRpcSrvCreateSingleUseHostId @ 0x180080490 (HamRpcSrvCreateSingleUseHostId.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x1800274E4 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

void __fastcall HamSrvCreateSingleUseHostId(unsigned __int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // r8
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v1 = HamObjectIdGenerate(0);
  *v2 = v1;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v10 = 0;
      v8 = &v6;
      v6 = v5;
      v9 = v3;
      tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18009FE72, 0LL, 0LL, 3u, &v7);
    }
  }
}
