/*
 * XREFs of PiUEventShouldQueueEvent @ 0x1402F9250
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1406FDB3C (PiUEventNotifyUserMode.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiUEventShouldQueueEvent(__int64 a1)
{
  char v1; // dl
  int v3; // eax
  bool v4; // zf

  v1 = 1;
  if ( !PiUEventBroadcastSubscriberPresent )
  {
    v3 = *(_DWORD *)(a1 + 128);
    if ( v3 != 1 )
    {
      if ( v3 == 4 )
        goto LABEL_11;
      if ( v3 == 2 )
      {
        v4 = PiUEventDevInterfaceClientCount == 0;
        return !v4;
      }
      if ( v3 != 3 )
      {
        if ( v3 == 9 )
        {
          v4 = PiUEventDevInstancePropertyClientCount == 0;
          return !v4;
        }
        if ( v3 <= 9 || v3 > 11 )
          return v1;
LABEL_11:
        v4 = PiUEventDevInstanceClientCount == 0;
        return !v4;
      }
    }
    v4 = PiUEventDevHandleClientCount == 0;
    return !v4;
  }
  return v1;
}
