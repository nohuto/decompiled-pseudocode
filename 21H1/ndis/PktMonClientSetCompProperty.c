/*
 * XREFs of PktMonClientSetCompProperty @ 0x1C00C65F8
 * Callers:
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0100928 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0100A84 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106ABC (-ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PktMonClientSetCompProperty(_QWORD *a1, int a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v5; // ebx
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7[0] = 24;
  v7[1] = a2;
  v8 = a3;
  v9 = a4;
  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
  {
    v5 = (*((__int64 (__fastcall **)(PVOID, _QWORD, _DWORD *))*(&ProviderBindingContext + 1) + 3))(
           ProviderBindingContext,
           *a1,
           v7);
    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v5;
}
