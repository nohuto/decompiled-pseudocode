/*
 * XREFs of PopWnfFullscreenVideoCallback @ 0x1408E0B10
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402DF038 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1407090A0 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfFullscreenVideoCallback(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = 8;
  v1 = ExQueryWnfStateData(a1, &v5, &v6, &v4);
  if ( v1 >= 0 )
  {
    if ( v4 < 8 )
      return 0;
    PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
    if ( byte_140C238EE )
    {
      v2 = v6 & 2;
      if ( (v6 & 2) != 0 )
      {
LABEL_9:
        PpmReleaseLock(&PopFxSystemLatencyLock);
        return (unsigned int)v1;
      }
    }
    else
    {
      v2 = v6 & 2;
      if ( (v6 & 2) == 0 )
        goto LABEL_9;
    }
    byte_140C238EE = v2 != 0;
    PoFxSendSystemLatencyUpdate();
    goto LABEL_9;
  }
  return (unsigned int)v1;
}
