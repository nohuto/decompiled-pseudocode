/*
 * XREFs of IommuDomainDetachDeviceEx @ 0x140528320
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpIommuLeaveDmaDomain @ 0x14051B4F4 (HalpIommuLeaveDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x140529200 (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainDetachDeviceEx(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 24) && (v5 = 0LL, (unsigned __int8)IommupFindAndPopCachedDevice(a1, &v5)) )
  {
    v2 = HalpIommuLeaveDmaDomain(a1, *(_QWORD *)(a1 + 24));
    if ( v2 >= 0 )
      HalpMmAllocCtxFree(v3, v5);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v2;
}
