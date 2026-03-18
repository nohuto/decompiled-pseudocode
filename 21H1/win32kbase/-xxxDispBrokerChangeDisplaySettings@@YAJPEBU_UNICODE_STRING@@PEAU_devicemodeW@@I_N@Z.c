/*
 * XREFs of ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0123338
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CBCC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C00971E0 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0122C00 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     _lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator() @ 0x1C01230F8 (_lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_--operator().c)
 */

int __fastcall xxxDispBrokerChangeDisplaySettings(
        const struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        int a3,
        char a4)
{
  int result; // eax
  int v5; // eax
  int v6; // ecx
  _QWORD v7[4]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v8[20]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v9[76]; // [rsp+98h] [rbp-70h] BYREF
  const struct _UNICODE_STRING *v10; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _devicemodeW *v11; // [rsp+200h] [rbp+F8h] BYREF
  int v12; // [rsp+208h] [rbp+100h] BYREF
  char v13; // [rsp+210h] [rbp+108h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v10 = a1;
  memset(v8, 0, 0x48uLL);
  v7[0] = &v13;
  v7[1] = &v12;
  v7[2] = &v11;
  v7[3] = &v10;
  memset(v9, 0, 0x128uLL);
  v9[10] = 7;
  v9[11] = 1;
  result = DrvSampleDisplayState(&v9[12]);
  if ( result >= 0 )
  {
    v9[0] = 19398912;
    LOWORD(v9[1]) = 0x8000;
    result = lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator()((__int64)v7, (unsigned __int64)v9);
    if ( result >= 0 )
    {
      v5 = DispBroker::DispBrokerClient::SyncMessage<8>(
             (__int64)DispBroker::DispBrokerClient::s_pSessionBroker,
             (__int64)v9,
             (__int64)v8);
      v6 = v8[16];
      if ( v5 < 0 )
        return v5;
      return v6;
    }
  }
  return result;
}
