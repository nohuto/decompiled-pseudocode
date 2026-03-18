/*
 * XREFs of ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800AF624
 * Callers:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x180062F50 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18007B780 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800AF5F8 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

CD2DTarget *__fastcall CD2DTarget::`scalar deleting destructor'(CD2DTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v5 = v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  operator delete(this);
  return this;
}
