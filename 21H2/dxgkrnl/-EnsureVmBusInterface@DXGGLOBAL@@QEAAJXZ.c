/*
 * XREFs of ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0309F70
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02BBED4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     DxgkEnsureVmBusInterface @ 0x1C030D2CC (DxgkEnsureVmBusInterface.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C0053818 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C01FC5AC (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C0361700 (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C0364904 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::EnsureVmBusInterface(DXGGLOBAL *this)
{
  char *v1; // rbp
  char v3; // r14
  __int64 v4; // r9
  DXG_GUEST_GLOBAL_VMBUS *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  PMDL PagesForMdl; // rax
  __int64 v9; // rsi
  const wchar_t *v10; // r9
  unsigned int v11; // esi
  PVOID MappedSystemVa; // rax
  int v13; // eax
  __int64 v14; // r15
  const wchar_t *v15; // r9
  __int64 v16; // r12
  int GpadlFromMdl; // eax
  struct _MDL *v18; // rcx
  _QWORD *v19; // rcx

  v1 = (char *)this + 456;
  v3 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 456));
  v5 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)this + 218);
  if ( !v5 )
  {
    v3 = 1;
    v6 = operator new[](0x48uLL, 0x4B677844u, 256LL, v4);
    if ( !v6 )
    {
      *((_QWORD *)this + 218) = 0LL;
      goto LABEL_6;
    }
    DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(v6, 2);
    *((_QWORD *)this + 218) = v7;
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, 0x808uLL, MmNonCached, 0);
    *((_QWORD *)this + 223) = PagesForMdl;
    if ( !PagesForMdl )
    {
      v9 = 5702LL;
      WdLogSingleEntry1(2LL, 5702LL);
      v10 = L"MmAllocatePagesForMdlEx failed";
LABEL_5:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
LABEL_6:
      v11 = -1073741801;
      goto LABEL_20;
    }
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 222) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      v9 = 5709LL;
      WdLogSingleEntry1(2LL, 5709LL);
      v10 = L"MmGetSystemAddressForMdlSafe failed";
      goto LABEL_5;
    }
    v5 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)this + 218);
  }
  v13 = DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(v5);
  v11 = v13;
  if ( v13 >= 0 )
  {
    if ( *((_DWORD *)this + 443) )
      goto LABEL_24;
    GpadlFromMdl = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                     *((DXG_GUEST_GLOBAL_VMBUS **)this + 218),
                     *((struct _MDL **)this + 223),
                     (unsigned int *)this + 443);
    v11 = GpadlFromMdl;
    if ( GpadlFromMdl >= 0 )
      goto LABEL_24;
    v16 = 5739LL;
    v14 = GpadlFromMdl;
    WdLogSingleEntry2(2LL, GpadlFromMdl, 5739LL);
    v15 = L"CreateGpadlFromMdl failed: 0x%I64x";
  }
  else
  {
    v14 = v13;
    WdLogSingleEntry1(2LL, v13);
    v15 = L"Failed to create global VM bus channel, returning 0x%I64x";
    v16 = 0LL;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v14, v16, 0LL, 0LL, 0LL);
  if ( !v3 )
    goto LABEL_24;
LABEL_20:
  v18 = (struct _MDL *)*((_QWORD *)this + 223);
  if ( v18 )
  {
    MmFreePagesFromMdl(v18);
    *((_QWORD *)this + 222) = 0LL;
    *((_QWORD *)this + 223) = 0LL;
  }
  v19 = (_QWORD *)*((_QWORD *)this + 218);
  if ( v19 )
  {
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v19);
    *((_QWORD *)this + 218) = 0LL;
  }
LABEL_24:
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
