/*
 * XREFs of ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005A1C0
 * Callers:
 *     ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C005AD90 (--_GVIDPN_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A4B0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001A9F4 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z @ 0x1C0022840 (-reset@-$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0023D7C (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0045550 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C0059FBC (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C005A01C (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012B11C (MonitorReleaseMonitorHandle.c)
 *     ??1Lockable@@UEAA@XZ @ 0x1C02E774C (--1Lockable@@UEAA@XZ.c)
 *     MonitorUnregisterMonitorEventCallback @ 0x1C02F4068 (MonitorUnregisterMonitorEventCallback.c)
 */

void __fastcall VIDPN_MGR::~VIDPN_MGR(VIDPN_MGR *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx

  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v3 = *((_QWORD *)this + 1);
  if ( !v3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v4);
    v3 = *((_QWORD *)this + 1);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v3 + 16)) )
  {
    v8 = *((_QWORD *)this + 1);
    if ( !v8 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v9);
      v8 = *((_QWORD *)this + 1);
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v8 + 16) + 208LL) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v10);
    }
  }
  if ( *((VIDPN_MGR **)this + 15) != (VIDPN_MGR *)((char *)this + 120) )
  {
    v11 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    WdLogEvent5_WdWarning(v11);
  }
  *(_QWORD *)(*((_QWORD *)this + 9) + 88LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 10) + 88LL) = 0LL;
  v12 = (_QWORD *)(*((_QWORD *)this + 10) + 24LL);
  if ( (_QWORD *)*v12 != v12 )
  {
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v12 - 8LL);
    if ( *v12 != 8LL )
    {
      do
      {
        v14 = *((_QWORD *)NextTarget + 14);
        if ( v14 )
        {
          v15 = *((_QWORD *)this + 1);
          if ( !v15 )
          {
            v16 = WdLogNewEntry5_WdAssertion(0LL, v5);
            WdLogEvent5_WdAssertion(v16);
            v15 = *((_QWORD *)this + 1);
          }
          MonitorReleaseMonitorHandle(*(_QWORD *)(v15 + 16), v14, NextTarget);
        }
        DMMVIDEOPRESENTTARGET::SetConnectedMonitor(NextTarget, 0LL);
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*((DMMVIDEOPRESENTTARGETSET **)this + 10), NextTarget);
      }
      while ( NextTarget );
    }
  }
  v17 = *((_QWORD *)this + 59);
  if ( !v17 )
    goto LABEL_24;
  v18 = *((_QWORD *)this + 1);
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdAssertion(0LL, v17);
    WdLogEvent5_WdAssertion(v19);
    v18 = *((_QWORD *)this + 1);
    v17 = *((_QWORD *)this + 59);
  }
  v21 = MonitorUnregisterMonitorEventCallback(v18, v17);
  if ( v21 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v20, v17);
    v24 = *((_QWORD *)this + 1);
    v25 = v22;
    if ( !v24 )
    {
      v26 = WdLogNewEntry5_WdAssertion(0LL, v23);
      WdLogEvent5_WdAssertion(v26);
      v24 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v25 + 24) = *(_QWORD *)(v24 + 16);
    WdLogEvent5_WdError(v25);
    *((_DWORD *)this + 14) = v21;
  }
  else
  {
LABEL_24:
    v27 = (_QWORD *)*((_QWORD *)this + 63);
    if ( v27 )
      DXGDIAGNOSTICS::`scalar deleting destructor'(v27, v17);
  }
  v28 = (void *)*((_QWORD *)this + 57);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  v29 = (void *)*((_QWORD *)this + 56);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  v30 = (void *)*((_QWORD *)this + 55);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  v31 = (void *)*((_QWORD *)this + 54);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  v32 = (void *)*((_QWORD *)this + 53);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  v33 = (void *)*((_QWORD *)this + 52);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  v34 = (void *)*((_QWORD *)this + 51);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  v35 = (void *)*((_QWORD *)this + 50);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  v36 = (void *)*((_QWORD *)this + 49);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  v37 = (void *)*((_QWORD *)this + 48);
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  v38 = (void *)*((_QWORD *)this + 47);
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  v39 = (void *)*((_QWORD *)this + 46);
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
  v40 = (void *)*((_QWORD *)this + 45);
  if ( v40 )
    ExFreePoolWithTag(v40, 0);
  v41 = (void *)*((_QWORD *)this + 44);
  if ( v41 )
    ExFreePoolWithTag(v41, 0);
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 36);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 35, 0LL);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 27);
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 19);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 12);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)this + 10, 0LL);
  auto_rc<DMMVIDEOPRESENTSOURCESET>::reset((__int64 *)this + 9, 0LL);
  Lockable::~Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
}
