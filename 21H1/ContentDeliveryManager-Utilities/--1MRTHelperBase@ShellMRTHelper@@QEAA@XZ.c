/*
 * XREFs of ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ @ 0x18009F5D4
 * Callers:
 *     ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x18009F8E8 (-PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@W.c)
 *     ??1MRTHelperForPackage@ShellMRTHelper@@QEAA@XZ @ 0x18009FAD4 (--1MRTHelperForPackage@ShellMRTHelper@@QEAA@XZ.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::PrefetchDisplayName_::_1_::dtor$2 @ 0x1800D46E3 (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayI_ea_1800D46E3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ShellMRTHelper::MRTHelperBase::~MRTHelperBase(ShellMRTHelper::MRTHelperBase *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CoTaskMemFree(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
