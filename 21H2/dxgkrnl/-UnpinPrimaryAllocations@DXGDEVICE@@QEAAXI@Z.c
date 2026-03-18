/*
 * XREFs of ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01C71C4
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C66CC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C7E74 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E260 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C0014588 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::UnpinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-40h]
  int v12; // [rsp+60h] [rbp-38h]

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 464) )
  {
    WdLogSingleEntry1(1LL, 3881LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3881LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3882LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3882LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    WdLogSingleEntry1(1LL, 3883LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      3883LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    WdLogSingleEntry1(1LL, 3884LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGDEVICECLIENT_USER == GetClientType()",
      3884LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary((struct _KTHREAD **)this, v2) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *((_QWORD *)this + 231) == v5 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)this + 42, 0);
      DXGPUSHLOCK::AcquireExclusive(v11);
      v6 = 0;
      v12 = 2;
      for ( i = v2; v6 < *((_DWORD *)this + v2 + 238); ++v6 )
      {
        v8 = *((_QWORD *)this + v2 + 103);
        v9 = *(_QWORD *)(v8 + 8LL * v6);
        if ( v9 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 48) + 4LL) & 1) == 0 )
          {
            WdLogSingleEntry1(1LL, 3900LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_PrimaryAllocation[VidPnSourceId][Index]->m_pAllocation->m_Primary",
              3900LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v8 = *((_QWORD *)this + v2 + 103);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 240LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
            *(_QWORD *)(*(_QWORD *)(v8 + 8LL * v6) + 24LL));
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    }
    else
    {
      i = v2;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4) + 24) = i;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)this + 42, 0);
    DXGPUSHLOCK::AcquireExclusive(v11);
    *((_DWORD *)this + i + 302) &= 0xFFFFFCFF;
    v12 = 2;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v2, 0LL, 0, 1u);
  }
}
