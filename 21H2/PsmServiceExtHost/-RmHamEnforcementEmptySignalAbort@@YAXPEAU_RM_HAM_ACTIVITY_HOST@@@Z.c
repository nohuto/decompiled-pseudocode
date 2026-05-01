/*
 * XREFs of ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180073D44
 * Callers:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

void __fastcall RmHamEnforcementEmptySignalAbort(HANDLE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  NtSetEvent(a1[155], 0LL);
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    {
      v3 = (__int64)*(a1 - 4);
      v8 = 0;
      v4 = v3;
      v7 = 8;
      v6 = &v4;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18009D889, 0LL, 0LL, 3u, &v5);
    }
  }
}
