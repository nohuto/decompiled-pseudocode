/*
 * XREFs of ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0215D54
 * Callers:
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C019E9EC (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C022EEBC (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F574 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C0057704 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C00579CC (DpiMapMemoryTrackersToIoMmu.c)
 *     DpiResetIoMmuContext @ 0x1C0057B18 (DpiResetIoMmuContext.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00E8CC8 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FDD00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C020DDF4 (-MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ.c)
 *     ?DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0217930 (-DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C021AA54 (-DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiAttachIoMmuDomain @ 0x1C02D1BC8 (DpiAttachIoMmuDomain.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnableIoMmuIsolation(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 IoMmuContextFromDevice; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax

  if ( !*((_BYTE *)this + 1648) )
  {
    v4 = *((_QWORD *)this + 2);
    v5 = *(_DWORD *)(v4 + 348);
    if ( (v5 & 8) == 0 && (v5 & 0x10) == 0 && !*(_BYTE *)(v4 + 209) )
    {
      if ( !qword_1C00B3028 )
      {
        LODWORD(v6) = -1073741637;
LABEL_8:
        v9 = WdLogNewEntry5_WdWarning(v4, a2, a3);
        *(_QWORD *)(v9 + 24) = (int)v6;
LABEL_13:
        WdLogEvent5_WdWarning(v9);
        DpiResetIoMmuContext(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL));
        return (unsigned int)v6;
      }
      IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(*(_QWORD *)(v4 + 216));
      LOBYTE(v8) = 1;
      LODWORD(v6) = ((__int64 (__fastcall *)(__int64, __int64))qword_1C00B3028)(v8, IoMmuContextFromDevice + 8);
      if ( (int)v6 < 0 )
        goto LABEL_8;
      v10 = DXGADAPTER::MapHardwareReservedRangesToIoMmu(*((DXGADAPTER **)this + 2));
      v6 = v10;
      if ( v10 < 0
        || (v14 = DpiMapMemoryTrackersToIoMmu(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL)), v6 = v14, v14 < 0)
        || (v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 80) + 8LL) + 1216LL))(*((_QWORD *)this + 81)),
            v6 = v15,
            v15 < 0) )
      {
        v9 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v9 + 24) = v6;
        goto LABEL_13;
      }
      DXGADAPTER::AcquireCoreResourceExclusive(*((_QWORD *)this + 2), 3u, 0);
      ADAPTER_RENDER::DdiBeginExclusiveAccess(this);
      DpiAttachIoMmuDomain(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL));
      ADAPTER_RENDER::DdiEndExclusiveAccess(this);
      DXGADAPTER::ReleaseCoreResource(*((DXGADAPTER **)this + 2), 0LL);
      *((_BYTE *)this + 1648) = 1;
    }
  }
  return 0LL;
}
