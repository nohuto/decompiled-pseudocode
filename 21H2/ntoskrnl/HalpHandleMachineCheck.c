/*
 * XREFs of HalpHandleMachineCheck @ 0x140506BF4
 * Callers:
 *     HalHandleMcheck @ 0x1405095D0 (HalHandleMcheck.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1402DA448 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpMceHandler @ 0x14050770C (HalpMceHandler.c)
 *     HalpMceHandlerWithRendezvous @ 0x1405079C8 (HalpMceHandlerWithRendezvous.c)
 */

void __fastcall HalpHandleMachineCheck(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rdx

  _InterlockedIncrement(&WheapCriticalStateRefCount);
  if ( HalpMceBroadcast )
  {
    for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; ; i = *(_QWORD *)(i + 184) )
    {
      if ( !i )
      {
        HalpMceHandlerWithRendezvous(a1);
        goto LABEL_11;
      }
      if ( (((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))HalpWheaReadMsr)(*(_QWORD *)(i + 172), 378LL, 0LL) & 8) != 0 )
        break;
    }
    while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLocalHandlingLock) )
      _mm_pause();
    LOBYTE(v3) = 1;
    HalpMceHandler(a1, v3);
    KxReleaseSpinLock(&HalpMceLocalHandlingLock);
  }
  else
  {
    HalpMceHandler(a1, 0LL);
  }
LABEL_11:
  _InterlockedDecrement(&WheapCriticalStateRefCount);
}
