/*
 * XREFs of ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18008919C
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800340CC (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??R_lambda_cba343ad3d751d9ae6873e9ce73e4f02_@@QEBAXXZ @ 0x180158414 (--R_lambda_cba343ad3d751d9ae6873e9ce73e4f02_@@QEBAXXZ.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x180159DE8 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ @ 0x1801613E4 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
