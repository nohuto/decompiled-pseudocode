/*
 * XREFs of ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020A690
 * Callers:
 *     DxgkGetDeviceObjectFromAdapter @ 0x1C02164E0 (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02258F8 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C0259D1C (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0259E6C (DxgkIddHandleSetDisplayConfig.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025E2E4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGADAPTER_REFERENCE::AssignByHandle(struct DXGADAPTER **this, __int64 a2)
{
  __int64 v3; // rsi
  DXGADAPTER *v4; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  DXGADAPTER *v17; // [rsp+30h] [rbp-18h] BYREF

  v3 = (unsigned int)a2;
  v4 = *this;
  if ( v4 )
  {
    DXGADAPTER::ReleaseReference(v4);
    *this = 0LL;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v4, a2);
  if ( Current )
  {
    v12 = 1;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v17, (unsigned int)v3, Current, this, 1);
    if ( *this )
    {
      _InterlockedAdd64((volatile signed __int64 *)*this + 3, 1uLL);
      this[1] = (struct DXGADAPTER *)-1LL;
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v16 + 24) = v3;
      WdLogEvent5_WdWarning(v16);
      v12 = 0;
    }
    if ( v17 )
      DXGADAPTER::ReleaseReference(v17);
    return v12;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v8 + 24) = PsGetCurrentProcess(v10, v9);
    WdLogEvent5_WdError(v8);
    return 0;
  }
}
