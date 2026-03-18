/*
 * XREFs of CancelTimerCallbacksAndDeleteTimer @ 0x27A584
 * Callers:
 *     _TlgUnregisterAggregateProvider@4 @ 0x27A48A (_TlgUnregisterAggregateProvider@4.c)
 *     DestroyAggregateSession @ 0x27A55C (DestroyAggregateSession.c)
 * Callees:
 *     <none>
 */

int __thiscall CancelTimerCallbacksAndDeleteTimer(_DWORD *this)
{
  __int16 *v2; // eax
  __int16 v3; // dx
  int result; // eax
  _BYTE v5[16]; // [esp+10h] [ebp-10h] BYREF

  if ( this[52] )
  {
    v2 = (__int16 *)(this[34] + 32);
    v3 = *v2;
    *v2 = 2;
    if ( v3 == 1 )
      KeWaitForSingleObject((PVOID)(this[34] + 16), Executive, 0, 0, 0);
    memset(v5, 0, sizeof(v5));
    result = ExDeleteTimer(this[52], 1, 1, v5);
    this[52] = 0;
  }
  return result;
}
