/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x1405DF2C8
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1405DE998 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpCleanupLightWeightPrepare @ 0x1405DF3A4 (CmpCleanupLightWeightPrepare.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140664390 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x1406643BC (LOCK_TRANSACTION_LIST.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1, __int64 a2)
{
  __int64 NextElement; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_14002339D, 0LL, 0LL, 2u, v10);
  if ( a1 )
  {
    LOCK_TRANSACTION_LIST();
    *(_DWORD *)(a1 + 48) |= 1u;
    UNLOCK_TRANSACTION_LIST();
    v9 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v9, 0LL);
      if ( !NextElement )
        break;
      v7 = CmpProcessLightWeightUOW(NextElement, 0LL, v5, a2);
      if ( v7 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1, v6, a2);
        goto LABEL_8;
      }
    }
  }
  v7 = 0;
LABEL_8:
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)&dword_14002336C, 0LL, 0LL, 2u, v10);
  return (unsigned int)v7;
}
