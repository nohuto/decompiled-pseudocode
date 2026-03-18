/*
 * XREFs of Control_ValidateED0TrbPointerOnMismatch @ 0x1C003F644
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C0017E20 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C003F1EC (WPP_RECORDER_SF_DDi.c)
 */

void __fastcall Control_ValidateED0TrbPointerOnMismatch(_QWORD *a1, signed __int64 *a2)
{
  signed __int64 v2; // rax
  __int64 v4; // rcx
  signed __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r8d

  v2 = *a2;
  v4 = a1[22];
  v5 = *(_QWORD *)(v4 + 24);
  if ( *a2 < v5 || v2 >= v5 + *(unsigned int *)(v4 + 40) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = a1[6];
      v14 = *(unsigned __int8 *)(v13 + 135);
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(a1[7] + 80LL),
        v13,
        v14,
        14,
        (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
        v14,
        *(_DWORD *)(a1[7] + 144LL),
        v2);
    }
    v12 = a1[5];
    v11 = 4127;
    goto LABEL_12;
  }
  v6 = a1[5];
  if ( (*(_QWORD *)(v6 + 336) & 0x4000000000LL) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = a1[6];
      v10 = *(unsigned __int8 *)(v9 + 135);
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(a1[7] + 80LL),
        v9,
        v10,
        13,
        (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
        v10,
        *(_DWORD *)(a1[7] + 144LL),
        v2);
      v6 = a1[5];
    }
    v11 = 4128;
    v12 = v6;
LABEL_12:
    Controller_ReportFatalError(v12, 2, v11, 0LL, a1[6], a1[7], (__int64)a1);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = a1[6];
    v8 = *(unsigned __int8 *)(v7 + 135);
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(a1[7] + 80LL),
      v7,
      v8,
      12,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      v8,
      *(_DWORD *)(a1[7] + 144LL),
      v2);
  }
}
