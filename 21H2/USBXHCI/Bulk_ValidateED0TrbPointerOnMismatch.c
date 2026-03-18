/*
 * XREFs of Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0044C48
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000AE90 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C00447B8 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 *     WPP_RECORDER_SF_DDDi @ 0x1C00453DC (WPP_RECORDER_SF_DDDi.c)
 */

void __fastcall Bulk_ValidateED0TrbPointerOnMismatch(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rax
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  char v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0;
  if ( Bulk_IsTransferEventLikelyDuplicate_Internal(a1, *(_QWORD *)a2, &v12) )
  {
    v6 = *(_QWORD *)(a1[5] + 336LL);
    if ( (v6 & 0x4000000000LL) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v7 = 44;
      v8 = a1[7];
      v9 = *(unsigned __int8 *)(a1[6] + 135LL);
LABEL_12:
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(v8 + 80), v9, v5, v7);
      return;
    }
    if ( v12 )
    {
      if ( (v6 & 0x2000000000000LL) != 0 )
      {
        v4 = a1[6];
        if ( *(_DWORD *)(v4 + 20) == 3 )
        {
          v8 = a1[7];
          if ( *(_DWORD *)(v8 + 120) == 6 && (unsigned __int8)(*(_BYTE *)(a2 + 11) - 26) <= 2u )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return;
            v9 = *(unsigned __int8 *)(v4 + 135);
            v7 = 45;
            goto LABEL_12;
          }
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), v4, *(unsigned __int8 *)(a1[6] + 135LL), 46);
    }
    v10 = 4128;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), v11, v5, 47);
    }
    v10 = 4127;
  }
  Controller_ReportFatalError(a1[5], 2, v10, 0LL, a1[6], a1[7], (__int64)a1);
}
