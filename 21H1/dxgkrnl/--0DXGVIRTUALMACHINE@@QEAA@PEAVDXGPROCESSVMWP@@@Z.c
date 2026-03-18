/*
 * XREFs of ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C027F574
 * Callers:
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0280EEC (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C0171204 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGVIRTUALMACHINE *__fastcall DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(DXGVIRTUALMACHINE *this, struct DXGPROCESSVMWP *a2)
{
  __int64 v3; // rcx
  struct DXGGLOBAL *v4; // rdi
  __int64 v5; // rdx
  int v6; // r9d
  __int64 v7; // r8
  struct DXGGLOBAL *Global; // rsi
  struct DXGGLOBAL **v9; // rcx

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 45;
  *((_DWORD *)this + 22) = -1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 11;
  *((_DWORD *)this + 30) = -1;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)this + 128, 1);
  *(_DWORD *)(v3 + 64) = 0;
  *(_QWORD *)(v3 + 72) = 0LL;
  v4 = (DXGVIRTUALMACHINE *)((char *)this + 8);
  *(_QWORD *)(v3 + 80) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *(_OWORD *)((char *)this + 248) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_WORD *)this + 148) = 0;
  *((_BYTE *)this + 298) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = v5;
  *((_DWORD *)this + 82) = v6;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 42) = (char *)this + 336;
  *((_QWORD *)this + 7) = v7;
  *((_QWORD *)this + 30) = 0LL;
  Global = DXGGLOBAL::GetGlobal(v3, v5);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 320));
  v9 = (struct DXGGLOBAL **)*((_QWORD *)Global + 185);
  if ( *v9 != (struct DXGGLOBAL *)((char *)Global + 1472) )
    __fastfail(3u);
  *((_QWORD *)this + 2) = v9;
  *(_QWORD *)v4 = (char *)Global + 1472;
  *v9 = v4;
  *((_QWORD *)Global + 185) = v4;
  ++*((_DWORD *)Global + 372);
  *((_QWORD *)Global + 41) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Global + 320, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
