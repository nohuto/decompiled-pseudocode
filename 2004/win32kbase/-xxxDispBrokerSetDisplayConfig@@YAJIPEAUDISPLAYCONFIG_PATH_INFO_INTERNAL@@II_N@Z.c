/*
 * XREFs of ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C011CF7C
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__&DrvSampleDisplayState_ @ 0x1C011C678 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__-D.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C011C740 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 */

__int64 __fastcall xxxDispBrokerSetDisplayConfig(
        int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        int a3,
        int a4,
        bool a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  _WORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  int v10; // ebx
  int v11; // [rsp+28h] [rbp-61h] BYREF
  unsigned int *v12[5]; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v13[20]; // [rsp+58h] [rbp-31h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v14; // [rsp+F0h] [rbp+67h] BYREF
  int v15; // [rsp+F8h] [rbp+6Fh] BYREF
  int v16; // [rsp+100h] [rbp+77h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v11 = a1;
  v5 = 200 * a1 + 80;
  if ( v5 >= 0x7FFF )
    return 2147483653LL;
  v7 = Win32AllocPoolWithQuotaZInit(v5, 0x44535042u);
  v8 = (__int64)v7;
  if ( !v7 )
    return 3221225495LL;
  v12[0] = (unsigned int *)&v11;
  v12[1] = (unsigned int *)&v15;
  v12[2] = (unsigned int *)&v16;
  v12[3] = (unsigned int *)&a5;
  v12[4] = (unsigned int *)&v14;
  InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622___DrvSampleDisplayState_(
    v7,
    v12,
    v5 - 80);
  memset(v13, 0, 0x48uLL);
  v10 = DispBroker::DispBrokerClient::SyncMessage<8>(
          (__int64)DispBroker::DispBrokerClient::s_pSessionBroker,
          v8,
          (__int64)v13,
          v9);
  Win32FreePool(v8);
  result = v13[16];
  if ( v10 < 0 )
    return (unsigned int)v10;
  return result;
}
