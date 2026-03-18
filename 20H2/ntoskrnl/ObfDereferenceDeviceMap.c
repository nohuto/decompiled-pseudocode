/*
 * XREFs of ObfDereferenceDeviceMap @ 0x14063ADE4
 * Callers:
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x14063A950 (ObQueryDeviceMapInformation.c)
 *     SeGetTokenDeviceMap @ 0x14063C438 (SeGetTokenDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x14065EC78 (ObDereferenceDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1406C8580 (SepDeReferenceLogonSession.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406CD440 (ObSetCurrentProcessDeviceMap.c)
 *     ObpSetDeviceMap @ 0x1406DD7AC (ObpSetDeviceMap.c)
 *     SepDeleteLogonSessionTrack @ 0x1407766C0 (SepDeleteLogonSessionTrack.c)
 *     ObCleanupSiloState @ 0x1408DECB0 (ObCleanupSiloState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
