/*
 * XREFs of McTemplateK0dz_EtwWriteTransfer @ 0x1405100C8
 * Callers:
 *     PiCMQueryRemove @ 0x14072EEE8 (PiCMQueryRemove.c)
 *     PipProcessStartPhase2 @ 0x14073DEBC (PipProcessStartPhase2.c)
 *     PipProcessStartPhase1 @ 0x14073E02C (PipProcessStartPhase1.c)
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 *     PipProcessRestartPhase1 @ 0x1408B53CC (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x1408B5490 (PipProcessRestartPhase2.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14036EFF4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        const wchar_t *a5)
{
  const wchar_t *v5; // rcx
  __int64 v7; // rax
  int v8; // edx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-48h] BYREF
  int *v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  const wchar_t *v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]
  int v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = a4;
  v5 = a5;
  v11 = &v16;
  v12 = 4LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v14 = v8;
  v15 = 0;
  if ( !a5 )
    v5 = L"NULL";
  v13 = v5;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 3u, &v10);
}
