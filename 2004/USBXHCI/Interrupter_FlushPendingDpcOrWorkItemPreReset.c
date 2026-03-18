/*
 * XREFs of Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003B2DC
 * Callers:
 *     Controller_InternalReset @ 0x1C0031AF8 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 */

void __fastcall Interrupter_FlushPendingDpcOrWorkItemPreReset(__int64 a1)
{
  __int64 i; // rsi
  __int64 v3; // rbp
  KIRQL v4; // al
  __int64 j; // rbx
  _QWORD *v6; // rsi
  int v7; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    if ( v3 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 208));
      *(_DWORD *)(v3 + 96) |= 0x10u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 208), v4);
    }
  }
  KeFlushQueuedDpcs();
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 80); j = (unsigned int)(j + 1) )
  {
    v6 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * j);
    if ( v6 && v6[25] )
    {
      Timeout.QuadPart = -600000000LL;
      while ( KeWaitForSingleObject(v6 + 22, Executive, 0, 0, &Timeout) == 258 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v6[1] + 72LL),
            v7,
            9,
            33,
            (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
            j);
        }
      }
    }
  }
}
