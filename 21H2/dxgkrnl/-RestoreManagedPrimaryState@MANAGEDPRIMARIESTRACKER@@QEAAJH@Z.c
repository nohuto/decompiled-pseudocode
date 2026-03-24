/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0144A88
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0109440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144068 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0254614 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002258 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002910 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A6CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C014DDCC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C014E688 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(MANAGEDPRIMARIESTRACKER *this, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbp
  const struct DXGDEVICE *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  _QWORD *v20; // rax
  int updated; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14

  v2 = a2;
  if ( !*(_QWORD *)this )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 107LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_DWORD *)this + 4);
  if ( (v5 & 2) != 0 )
  {
    *((_DWORD *)this + 4) = v5 & 0xFFFFFFFD;
    if ( v2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        v8 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v8 + 24) = 125LL;
        WdLogEvent5_WdAssertion(v8);
      }
      v9 = 0LL;
      if ( (*((_DWORD *)this + 4) & 0xFFFFFFFC) != 0 )
      {
        do
        {
          v10 = (const struct DXGDEVICE *)*((_QWORD *)this + v9 + 3);
          if ( !v10 )
            goto LABEL_27;
          v11 = *(_QWORD *)(*(_QWORD *)this + 16LL);
          if ( *((_QWORD *)v10 + 231) != v11
            || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v10 + 2) + 16LL)) )
          {
            v12 = WdLogNewEntry5_WdAssertion(v11, v6);
            *(_QWORD *)(v12 + 24) = 134LL;
            WdLogEvent5_WdAssertion(v12);
          }
          if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)this, v10, v9) )
            goto LABEL_27;
          if ( !*((_BYTE *)this + v9 + 408) )
            goto LABEL_27;
          v6 = *((unsigned int *)this + v9 + 86);
          if ( (v6 & 0x200) == 0 )
            goto LABEL_27;
          v13 = *((_QWORD *)this + v9 + 19);
          if ( !v13 )
            goto LABEL_27;
          v14 = *(unsigned int *)(*(_QWORD *)(v13 + 48) + 4LL);
          if ( (v14 & 1) == 0 )
            goto LABEL_27;
          if ( (v6 & 0x100) == 0 )
          {
            v15 = WdLogNewEntry5_WdAssertion(v14, v6);
            *(_QWORD *)(v15 + 24) = 157LL;
            WdLogEvent5_WdAssertion(v15);
          }
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, (unsigned int)v9)
            && (*((_DWORD *)v10 + v9 + 302) & 0x300) == 0x300 )
          {
            goto LABEL_27;
          }
          v16 = DXGDEVICE::PinPrimaryAllocations(v10, v9);
          v19 = v16;
          if ( v16 >= 0 )
          {
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(ADAPTER_DISPLAY **)this,
                        v10,
                        v9,
                        *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v9 + 19) + 48LL));
            v24 = updated;
            if ( updated >= 0 )
            {
              DXGDEVICE::SetDisplayedPrimary(
                (struct _KTHREAD **)v10,
                (unsigned int)v9,
                *((const struct DXGALLOCATION **)this + v9 + 19),
                *((_DWORD *)this + v9 + 70),
                1u);
              *((_DWORD *)v10 + v9 + 302) |= 0x200u;
              goto LABEL_27;
            }
            v20 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
            v20[3] = v24;
            v20[4] = *(_QWORD *)(*(_QWORD *)this + 16LL);
            v20[5] = (unsigned int)v9;
            v20[6] = *((_QWORD *)this + v9 + 19);
          }
          else
          {
            v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
            v20[3] = v19;
            v20[4] = v10;
            v20[5] = (unsigned int)v9;
          }
          WdLogEvent5_WdError(v20);
LABEL_27:
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *((_DWORD *)this + 4) >> 2 );
      }
    }
  }
  return 0LL;
}
