/*
 * XREFs of ?IsUpToDate@CDWMDXGIEnumeration@@QEBA_NXZ @ 0x1800554EC
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002CD30 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDWMDXGIEnumeration::IsUpToDate(CDWMDXGIEnumeration *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( v1 )
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 104LL))(v1) != 0;
  return v2;
}
