/*
 * XREFs of ?size@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@AEBA_KXZ @ 0x1800AF454
 * Callers:
 *     ?clear_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800AF17C (-clear_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800AF280 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800AFDD8 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800AF41C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<IDeviceResource *>::size(_QWORD *a1)
{
  int v1; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)a1 & 3;
  if ( !v1 )
    return 1LL;
  if ( v1 == 1 )
    return *(_QWORD *)(detail::pointer_buffer_impl<IDeviceResource *>::first(a1) - 16);
  if ( (unsigned int)(v1 - 2) > 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  return 0LL;
}
