/*
 * XREFs of ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0264EC4
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02098EC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     DxgkEnsureVmBusInterface @ 0x1C0267AF0 (DxgkEnsureVmBusInterface.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C0044684 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C0171204 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C0233C38 (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C02363B0 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::EnsureVmBusInterface(DXGGLOBAL *this)
{
  char *v1; // r14
  char v3; // bp
  struct VMBCHANNEL__ **v4; // rcx
  PVOID v5; // rcx
  __int64 v6; // rcx
  PMDL PagesForMdl; // rax
  __int64 v8; // rdx
  PMDL v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  PVOID MappedSystemVa; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int GpadlFromMdl; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _MDL *v20; // rcx
  _QWORD *v21; // rcx

  v1 = (char *)this + 288;
  v3 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 288));
  v4 = (struct VMBCHANNEL__ **)*((_QWORD *)this + 183);
  if ( v4 )
    goto LABEL_16;
  v3 = 1;
  v5 = operator new[](0x40uLL, 0x4B677844u, PagedPool);
  if ( v5 )
    DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)v5, 2);
  else
    v6 = 0LL;
  *((_QWORD *)this + 183) = v6;
  if ( !v6 )
    goto LABEL_9;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, 0x1000uLL, MmNonCached, 0);
  *((_QWORD *)this + 188) = PagesForMdl;
  v9 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 187) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      v10 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v10 + 24) = 5367LL;
      goto LABEL_8;
    }
    v4 = (struct VMBCHANNEL__ **)*((_QWORD *)this + 183);
LABEL_16:
    v13 = DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(v4);
    v11 = v13;
    if ( v13 >= 0 )
    {
      if ( *((_DWORD *)this + 373) )
      {
LABEL_22:
        if ( (int)v11 >= 0 || !v3 )
          goto LABEL_28;
        goto LABEL_24;
      }
      GpadlFromMdl = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                       *((struct _KTHREAD ***)this + 183),
                       *((struct _MDL **)this + 188),
                       (unsigned int *)this + 373);
      v11 = GpadlFromMdl;
      if ( GpadlFromMdl >= 0 )
        goto LABEL_28;
      v16 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v16 + 32) = 5397LL;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15, v14);
    }
    *(_QWORD *)(v16 + 24) = v11;
    WdLogEvent5_WdError(v16);
    goto LABEL_22;
  }
  v10 = WdLogNewEntry5_WdError(0LL, v8);
  *(_QWORD *)(v10 + 24) = 5360LL;
LABEL_8:
  WdLogEvent5_WdError(v10);
LABEL_9:
  LODWORD(v11) = -1073741801;
LABEL_24:
  v20 = (struct _MDL *)*((_QWORD *)this + 188);
  if ( v20 )
  {
    MmFreePagesFromMdl(v20);
    *((_QWORD *)this + 187) = 0LL;
    *((_QWORD *)this + 188) = 0LL;
  }
  v21 = (_QWORD *)*((_QWORD *)this + 183);
  if ( v21 )
  {
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v21);
    *((_QWORD *)this + 183) = 0LL;
  }
LABEL_28:
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
