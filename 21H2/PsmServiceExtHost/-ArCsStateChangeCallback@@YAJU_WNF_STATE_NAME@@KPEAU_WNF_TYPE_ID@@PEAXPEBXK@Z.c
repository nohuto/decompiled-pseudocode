/*
 * XREFs of ?ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800841A0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?ArOnCsEntry@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800846C8 (-ArOnCsEntry@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008471C (-ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

__int64 __fastcall ArCsStateChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _ACTIVITY_RESTARTER *a4,
        int *a5)
{
  int v6; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A242F,
      0LL,
      0LL,
      2u,
      &v9);
  if ( *a5 )
    ArOnCsEntry(a4);
  else
    ArOnCsExit(a4);
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v6 = *a5;
    v12 = 0;
    v8 = v6;
    v11 = 4;
    v10 = &v8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A23FF,
      0LL,
      0LL,
      3u,
      &v9);
  }
  return 0LL;
}
