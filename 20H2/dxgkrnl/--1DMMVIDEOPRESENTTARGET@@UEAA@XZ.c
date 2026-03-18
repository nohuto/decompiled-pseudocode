/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02E3FF0
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C005C090 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007384 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0008D00 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005C13C (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005C1C0 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01437AC (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C0168920 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        char **a2,
        __int64 a3,
        __int64 a4)
{
  struct HDXGMONITOR__ *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  VIDPN_MGR *v8; // rdi
  __int64 v9; // rax
  char *v10; // rcx
  __int64 v11; // rax
  DMMVIDEOPRESENTTARGET *v12; // rcx
  DMMVIDEOPRESENTTARGET *v13; // rcx
  DXGADAPTER **v14; // rcx

  v4 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 5);
    if ( !v6 )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v7);
      v6 = *((_QWORD *)this + 5);
    }
    v8 = *(VIDPN_MGR **)(v6 + 88);
    if ( !v8 )
    {
      v9 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v9);
    }
    VIDPN_MGR::ReleaseMonitorHandle(v8, v4, a3, a4);
  }
  v10 = (char *)this + 512;
  v11 = *((_QWORD *)this + 64);
  if ( v11 )
  {
    if ( *(char **)(v11 + 8) != v10 || (a2 = (char **)*((_QWORD *)this + 65), *a2 != v10) )
      __fastfail(3u);
    *a2 = (char *)v11;
    *(_QWORD *)(v11 + 8) = a2;
  }
  v12 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
  if ( v12 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v12, this);
  v13 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 66);
  if ( v13 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v13, this);
  if ( *((_QWORD *)this + 67) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this, (__int64)a2, a3, a4);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), -1) != 5 )
    {
      v14 = (DXGADAPTER **)*((_QWORD *)this + 67);
      if ( *v14 )
      {
        DXGADAPTER::ReleaseReferenceNoTracking(*v14);
        v14 = (DXGADAPTER **)*((_QWORD *)this + 67);
      }
      if ( v14[18] )
      {
        IoFreeWorkItem(v14[18]);
        v14 = (DXGADAPTER **)*((_QWORD *)this + 67);
      }
      operator delete(v14);
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64), (__int64)a2);
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
