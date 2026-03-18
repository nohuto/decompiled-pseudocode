/*
 * XREFs of Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0043EE8
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000D328 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C0043910 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 *     WPP_RECORDER_SF_DDDi @ 0x1C0044690 (WPP_RECORDER_SF_DDDi.c)
 */

void __fastcall Bulk_ValidateED0TrbPointerOnMismatch(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // edx
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0;
  if ( Bulk_IsTransferEventLikelyDuplicate_Internal(a1, *(_QWORD *)a2, &v14) )
  {
    v6 = a1[5];
    v7 = *(_QWORD *)(v6 + 336);
    if ( (v7 & 0x4000000000LL) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v8 = 44;
      v9 = a1[7];
      v10 = *(unsigned __int8 *)(a1[6] + 135LL);
LABEL_12:
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(v9 + 80), v10, v5, v8);
      return;
    }
    if ( v14 )
    {
      if ( (v7 & 0x2000000000000LL) != 0 )
      {
        v4 = a1[6];
        if ( *(_DWORD *)(v4 + 20) == 3 )
        {
          v9 = a1[7];
          if ( *(_DWORD *)(v9 + 120) == 6 && (unsigned __int8)(*(_BYTE *)(a2 + 11) - 26) <= 2u )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return;
            v10 = *(unsigned __int8 *)(v4 + 135);
            v8 = 45;
            goto LABEL_12;
          }
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), v4, *(unsigned __int8 *)(a1[6] + 135LL), 46);
      v6 = a1[5];
    }
    v11 = 4128;
    v12 = v6;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), v13, v5, 47);
    }
    v12 = a1[5];
    v11 = 4127;
  }
  Controller_ReportFatalError(v12, 2, v11, 0LL, a1[6], a1[7], (__int64)a1);
}
