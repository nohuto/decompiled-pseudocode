/*
 * XREFs of HalpIommuGetAcpiDeviceMapCount @ 0x1403F0418
 * Callers:
 *     HalpIommuDmaRemappingCapable @ 0x1403F03B0 (HalpIommuDmaRemappingCapable.c)
 *     HalpIommuUnblockDevice @ 0x1404CA0C0 (HalpIommuUnblockDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuGetAcpiDeviceMapCount(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = HalpIommuList;
  result = 0LL;
  while ( (__int64 *)v1 != &HalpIommuList )
  {
    if ( *(_QWORD *)(v1 + 352) )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v1 + 352))(*(_QWORD *)(v1 + 16), a1);
      if ( (_DWORD)result )
        break;
    }
    v1 = *(_QWORD *)v1;
  }
  return result;
}
