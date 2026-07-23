/*
 * XREFs of CmLogTmRmAction @ 0x140763C88
 * Callers:
 *     CmKtmNotification @ 0x1405E11C0 (CmKtmNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpTransWriteLog @ 0x140763D58 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x140764048 (HvBufferCheckSum.c)
 */

NTSTATUS __fastcall CmLogTmRmAction(__int64 a1, __int64 a2, int a3)
{
  __int128 v4; // xmm0
  NTSTATUS result; // eax
  CLFS_LSN plsnFlush; // [rsp+30h] [rbp-50h] BYREF
  CLFS_LSN plsnLastFlushed; // [rsp+38h] [rbp-48h] BYREF
  int v8[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v9; // [rsp+50h] [rbp-30h]
  __int128 v10; // [rsp+60h] [rbp-20h]

  plsnFlush.ullOffset = 0LL;
  plsnLastFlushed.ullOffset = 0LL;
  if ( !*(_QWORD *)(a1 + 96) )
    return 0;
  v8[0] = 0;
  v8[3] = 0;
  v10 = 0LL;
  v8[1] = 48;
  v4 = *(_OWORD *)(a2 + 88);
  v8[2] = a3;
  v9 = v4;
  v8[0] = HvBufferCheckSum(v8, 48LL);
  result = CmpTransWriteLog(a1, (int)v8, 48, 2, &plsnFlush);
  if ( result >= 0 )
    return ClfsFlushToLsn(*(PVOID *)(a1 + 96), &plsnFlush, &plsnLastFlushed);
  return result;
}
