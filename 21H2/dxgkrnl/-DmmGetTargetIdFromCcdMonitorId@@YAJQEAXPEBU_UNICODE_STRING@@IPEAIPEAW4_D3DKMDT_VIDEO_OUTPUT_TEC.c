/*
 * XREFs of ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x1C01AFC48
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C01AF874 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C0011C28 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0011CF4 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C01B0200 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const struct _UNICODE_STRING *a2,
        int a3,
        unsigned int *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6,
        bool *a7,
        unsigned __int8 *a8,
        unsigned __int8 *a9)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v9; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v13; // rcx
  unsigned __int8 *v14; // r8
  unsigned __int8 *v15; // r9
  __int64 Length; // rdx
  __int64 v17; // rdi
  __int64 v18; // rdi
  _QWORD *v19; // rdi
  _QWORD *v20; // r15
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r15
  DXGMONITOR *v22; // rax
  int CCDMonitorID; // eax
  unsigned int v24; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // r15
  DXGMONITOR *v28; // rbx
  char IsVirtualModeSupportDisabled; // si
  char v30; // al
  bool v31; // cl
  bool v32; // dl
  char v33; // al
  int v35; // eax
  DXGMONITOR *v36; // [rsp+50h] [rbp-49h]
  __int64 v37; // [rsp+58h] [rbp-41h] BYREF
  void **v38; // [rsp+60h] [rbp-39h] BYREF
  __int128 v39; // [rsp+68h] [rbp-31h]
  void **v40; // [rsp+78h] [rbp-21h]
  void *Source2; // [rsp+80h] [rbp-19h]
  __int64 v42; // [rsp+88h] [rbp-11h]
  __int64 v43; // [rsp+90h] [rbp-9h]
  DXGMONITOR *v44; // [rsp+E8h] [rbp+4Fh] BYREF
  int v45; // [rsp+F0h] [rbp+57h]

  v45 = a3;
  v9 = a6;
  if ( !a2 || !a4 || (v13 = a5) == 0LL || !a6 || !a7 || (v14 = a8) == 0LL || (v15 = a9) == 0LL )
  {
    WdLogSingleEntry4(2LL, a2, a4, a5, a6);
    return -1073741811LL;
  }
  *a7 = 0;
  *v14 = 0;
  *v15 = 0;
  *a4 = -1;
  *v13 = D3DKMDT_VOT_UNINITIALIZED;
  *v9 = D3DKMDT_VOT_UNINITIALIZED;
  Length = a2->Length;
  v38 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  Source2 = 0LL;
  v40 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v39 = 0LL;
  v42 = 0LL;
  v43 = 256LL;
  DMM::AutoBuffer<unsigned short>::Initialize(&v38, Length + 2, (__int64)v14, (__int64)v15);
  if ( !Source2 )
  {
    WdLogSingleEntry2(2LL, ((unsigned __int64)a2->Length >> 1) + 2, this);
    v35 = -1073741801;
LABEL_49:
    v24 = v35;
    goto LABEL_34;
  }
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_48:
    v35 = -1071775742;
    goto LABEL_49;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v17 = *((_QWORD *)this + 349);
  if ( !v17 )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_48;
  }
  v18 = *(_QWORD *)(v17 + 104);
  if ( !v18 )
  {
    WdLogSingleEntry1(2LL, this);
    v35 = -1071774923;
    goto LABEL_49;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v37, v18);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 120) + 72LL));
  v19 = *(_QWORD **)(v18 + 120);
  v45 = 0;
  v20 = (_QWORD *)v19[3];
  if ( v20 == v19 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v20 - 1)) == 0LL )
  {
LABEL_36:
    v24 = -1073741275;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v22 = (DXGMONITOR *)*((_QWORD *)NextTarget + 14);
    v36 = v22;
    if ( !*((_DWORD *)NextTarget + 23) )
    {
      if ( v22 )
      {
        CCDMonitorID = MonitorGetCCDMonitorID(v22, (unsigned int)v42 >> 1, (unsigned __int16 *)Source2);
        v24 = CCDMonitorID;
        if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
        {
          if ( CCDMonitorID < 0 )
          {
            WdLogSingleEntry2(3LL, v36, CCDMonitorID);
            goto LABEL_33;
          }
          if ( RtlCompareMemory(a2->Buffer, Source2, a2->Length) == a2->Length )
            break;
        }
      }
    }
LABEL_35:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v19, NextTarget);
    if ( !NextTarget )
      goto LABEL_36;
  }
  if ( v45 )
  {
    --v45;
    goto LABEL_35;
  }
  v25 = a5;
  *a4 = *((_DWORD *)NextTarget + 6);
  *v25 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20);
  *a6 = *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 21);
  v26 = *a4;
  if ( *a4 != -1 )
  {
    v27 = *((_QWORD *)this + 349);
    if ( v27 )
    {
      MONITOR_MGR::AcquireMonitorShared(&v44, (__int64)this, v26);
      v28 = v44;
      if ( !v44 )
      {
        WdLogSingleEntry1(2LL, -1073741632LL);
        RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v44);
        goto LABEL_29;
      }
      if ( *((_DWORD *)v44 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v28);
      ExReleaseResourceLite((PERESOURCE)((char *)v28 + 24));
      KeLeaveCriticalRegion();
      if ( !IsVirtualModeSupportDisabled )
      {
LABEL_29:
        v30 = *(_BYTE *)(v27 + 289);
        v31 = v30 == 0;
        v32 = *(_BYTE *)(v27 + 290) == 0;
        if ( !v30 || (v33 = 0, (*(_DWORD *)(v27 + 24) & 0x20) == 0) )
LABEL_31:
          v33 = 1;
        v24 = 0;
        *a7 = !v31;
        *a8 = !v32;
        *a9 = v33 ^ 1;
        goto LABEL_33;
      }
      v31 = 1;
      v32 = 1;
      goto LABEL_31;
    }
    WdLogSingleEntry1(2LL, 9372LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      9372LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v26 = *a4;
  }
  v24 = -1073741811;
  WdLogSingleEntry3(2LL, this, v26, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"IsVirtualizationDisabledForTarget failed on VidPn Target 0x%I64x adapter 0x%I64x, returning 0x%I64x.",
    (__int64)this,
    *a4,
    -1073741811LL,
    0LL,
    0LL);
LABEL_33:
  ReferenceCounted::Release((ReferenceCounted *)(v19 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v37 + 40));
LABEL_34:
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v38);
  return v24;
}
