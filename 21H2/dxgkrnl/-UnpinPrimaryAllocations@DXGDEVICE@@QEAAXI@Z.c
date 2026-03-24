/*
 * XREFs of ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C014EA94
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C014BD78 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014E000 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0211888 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002910 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C000D3E0 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::UnpinPrimaryAllocations(DXGDEVICE *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 i; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v23; // [rsp+38h] [rbp-20h]
  int v24; // [rsp+40h] [rbp-18h]

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 464) )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v17 + 24) = 3882LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v18 + 24) = 3883LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v19 + 24) = 3884LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v20 + 24) = 3885LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary((struct _KTHREAD **)this, v3) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *((_QWORD *)this + 231) == v11 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)this + 42, 0);
      DXGPUSHLOCK::AcquireExclusive(v23);
      v12 = 0LL;
      v24 = 2;
      for ( i = v3; (unsigned int)v12 < *((_DWORD *)this + v3 + 238); v12 = (unsigned int)(v12 + 1) )
      {
        v14 = *((_QWORD *)this + v3 + 103);
        v15 = *(_QWORD *)(v14 + 8 * v12);
        if ( v15 )
        {
          v16 = *(unsigned int *)(*(_QWORD *)(v15 + 48) + 4LL);
          if ( (v16 & 1) == 0 )
          {
            v21 = WdLogNewEntry5_WdAssertion(v16, v14);
            *(_QWORD *)(v21 + 24) = 3901LL;
            WdLogEvent5_WdAssertion(v21);
            v14 = *((_QWORD *)this + v3 + 103);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            *(_QWORD *)(*(_QWORD *)(v14 + 8 * v12) + 24LL));
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    }
    else
    {
      i = v3;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v8, v9, v10) + 24) = i;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)this + 42, 0);
    DXGPUSHLOCK::AcquireExclusive(v23);
    *((_DWORD *)this + i + 302) &= 0xFFFFFCFF;
    v24 = 2;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, (unsigned int)v3, 0LL, 0, 1u);
  }
}
