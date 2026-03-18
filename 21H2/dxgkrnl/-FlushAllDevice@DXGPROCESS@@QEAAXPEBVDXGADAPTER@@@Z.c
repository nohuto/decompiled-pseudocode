/*
 * XREFs of ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C021B4DC
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C016E8D4 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000BD28 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

void __fastcall DXGPROCESS::FlushAllDevice(struct _KTHREAD **this, const struct DXGADAPTER *a2)
{
  char *v4; // rax
  struct _KTHREAD *v5; // rbx
  _QWORD *Current; // rax
  _QWORD v7[2]; // [rsp+50h] [rbp-18h] BYREF

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 2826LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      2826LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2828LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapterToFlush", 2828LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[28] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2829LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
      2829LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (char *)(this + 40);
  v5 = this[40];
  v7[0] = v4;
  while ( 1 )
  {
    v7[1] = v5;
    Current = (_QWORD *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v7);
    if ( !Current )
      break;
    if ( *(const struct DXGADAPTER **)(Current[2] + 16LL) == a2 )
      DXGDEVICE::FlushScheduler(Current, 5u, 0xFFFFFFFD, 0);
    v5 = *(struct _KTHREAD **)v5;
  }
}
