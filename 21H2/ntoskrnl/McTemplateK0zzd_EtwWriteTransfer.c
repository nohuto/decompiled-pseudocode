/*
 * XREFs of McTemplateK0zzd_EtwWriteTransfer @ 0x1405637DC
 * Callers:
 *     PiCMGetDeviceIdList @ 0x1406CFE50 (PiCMGetDeviceIdList.c)
 *     PiSwIrpPropertySet @ 0x140762C04 (PiSwIrpPropertySet.c)
 *     PiSwIrpSetLifetime @ 0x140762F18 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfacePropertySet @ 0x14084F808 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140860758 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpCleanup @ 0x140953700 (PiSwIrpCleanup.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402D1760 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zzd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6)
{
  __int64 v6; // rax
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  const wchar_t *v11; // rcx
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  const wchar_t *v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+58h] [rbp-30h]
  int v20; // [rsp+5Ch] [rbp-2Ch]
  char *v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+68h] [rbp-20h]

  v6 = -1LL;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v11 = a5;
  v16 = v10;
  v17 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = a4;
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v8 = 2 * v6 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  v19 = v8;
  v18 = v11;
  v21 = &a6;
  v20 = 0;
  v22 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 4u, &v14);
}
