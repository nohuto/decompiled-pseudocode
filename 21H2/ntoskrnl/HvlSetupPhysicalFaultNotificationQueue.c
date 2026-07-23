/*
 * XREFs of HvlSetupPhysicalFaultNotificationQueue @ 0x1404F25E0
 * Callers:
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     HvlpAllocateOverlayPages @ 0x1404FABCC (HvlpAllocateOverlayPages.c)
 */

__int64 __fastcall HvlSetupPhysicalFaultNotificationQueue(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  void *OverlayPages; // rax
  void *v7; // rbp
  unsigned int v8; // ebx
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  __int64 v10; // rdi
  int *v11; // rsi
  __int16 v12; // ax
  int v13; // edi
  _BYTE v15[24]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(v16, 0, sizeof(v16));
  OverlayPages = (void *)HvlpAllocateOverlayPages(a1, a2, a3, a4, 0LL, 0LL, 0LL, 0LL);
  v7 = OverlayPages;
  if ( OverlayPages )
  {
    memset(OverlayPages, 0, 0x1000uLL);
    PhysicalAddress = MmGetPhysicalAddress(v7);
    v10 = HvlpAcquireHypercallPage(v16, 1LL, 0LL, 24LL);
    v11 = (int *)HvlpAcquireHypercallPage(v15, 2LL, 0LL, 8LL);
    *(_DWORD *)(v10 + 4) = 0;
    *(_DWORD *)v10 = 1;
    *(_QWORD *)(v10 + 8) = PhysicalAddress.QuadPart / 4096;
    *(_QWORD *)(v10 + 16) = 1LL;
    v12 = HvcallInitiateHypercall(32772);
    v13 = *v11;
    LOWORD(PhysicalAddress.LowPart) = v12;
    HvlpReleaseHypercallPage(v15);
    HvlpReleaseHypercallPage(v16);
    if ( LOWORD(PhysicalAddress.LowPart) )
    {
      v8 = -1073741823;
    }
    else
    {
      v8 = 0;
      *a1 = v7;
      v7 = 0LL;
      *a2 = v13 << 12;
    }
    if ( v7 )
      MmFreeContiguousMemory(v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
