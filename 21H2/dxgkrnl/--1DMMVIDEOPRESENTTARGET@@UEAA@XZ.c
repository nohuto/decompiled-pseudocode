/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C039F524
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C00698C0 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000A6A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000C768 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C006996C (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00699F0 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01D730C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01E9B14 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(DMMVIDEOPRESENTTARGET *this)
{
  struct HDXGMONITOR__ *v1; // rsi
  __int64 v3; // rax
  VIDPN_MGR *v4; // rdi
  char *v5; // rcx
  __int64 v6; // rax
  char **v7; // rdx
  DMMVIDEOPRESENTTARGET *v8; // rcx
  DMMVIDEOPRESENTTARGET *v9; // rcx
  DXGADAPTER **v10; // rcx

  v1 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 5);
    if ( !v3 )
    {
      WdLogSingleEntry0(1LL);
      v3 = *((_QWORD *)this + 5);
    }
    v4 = *(VIDPN_MGR **)(v3 + 88);
    if ( !v4 )
      WdLogSingleEntry0(1LL);
    VIDPN_MGR::ReleaseMonitorHandle(v4, v1);
  }
  v5 = (char *)this + 512;
  v6 = *((_QWORD *)this + 64);
  if ( v6 )
  {
    if ( *(char **)(v6 + 8) != v5 || (v7 = (char **)*((_QWORD *)this + 65), *v7 != v5) )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  v8 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
  if ( v8 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v8, this);
  v9 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 66);
  if ( v9 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v9, this);
  if ( *((_QWORD *)this + 67) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), -1) != 5 )
    {
      v10 = (DXGADAPTER **)*((_QWORD *)this + 67);
      if ( *v10 )
      {
        DXGADAPTER::ReleaseReferenceNoTracking(*v10);
        v10 = (DXGADAPTER **)*((_QWORD *)this + 67);
      }
      if ( v10[18] )
      {
        IoFreeWorkItem(v10[18]);
        v10 = (DXGADAPTER **)*((_QWORD *)this + 67);
      }
      operator delete(v10);
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
