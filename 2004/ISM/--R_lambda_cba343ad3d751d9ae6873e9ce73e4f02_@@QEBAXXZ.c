/*
 * XREFs of ??R_lambda_cba343ad3d751d9ae6873e9ce73e4f02_@@QEBAXXZ @ 0x180158414
 * Callers:
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x180159DE8 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _lambda_cba343ad3d751d9ae6873e9ce73e4f02_::operator()(HANDLE **a1)
{
  CancelIoEx(**a1, 0LL);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    *a1,
    (void *)0xFFFFFFFFFFFFFFFFLL);
}
