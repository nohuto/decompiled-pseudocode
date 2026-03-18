/*
 * XREFs of ObfDereferenceDeviceMap @ 0x140666044
 * Callers:
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x140619124 (ObDereferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x140665BB0 (ObQueryDeviceMapInformation.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406E2428 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406E253C (SeGetTokenDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1406F54F0 (SepDeReferenceLogonSession.c)
 *     ObpSetDeviceMap @ 0x14070B584 (ObpSetDeviceMap.c)
 *     SepDeleteLogonSessionTrack @ 0x1407680B4 (SepDeleteLogonSessionTrack.c)
 *     ObCleanupSiloState @ 0x1408D8E70 (ObCleanupSiloState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall ObfDereferenceDeviceMap(PVOID P)
{
  signed __int32 v1; // edi
  bool v3; // zf
  signed __int32 v4; // eax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v7; // rsi
  void *v8; // rcx

  v1 = *((_DWORD *)P + 6);
  if ( v1 != 1 )
  {
    do
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)P + 6, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_3;
    }
    while ( v4 != 1 );
  }
  ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)P + 8));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (ULONG_PTR)ServerSiloGlobals + 120;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
  if ( v1 != 1 )
  {
    ExReleasePushLockEx(v7, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_3:
    if ( v1 <= 0 )
      __fastfail(0xEu);
    return;
  }
  *(_QWORD *)(*(_QWORD *)P + 304LL) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v8 = (void *)*((_QWORD *)P + 8);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x6D44624Fu);
  ZwClose(*((HANDLE *)P + 2));
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)P);
  ExFreePoolWithTag(P, 0x6D44624Fu);
}
