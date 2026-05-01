/*
 * XREFs of SystemStateTrackerStart @ 0x18003EFFC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F340 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x18003F058 (-SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 SystemStateTrackerStart()
{
  struct _SYSTEM_STATE_TRACKER *v0; // rbx
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v0 = GlobalSystemStateTracker;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_1800A368D,
      0LL,
      0LL,
      2u,
      &v4);
  v1 = SstpStart(v0);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = v1;
    v6 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_1800A36B4,
      0LL,
      0LL,
      3u,
      &v4);
  }
  return v1;
}
