/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x1406584F8
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140656638 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpProcessLightWeightUOW @ 0x140658270 (CmpProcessLightWeightUOW.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406585D4 (CmpCleanupLightWeightPrepare.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14068E730 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14068E75C (LOCK_TRANSACTION_LIST.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1, struct _LOOKASIDE_LIST_EX *a2)
{
  __int64 NextElement; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_14002227D, 0LL, 0LL, 2u, v10);
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)&dword_14002224C, 0LL, 0LL, 2u, v10);
  return (unsigned int)v7;
}
