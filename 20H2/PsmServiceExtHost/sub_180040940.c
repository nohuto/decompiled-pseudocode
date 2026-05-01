/*
 * XREFs of sub_180040940 @ 0x180040940
 * Callers:
 *     sub_180040460 @ 0x180040460 (sub_180040460.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180040940(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  _QWORD Recipient[3]; // [rsp+40h] [rbp-18h] BYREF

  v1 = a1 + 576;
  Recipient[1] = a1;
  Recipient[0] = sub_18003E350;
  if ( PowerSettingRegisterNotification(&SettingGuid, 2u, Recipient, (PHPOWERNOTIFY)(a1 + 576))
    || PowerSettingRegisterNotification(&stru_180095D18, 2u, Recipient, (PHPOWERNOTIFY)(v1 + 8)) )
  {
    return 3221225473LL;
  }
  result = RtlSubscribeWnfStateChangeNotification(v1 + 24, 0xD83063EA3BC7875LL, 0LL, sub_180009C10, a1, 0LL, 0, 0);
  if ( (int)result >= 0 )
  {
    result = RtlSubscribeWnfStateChangeNotification(v1 + 40, 0xE8A0125A3BC8875LL, 0LL, sub_180009C10, a1, 0LL, 0, 0);
    if ( (int)result >= 0 )
    {
      result = RtlSubscribeWnfStateChangeNotification(v1 + 32, 0xE8A0125A3BC2075LL, 0LL, sub_180009C10, a1, 0LL, 0, 0);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
