/*
 * XREFs of ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C012343C
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__&DrvSampleDisplayState_ @ 0x1C0122B38 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__-D.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0122C00 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
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
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // [rsp+28h] [rbp-61h] BYREF
  unsigned int *v13[5]; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v14[20]; // [rsp+58h] [rbp-31h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v15; // [rsp+F0h] [rbp+67h] BYREF
  int v16; // [rsp+F8h] [rbp+6Fh] BYREF
  int v17; // [rsp+100h] [rbp+77h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v12 = a1;
  v5 = 200 * a1 + 80;
  if ( v5 >= 0x7FFF )
    return 2147483653LL;
  v7 = Win32AllocPoolWithQuotaZInit(v5, 0x44535042u);
  v8 = (__int64)v7;
  if ( !v7 )
    return 3221225495LL;
  v13[0] = (unsigned int *)&v12;
  v13[1] = (unsigned int *)&v16;
  v13[2] = (unsigned int *)&v17;
  v13[3] = (unsigned int *)&a5;
  v13[4] = (unsigned int *)&v15;
  InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622___DrvSampleDisplayState_(
    v7,
    v13,
    v5 - 80);
  memset(v14, 0, 0x48uLL);
  v9 = DispBroker::DispBrokerClient::SyncMessage<8>(
         (__int64)DispBroker::DispBrokerClient::s_pSessionBroker,
         v8,
         (__int64)v14);
  Win32FreePool(v8, v10, v11);
  result = v14[16];
  if ( v9 < 0 )
    return (unsigned int)v9;
  return result;
}
