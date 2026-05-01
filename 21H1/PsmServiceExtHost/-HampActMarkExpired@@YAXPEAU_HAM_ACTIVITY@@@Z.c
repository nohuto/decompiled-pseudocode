/*
 * XREFs of ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180080FF4
 * Callers:
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180080BE8 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180080E10 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

void __fastcall HampActMarkExpired(struct _HAM_ACTIVITY *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  *((_DWORD *)a1 + 136) |= 0x20u;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v4 = *(_QWORD *)(v3 + 40);
      v9 = 0;
      v5 = v4;
      v7 = &v5;
      v8 = v1;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1800A1D4C, 0LL, 0LL, 3u, &v6);
    }
  }
}
