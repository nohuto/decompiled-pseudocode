/*
 * XREFs of VrpPreFlushKey @ 0x1408801C8
 * Callers:
 *     VrpRegistryCallback @ 0x1405CAF70 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140277DD0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall VrpPreFlushKey(__int64 a1, __int64 a2)
{
  GUID ActivityId; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+60h] [rbp-38h] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    if ( (unsigned int)dword_140C02168 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02168,
        (unsigned __int8 *)byte_1400233F8,
        &ActivityId,
        0LL,
        2u,
        &v5);
    return 3221226755LL;
  }
  else
  {
    if ( (unsigned int)dword_140C02168 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02168,
        (unsigned __int8 *)&byte_1400233D7,
        &ActivityId,
        0LL,
        2u,
        &v6);
    return 0LL;
  }
}
