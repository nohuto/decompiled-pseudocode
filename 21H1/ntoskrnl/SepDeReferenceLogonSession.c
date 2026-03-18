/*
 * XREFs of SepDeReferenceLogonSession @ 0x1406D2920
 * Callers:
 *     SepDeReferenceLogonSessionDirect @ 0x140340624 (SepDeReferenceLogonSessionDirect.c)
 *     SepTokenDeleteMethod @ 0x1405EE0D0 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x1406D2920 (SepDeReferenceLogonSession.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     SepDeleteSessionLowboxEntries @ 0x14030D754 (SepDeleteSessionLowboxEntries.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ObfDereferenceDeviceMap @ 0x1405DFD44 (ObfDereferenceDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1406D2920 (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x1406D2ADC (SepInformLsaOfDeletedLogon.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D2B64 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x1406D2BD0 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepDeleteLogonSessionSidValues @ 0x14091E708 (SepDeleteLogonSessionSidValues.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14091F054 (SepInformFileSystemsOfDeletedLogon.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceLogonSession(_DWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 **v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rsi
  __int64 *i; // rbx
  __int64 v9; // rax
  struct _DMA_ADAPTER *v10; // rcx
  void *v11; // rsi
  void *v12; // rcx

  v4 = (unsigned int)(1529154084 * *a1) >> 28;
  v5 = (__int64 **)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  for ( i = *v5; ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( i[20] == a2 && *a1 == *((_DWORD *)i + 2) && a1[1] == *((_DWORD *)i + 3) )
      break;
    v5 = (__int64 **)i;
  }
  v9 = _InterlockedDecrement64(i + 3);
  if ( v9 > 0 )
  {
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v9 )
      __fastfail(0xEu);
    *v5 = (__int64 *)*i;
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
    if ( (i[4] & 4) != 0 && (*((_DWORD *)i + 4) || *((_DWORD *)i + 5)) )
      SepDeReferenceLogonSession(i + 2, i[20]);
    v10 = (struct _DMA_ADAPTER *)i[6];
    if ( v10 )
    {
      HalPutDmaAdapter(v10);
      i[6] = 0LL;
    }
    v11 = (void *)i[5];
    if ( v11 )
    {
      i[5] = 0LL;
      SepCleanupLUIDDeviceMapDirectory(a1, a2);
      ObfDereferenceDeviceMap(v11);
    }
    if ( (i[4] & 1) != 0 )
      SepInformFileSystemsOfDeletedLogon(a1, a2);
    v12 = (void *)i[8];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 16);
    SepInformLsaOfDeletedLogon(a1, i[20], i);
    SepDeleteSessionLowboxEntries();
  }
}
