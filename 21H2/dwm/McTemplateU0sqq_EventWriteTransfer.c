/*
 * XREFs of McTemplateU0sqq_EventWriteTransfer @ 0x14000D784
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x14000D53C (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x14000D71C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0sqq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-50h] BYREF
  const char *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  v13 = a4;
  v8 = 36LL;
  v7 = "SharedMessagePortRefPtr::Initialize";
  v9 = &v13;
  v11 = &a5;
  v10 = 4LL;
  v12 = 4LL;
  return McGenEventWrite_EventWriteTransfer(a1, a2, a3, a4, &v6);
}
