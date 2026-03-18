/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x14075E654
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140653348 (CmpCommitLightWeightTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x140710620 (CmpRollbackLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x140653428 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x14075E700 (CmpTransMgrRollback.c)
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_1400223B3, 0LL, 0LL, 2u, &v9);
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v3);
    CmpCleanupLightWeightTransaction(v2, 8);
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
        (unsigned __int8 *)&dword_14002234C,
        0LL,
        0LL,
        3u,
        &v5);
    }
  }
}
