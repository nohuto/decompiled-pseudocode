/*
 * XREFs of ?GetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18007B580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewOperation::GetTitlebarConfiguration(
        ApplicationViewOperation *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 24);
  if ( !v3 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *a2 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)this + 24);
  return 0LL;
}
