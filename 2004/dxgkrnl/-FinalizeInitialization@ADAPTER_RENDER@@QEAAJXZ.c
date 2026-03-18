/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01770B8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017890C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C011D4F4 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0216024 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx

  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
    LODWORD(v6) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 157), this, 1);
    if ( (int)v6 < 0
      || (LODWORD(v6) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 80) + 8LL) + 856LL))(*((_QWORD *)this + 81)),
          (int)v6 < 0) )
    {
      v12 = WdLogNewEntry5_WdError(v5, v4);
    }
    else
    {
      v7 = *((_QWORD *)this + 2);
      v8 = *(_DWORD *)(v7 + 2060);
      if ( (v8 & 0x2000) == 0 )
      {
        v9 = *(_DWORD *)(v7 + 2656);
        if ( (v9 & 1) == 0 || (v8 & 0x800) == 0 && (v9 & 8) == 0 )
          return (unsigned int)v6;
      }
      v13 = ADAPTER_RENDER::EnableIoMmuIsolation(this);
      v6 = v13;
      if ( v13 >= 0 )
        return (unsigned int)v6;
      v15 = *(unsigned int *)(*((_QWORD *)this + 2) + 2656LL);
      if ( (v15 & 0x10) != 0 )
      {
        LODWORD(v6) = 0;
        return (unsigned int)v6;
      }
      v12 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v12 + 32) = v6;
    }
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v6;
  }
  return 0LL;
}
