/*
 * XREFs of CmLogTmRmAction @ 0x14074C438
 * Callers:
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpTransWriteLog @ 0x14074C508 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x14074C7F8 (HvBufferCheckSum.c)
 */

NTSTATUS __fastcall CmLogTmRmAction(__int64 a1, __int64 a2, int a3)
{
  bool v4; // zf
  __int128 v5; // xmm0
  NTSTATUS result; // eax
  CLFS_LSN plsnFlush; // [rsp+30h] [rbp-50h] BYREF
  CLFS_LSN plsnLastFlushed; // [rsp+38h] [rbp-48h] BYREF
  int v9[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+50h] [rbp-30h]
  __int128 v11; // [rsp+60h] [rbp-20h]

  v9[0] = 0;
  plsnFlush.ullOffset = 0LL;
  plsnLastFlushed.ullOffset = 0LL;
  v4 = *(_QWORD *)(a1 + 96) == 0LL;
  v11 = 0LL;
  if ( v4 )
    return 0;
  v5 = *(_OWORD *)(a2 + 88);
  v9[3] = 0;
  v9[1] = 48;
  v10 = v5;
  v9[2] = a3;
  v9[0] = HvBufferCheckSum(v9, 48LL);
  result = CmpTransWriteLog(a1, (int)v9, 48, 2, &plsnFlush);
  if ( result >= 0 )
    return ClfsFlushToLsn(*(PVOID *)(a1 + 96), &plsnFlush, &plsnLastFlushed);
  return result;
}
