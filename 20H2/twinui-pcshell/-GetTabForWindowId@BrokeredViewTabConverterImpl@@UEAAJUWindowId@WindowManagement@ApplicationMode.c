/*
 * XREFs of ?GetTabForWindowId@BrokeredViewTabConverterImpl@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x1802625F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::GetTabForWindowId(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 48LL))(*(_QWORD *)(a1 + 64));
}
