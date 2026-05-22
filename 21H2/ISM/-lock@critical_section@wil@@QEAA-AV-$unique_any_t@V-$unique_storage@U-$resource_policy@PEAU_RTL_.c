/*
 * XREFs of ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180068580
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800444B0 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180145D40 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z @ 0x180145ECC (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x180145FB8 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z @ 0x1801460CC (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall wil::critical_section::lock(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  EnterCriticalSection(a1);
  *a2 = a1;
  return a2;
}
