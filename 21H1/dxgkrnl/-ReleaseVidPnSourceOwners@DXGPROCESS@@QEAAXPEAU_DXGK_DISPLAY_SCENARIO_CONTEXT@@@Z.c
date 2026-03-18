/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0155968
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0282560 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000843C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00084F4 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000EE40 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0250310 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(DXGPROCESS *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  char *v4; // r14
  _QWORD *v5; // rdi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v7; // rbx
  ADAPTER_DISPLAY **v8; // rsi
  __int64 v9; // rdx
  ADAPTER_DISPLAY *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v15[144]; // [rsp+40h] [rbp-69h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 13) + 16LL) != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 3260LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v4 = (char *)this + 176;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
  *((_QWORD *)this + 23) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 35);
  v14[0] = (char *)this + 280;
  while ( 1 )
  {
    v14[1] = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v14);
    v7 = Current;
    if ( !Current )
      break;
    v8 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 231);
    if ( v8 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, (struct DXGADAPTER *const)v8, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15, 0LL) >= 0 )
      {
        v10 = v8[334];
        if ( !v10 )
        {
          v12 = WdLogNewEntry5_WdAssertion(0LL, v9);
          *(_QWORD *)(v12 + 24) = 3296LL;
          WdLogEvent5_WdAssertion(v12);
          v10 = v8[334];
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v10, v7) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v8[334], v7) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v15);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v7, a2, 0);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15, v9);
      if ( v13[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13);
    }
    v5 = (_QWORD *)*v5;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
