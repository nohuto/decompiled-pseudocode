/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C01BB50C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1620 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B6C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E260 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C5840 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C01C5CE4 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(MANAGEDPRIMARIESTRACKER *this, int a2)
{
  int v4; // eax
  unsigned int v5; // r14d
  DXGDEVICE *v6; // rbp
  int v7; // edx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  int updated; // eax
  __int64 v12; // rbx

  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry1(1LL, 107LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pDisplayCore != NULL", 107LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)this + 4) = v4 & 0xFFFFFFFD;
    if ( a2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        WdLogSingleEntry1(1LL, 125LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pDisplayCore->IsCoreResourceExclusiveOwner()",
          125LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v5 = 0;
      if ( (*((_DWORD *)this + 4) & 0xFFFFFFFC) != 0 )
      {
        do
        {
          v6 = (DXGDEVICE *)*((_QWORD *)this + v5 + 3);
          if ( v6 )
          {
            if ( *((_QWORD *)v6 + 231) != *(_QWORD *)(*(_QWORD *)this + 16LL)
              || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v6 + 2) + 16LL)) )
            {
              WdLogSingleEntry1(1LL, 134LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"(pOwnerDevice == NULL) || ((pOwnerDevice->GetDisplayAdapter(VidPnSourceId) == m_pDisplayCore->G"
                          "etAdapter()) && (pOwnerDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()))",
                134LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)this, v6, v5) )
            {
              if ( *((_BYTE *)this + v5 + 408) )
              {
                v7 = *((_DWORD *)this + v5 + 86);
                if ( (v7 & 0x200) != 0 )
                {
                  v8 = *((_QWORD *)this + v5 + 19);
                  if ( v8 )
                  {
                    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 48) + 4LL) & 1) != 0 )
                    {
                      if ( (v7 & 0x100) == 0 )
                      {
                        WdLogSingleEntry1(1LL, 157LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_PrimaryDescription[VidPnSourceId].Pinned",
                          157LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v5)
                        || (*((_DWORD *)v6 + v5 + 302) & 0x300) != 0x300 )
                      {
                        v9 = DXGDEVICE::PinPrimaryAllocations(v6, v5);
                        if ( v9 >= 0 )
                        {
                          updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                                      *(ADAPTER_DISPLAY **)this,
                                      v6,
                                      v5,
                                      *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v5 + 19) + 48LL));
                          if ( updated >= 0 )
                          {
                            DXGDEVICE::SetDisplayedPrimary(
                              (struct _KTHREAD **)v6,
                              v5,
                              *((const struct DXGALLOCATION **)this + v5 + 19),
                              *((_DWORD *)this + v5 + 70),
                              1u);
                            *((_DWORD *)v6 + v5 + 302) |= 0x200u;
                          }
                          else
                          {
                            v12 = updated;
                            WdLogSingleEntry4(
                              2LL,
                              updated,
                              *(_QWORD *)(*(_QWORD *)this + 16LL),
                              v5,
                              *((_QWORD *)this + v5 + 19));
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"Status=0x%I64x Adapter 0x%I64x: UpdateModeWithPrimary failed 0x%I64x 0x%I64x",
                              v12,
                              *(_QWORD *)(*(_QWORD *)this + 16LL),
                              v5,
                              *((_QWORD *)this + v5 + 19),
                              0LL);
                          }
                        }
                        else
                        {
                          v10 = v9;
                          WdLogSingleEntry3(2LL, v9, v6, v5);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"Status=0x%I64x Device 0x%I64x: PinPrimaryAllocations failed 0x%I64x",
                            v10,
                            (__int64)v6,
                            v5,
                            0LL,
                            0LL);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ++v5;
        }
        while ( v5 < *((_DWORD *)this + 4) >> 2 );
      }
    }
  }
  return 0LL;
}
