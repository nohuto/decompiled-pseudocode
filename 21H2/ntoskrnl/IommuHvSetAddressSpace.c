/*
 * XREFs of IommuHvSetAddressSpace @ 0x1404DA080
 * Callers:
 *     IommuDisableDevicePasid @ 0x1404D81D0 (IommuDisableDevicePasid.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuHvSetAddressSpace(_QWORD *a1, ULONG_PTR a2)
{
  __int64 v2; // r8
  int v5; // eax

  v2 = a2 | 1;
  if ( !a2 )
    v2 = 0LL;
  v5 = qword_140C4A2B0(*(unsigned int *)(*a1 + 16LL), *(unsigned int *)(a1[1] + 16LL), v2);
  if ( v5 < 0 )
    KeBugCheckEx(0x159u, 0x3200uLL, v5, *(unsigned int *)(a1[1] + 16LL), a2);
  return 0LL;
}
