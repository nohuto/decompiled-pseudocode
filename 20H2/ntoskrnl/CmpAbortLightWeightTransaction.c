/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x14076CCC4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1406A10F8 (CmpCommitLightWeightTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406E2860 (CmpRollbackLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A1210 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x14076CD70 (CmpTransMgrRollback.c)
 */

void __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  _QWORD *v2; // rbx
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-60h] BYREF
  int *v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+64h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+68h] [rbp-30h] BYREF

  v3 = 0;
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_140022513, 0LL, 0LL, 2u, &v9);
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v3);
    CmpCleanupLightWeightTransaction(v2, 8u);
  }
  if ( (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    {
      v8 = 0;
      v4 = v3;
      v7 = 4;
      v6 = &v4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)&dword_1400224AC,
        0LL,
        0LL,
        3u,
        &v5);
    }
  }
}
