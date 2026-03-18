/*
 * XREFs of ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0250C74
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C013FA94 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01402B0 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C020D908 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000CD10 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::InvalidatePrimaryAllocations(DXGDEVICE *this, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _BYTE v21[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v22; // [rsp+38h] [rbp-20h]
  int i; // [rsp+40h] [rbp-18h]

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 464) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 3690LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 3691LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 3692LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 108) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = 3693LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v22);
  *((_DWORD *)this + v3 + 302) &= ~0x200u;
  v16 = 0LL;
  for ( i = 2; (unsigned int)v16 < *((_DWORD *)this + v3 + 238); v16 = (unsigned int)(v16 + 1) )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + v3 + 103) + 8 * v16) )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      v17[3] = *(_QWORD *)(*((_QWORD *)this + v3 + 103) + 8 * v16);
      v17[4] = (unsigned int)v16;
      v17[5] = v3;
      v18 = *((_QWORD *)this + v3 + 103);
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8 * v16) + 48LL);
      if ( (*(_DWORD *)(v19 + 4) & 0x10) != 0 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v19, v18);
        *(_QWORD *)(v20 + 24) = 3705LL;
        WdLogEvent5_WdAssertion(v20);
        v18 = *((_QWORD *)this + v3 + 103);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 200LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8 * v16) + 48LL) + 8LL));
      v13 = *(_QWORD *)(*((_QWORD *)this + v3 + 103) + 8 * v16);
      *(_DWORD *)(*(_QWORD *)(v13 + 48) + 4LL) |= 0x10u;
      *(_QWORD *)(*((_QWORD *)this + v3 + 103) + 8 * v16) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1208);
    }
  }
  DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, (unsigned int)v3, 0LL, 0, 1u);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
}
