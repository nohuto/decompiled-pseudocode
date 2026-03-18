/*
 * XREFs of McTemplateK0zz_EtwWriteTransfer @ 0x14056370C
 * Callers:
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwIrpPropertySet @ 0x140762C04 (PiSwIrpPropertySet.c)
 *     PiSwIrpSetLifetime @ 0x140762F18 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfacePropertySet @ 0x14084F808 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140860758 (PiSwIrpInterfaceSetState.c)
 *     PiSwCloseDevice @ 0x14095341C (PiSwCloseDevice.c)
 *     PiSwIrpCleanup @ 0x140953700 (PiSwIrpCleanup.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402D1760 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5)
{
  __int64 v5; // rax
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // edx
  const wchar_t *v10; // rcx
  bool v11; // zf
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+4Ch] [rbp-2Ch]
  const wchar_t *v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+5Ch] [rbp-1Ch]

  v5 = -1LL;
  v7 = 10;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v10 = a5;
  v15 = v9;
  v16 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v14 = a4;
  v11 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v5;
    while ( a5[v5] );
    v7 = 2 * v5 + 2;
    v11 = a5 == 0LL;
  }
  if ( v11 )
    v10 = L"NULL";
  v18 = v7;
  v17 = v10;
  v19 = 0;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 3u, &v13);
}
