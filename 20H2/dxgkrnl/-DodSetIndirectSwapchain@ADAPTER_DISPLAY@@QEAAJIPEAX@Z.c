/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C021101C
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1C0224FA0 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C029BAE8 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C02AB658 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C02FE0CC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

int __fastcall ADAPTER_DISPLAY::DodSetIndirectSwapchain(ADAPTER_DISPLAY *this, __int64 a2, void *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  struct DXGSWAPCHAIN_CONTAINER *v7; // rax
  __int64 v8; // rdx
  struct _LUID v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rdx
  OUTPUTDUPL_MGR_INDIRECT *v13; // r14
  __int64 v14; // rcx
  int updated; // r15d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(_QWORD, _QWORD, void *, struct _LUID); // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  v4 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 48) )
    return -1073741811;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v6 + 24) = v4;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return -1073741811;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 348LL) & 0x100) == 0 )
  {
    v6 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 2);
    goto LABEL_4;
  }
  v7 = SwapChainOpenInternal(a3);
  if ( !v7 || !*(_QWORD *)v7 )
  {
    v25 = WdLogNewEntry5_WdError(v7, v8);
    *(_QWORD *)(v25 + 24) = a3;
    WdLogEvent5_WdError(v25);
    return -1073741811;
  }
  v9 = *(struct _LUID *)(*(_QWORD *)v7 + 192LL);
  if ( v9 )
  {
    ObfDereferenceObject(v7);
    v13 = (OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 13) - 24LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL));
    if ( v9 == *((_QWORD *)v13 + 14)
      || (updated = OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(v13, v9), updated >= 0) )
    {
      v17 = *((_QWORD *)this + 2);
      v18 = *(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID))(v17 + 1912);
      if ( v18 )
      {
        v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v18)(
                *(_QWORD *)(v17 + 1888),
                (unsigned int)v4,
                a3,
                v9);
        v22 = v19;
        if ( v19 >= 0 )
        {
          return BLTQUEUE::SetIndirectSwapChainHandles(
                   (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 48) + 8LL) + 2904 * v4),
                   a3);
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v23 + 24) = v22;
          *(_QWORD *)(v23 + 32) = *((_QWORD *)this + 2);
          WdLogEvent5_WdError(v23);
          return v22;
        }
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v17, v12);
        *(_QWORD *)(v24 + 24) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v24);
        return -1073741637;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v14, v12);
      *(_QWORD *)(v16 + 24) = v13;
      WdLogEvent5_WdError(v16);
      return updated;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7, v8);
    *(_QWORD *)(v10 + 24) = 8243LL;
    WdLogEvent5_WdError(v10);
    return -1073741595;
  }
}
