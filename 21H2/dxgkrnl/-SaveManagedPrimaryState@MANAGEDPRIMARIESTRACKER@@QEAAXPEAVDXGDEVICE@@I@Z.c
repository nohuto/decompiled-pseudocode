/*
 * XREFs of ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01C21D4
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1620 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B6C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0013D10 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0013DA8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct _KTHREAD **a2,
        int a3)
{
  __int64 v4; // rcx
  __int64 v7; // rsi
  int v8; // eax
  struct _KTHREAD **VidPnSourceOwner; // rax
  struct _KTHREAD **v10; // rbx
  int v11; // ebx
  _BYTE v12[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+60h] [rbp-28h]

  v4 = *(_QWORD *)this;
  if ( !v4 )
  {
    WdLogSingleEntry1(1LL, 61LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pDisplayCore != NULL", 61LL, 0LL, 0LL, 0LL, 0LL);
    v4 = *(_QWORD *)this;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v4 + 16)) )
  {
    WdLogSingleEntry1(1LL, 64LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pDisplayCore->IsCoreResourceExclusiveOwner()",
      64LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = 0LL;
  v8 = *((_DWORD *)this + 4) | 2;
  *((_DWORD *)this + 4) = v8;
  if ( (v8 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      *((_QWORD *)this + v7 + 3) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)this, v7) - 1 <= 1 )
      {
        VidPnSourceOwner = (struct _KTHREAD **)ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)this, v7);
        v10 = VidPnSourceOwner;
        if ( a2 != VidPnSourceOwner || !_bittest(&a3, v7) )
        {
          *((_QWORD *)this + v7 + 3) = VidPnSourceOwner;
          *((_DWORD *)this + v7 + 86) ^= (*((_DWORD *)this + v7 + 86) ^ ((unsigned __int8)BYTE1(*((_DWORD *)VidPnSourceOwner
                                                                                                + v7
                                                                                                + 302)) << 8)) & 0x100;
          *((_DWORD *)this + v7 + 86) ^= ((unsigned __int16)*((_DWORD *)this + v7 + 86) ^ (unsigned __int16)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v7 + 302) >> 9) << 9)) & 0x200;
          *((_QWORD *)this + v7 + 19) = DXGDEVICE::GetDisplayedPrimary(VidPnSourceOwner, v7);
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, v10 + 38, 0);
          DXGPUSHLOCK::AcquireExclusive(v13);
          v11 = *((_DWORD *)v10 + v7 + 286);
          v14 = 2;
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
          *((_DWORD *)this + v7 + 70) = v11;
          *((_BYTE *)this + v7 + 408) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v7);
        }
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *((_DWORD *)this + 4) >> 2 );
  }
}
