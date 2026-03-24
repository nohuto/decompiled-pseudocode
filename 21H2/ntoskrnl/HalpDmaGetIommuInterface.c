/*
 * XREFs of HalpDmaGetIommuInterface @ 0x1404B7984
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C36A8 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     IoQueryInterface @ 0x140765590 (IoQueryInterface.c)
 */

__int64 __fastcall HalpDmaGetIommuInterface(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = IoQueryInterface(a1, 0, (unsigned int)&GUID_IOMMU_BUS_INTERFACE, 80, 2, a1, (void *)a2);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a2 + 64) )
    {
      return 0LL;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(a2 + 24))(*(_QWORD *)(a2 + 8));
      return 3221225474LL;
    }
  }
  return result;
}
