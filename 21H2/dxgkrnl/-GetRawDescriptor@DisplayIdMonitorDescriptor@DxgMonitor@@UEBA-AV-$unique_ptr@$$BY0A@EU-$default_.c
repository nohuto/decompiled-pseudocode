/*
 * XREFs of ?GetRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C03BB1D0
 * Callers:
 *     ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C03BADE0 (-GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

_QWORD *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetRawDescriptor(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4)
{
  void *v7; // rbx

  v7 = (void *)operator new[](*(unsigned int *)(a1 + 8), 0x4D677844u, 256LL, a4);
  if ( v7 )
  {
    *a3 = *(_DWORD *)(a1 + 8);
    memmove(v7, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 8));
    *a2 = v7;
  }
  else
  {
    *a3 = 0;
    *a2 = 0LL;
  }
  return a2;
}
