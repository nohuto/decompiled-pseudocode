/*
 * XREFs of ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C0109288
 * Callers:
 *     ndisMiniportQueryDeviceProperty @ 0x1C01090D8 (ndisMiniportQueryDeviceProperty.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C0109200 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C01157C4 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 * Callees:
 *     memset @ 0x1C003FE40 (memset.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<_UNICODE_STRING>(_QWORD *a1, __int64 a2, SIZE_T a3)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v6; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x6E61444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    *v6 = 0LL;
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
