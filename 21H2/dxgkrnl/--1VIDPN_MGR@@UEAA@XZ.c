/*
 * XREFs of ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0067D34
 * Callers:
 *     ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C0068810 (--_GVIDPN_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001F9C4 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z @ 0x1C00285A0 (-reset@-$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0029D98 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0053764 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C0067AD0 (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C0067B30 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     ??1Lockable@@UEAA@XZ @ 0x1C03A7604 (--1Lockable@@UEAA@XZ.c)
 *     MonitorUnregisterMonitorEventCallback @ 0x1C03B1608 (MonitorUnregisterMonitorEventCallback.c)
 */

void __fastcall VIDPN_MGR::~VIDPN_MGR(VIDPN_MGR *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  DXGDIAGNOSTICS *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx

  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 11) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = *((_QWORD *)this + 1);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v2 + 16)) )
  {
    v3 = *((_QWORD *)this + 1);
    if ( !v3 )
    {
      WdLogSingleEntry0(1LL);
      v3 = *((_QWORD *)this + 1);
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v3 + 16) + 208LL) )
      WdLogSingleEntry0(1LL);
  }
  if ( *((VIDPN_MGR **)this + 20) != (VIDPN_MGR *)((char *)this + 160) )
    WdLogSingleEntry0(3LL);
  *(_QWORD *)(*((_QWORD *)this + 14) + 88LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 15) + 88LL) = 0LL;
  v4 = (_QWORD *)(*((_QWORD *)this + 15) + 24LL);
  if ( (_QWORD *)*v4 != v4 )
  {
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v4 - 8LL);
    if ( *v4 != 8LL )
    {
      do
      {
        v6 = *((_QWORD *)NextTarget + 14);
        if ( v6 )
        {
          v7 = *((_QWORD *)this + 1);
          if ( !v7 )
          {
            WdLogSingleEntry0(1LL);
            v7 = *((_QWORD *)this + 1);
          }
          MonitorReleaseMonitorHandle(*(_QWORD *)(v7 + 16), v6, NextTarget);
        }
        DMMVIDEOPRESENTTARGET::SetConnectedMonitor(NextTarget, 0LL);
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*((DMMVIDEOPRESENTTARGETSET **)this + 15), NextTarget);
      }
      while ( NextTarget );
    }
  }
  v8 = *((_QWORD *)this + 66);
  if ( !v8 )
    goto LABEL_24;
  v9 = *((_QWORD *)this + 1);
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    v9 = *((_QWORD *)this + 1);
  }
  v10 = MonitorUnregisterMonitorEventCallback(v9, v8);
  if ( v10 < 0 )
  {
    v11 = *((_QWORD *)this + 1);
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      v11 = *((_QWORD *)this + 1);
    }
    WdLogSingleEntry1(2LL, *(_QWORD *)(v11 + 16));
    *((_DWORD *)this + 24) = v10;
  }
  else
  {
LABEL_24:
    v12 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 70);
    if ( v12 )
      DXGDIAGNOSTICS::`scalar deleting destructor'(v12);
  }
  v13 = (void *)*((_QWORD *)this + 64);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = (void *)*((_QWORD *)this + 63);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = (void *)*((_QWORD *)this + 62);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = (void *)*((_QWORD *)this + 61);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = (void *)*((_QWORD *)this + 60);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  v18 = (void *)*((_QWORD *)this + 59);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  v19 = (void *)*((_QWORD *)this + 58);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  v20 = (void *)*((_QWORD *)this + 57);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = (void *)*((_QWORD *)this + 56);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = (void *)*((_QWORD *)this + 55);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  v23 = (void *)*((_QWORD *)this + 54);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  v24 = (void *)*((_QWORD *)this + 53);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  v25 = (void *)*((_QWORD *)this + 52);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  v26 = (void *)*((_QWORD *)this + 51);
  if ( v26 )
    ExFreePoolWithTag(v26, 0);
  v27 = (void *)*((_QWORD *)this + 50);
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
  v28 = (void *)*((_QWORD *)this + 49);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 41);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 40, 0LL);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 32);
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 24);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 17);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 16, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)this + 15, 0LL);
  auto_rc<DMMVIDEOPRESENTSOURCESET>::reset((__int64 *)this + 14, 0LL);
  Lockable::~Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
}
