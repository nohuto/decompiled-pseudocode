/*
 * XREFs of McTemplateK0pq_EtwWriteTransfer @ 0x1C0035254
 * Callers:
 *     Controller_D0EntryRestoreState @ 0x1C0030AF4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0030E1C (Controller_D0ExitSaveState.c)
 *     Controller_InternalReset @ 0x1C00322D8 (Controller_InternalReset.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0034F4C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0pq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  int *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  __int64 v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 8;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 3u, &v6);
}
