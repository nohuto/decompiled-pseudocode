/*
 * XREFs of ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C033791C
 * Callers:
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C03081F8 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000BD28 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C016404C (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::SuspendResumeEscapeAllDevices(
        struct _KTHREAD **this,
        const struct DXGADAPTER *a2,
        char a3,
        char a4)
{
  struct _KTHREAD *v8; // rdi
  DXGDEVICE *Current; // rax
  DXGDEVICE *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-28h] BYREF

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 2708LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      2708LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2710LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter", 2710LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[28] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2711LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
      2711LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = this[40];
  v14[0] = this + 40;
  while ( 1 )
  {
    v14[1] = v8;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v14);
    v10 = Current;
    if ( !Current )
      break;
    if ( *(const struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL) == a2 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15, Current);
      if ( a3 )
        DXGDEVICE::FlushPagingQueues(v10);
      LOBYTE(v11) = a4;
      v12 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 648LL);
      v13 = *(_QWORD *)(v12 + 8);
      LOBYTE(v12) = a3;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v13 + 1128))(*((_QWORD *)v10 + 95), v12, v11);
      if ( v15[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15);
    }
    v8 = *(struct _KTHREAD **)v8;
  }
}
