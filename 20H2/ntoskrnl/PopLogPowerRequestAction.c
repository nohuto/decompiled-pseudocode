/*
 * XREFs of PopLogPowerRequestAction @ 0x14062C1F0
 * Callers:
 *     PopStatsMarkPowerRequestInactive @ 0x14071CBD0 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsMarkPowerRequestActive @ 0x14071CD70 (PopStatsMarkPowerRequestActive.c)
 *     PdcPoPowerRequestBlockingCallback @ 0x14071D020 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsCreatePowerRequest @ 0x14071D224 (PopStatsCreatePowerRequest.c)
 *     PopStatsDeletePowerRequest @ 0x14071DE44 (PopStatsDeletePowerRequest.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F8EB0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x14023CD10 (_tlgCreate1Sz_char.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14023D318 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

int __fastcall PopLogPowerRequestAction(const CHAR *a1, __int64 a2)
{
  __int64 v2; // rax
  const size_t *v3; // r9
  int v4; // r11d
  int v5; // r10d
  int v7; // [rsp+30h] [rbp-29h] BYREF
  int v8; // [rsp+34h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v10[16]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v11[16]; // [rsp+70h] [rbp+17h] BYREF
  int *v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+8Ch] [rbp+33h]
  int *v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  if ( a2 )
    v2 = *(_QWORD *)(a2 + 144);
  if ( (unsigned int)dword_140C021E8 > 5 )
  {
    tlgCreate1Sz_char((__int64)v10, a1);
    tlgCreate1Sz_wchar_t((__int64)v11, v3);
    v14 = 0;
    v17 = 0;
    v12 = &v7;
    v13 = 4;
    v15 = &v8;
    v16 = 4;
    v7 = v4;
    v8 = v5;
    LODWORD(v2) = tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140C021E8,
                    (unsigned __int8 *)byte_140028E23,
                    0LL,
                    0LL,
                    6u,
                    &v9);
  }
  return v2;
}
