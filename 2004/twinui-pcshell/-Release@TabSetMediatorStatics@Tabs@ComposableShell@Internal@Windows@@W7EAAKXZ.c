/*
 * XREFs of ?Release@TabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ @ 0x1800F57C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics::Release(__int64 a1)
{
  return BrokeredViewTabConverterStatics::Release((BrokeredViewTabConverterStatics *)(a1 - 8));
}
