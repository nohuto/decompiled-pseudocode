/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01635A0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0338270 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00093C4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0009488 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000BD28 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B6C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(struct _KTHREAD **this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  char *v4; // r14
  struct _KTHREAD *v5; // rsi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v7; // rbx
  ADAPTER_DISPLAY **v8; // rdi
  ADAPTER_DISPLAY *v9; // rcx
  _QWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v11[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v12[144]; // [rsp+70h] [rbp-90h] BYREF

  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3380LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 3380LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (char *)(this + 27);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 27, 0LL);
  this[28] = KeGetCurrentThread();
  v5 = this[40];
  v11[0] = this + 40;
  while ( 1 )
  {
    v11[1] = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v11);
    v7 = Current;
    if ( !Current )
      break;
    v8 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 231);
    if ( v8 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)v8, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12, 0LL) >= 0 )
      {
        v9 = v8[349];
        if ( !v9 )
        {
          WdLogSingleEntry1(1LL, 3416LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
            3416LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v9 = v8[349];
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v9, v7) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v8[349], v7) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v12);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v7, a2, 0);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
      if ( v10[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10);
    }
    v5 = *(struct _KTHREAD **)v5;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
