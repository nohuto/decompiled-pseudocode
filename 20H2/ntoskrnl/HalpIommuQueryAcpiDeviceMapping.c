/*
 * XREFs of HalpIommuQueryAcpiDeviceMapping @ 0x1404C8294
 * Callers:
 *     HalpIommuDmaRemappingCapable @ 0x1403EF8A0 (HalpIommuDmaRemappingCapable.c)
 *     HalpIommuBlockDevice @ 0x1404C7490 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1404C84B0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140866DB4 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuQueryAcpiDeviceMapping(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = HalpIommuList;
  result = 3221226021LL;
  while ( (__int64 *)v4 != &HalpIommuList )
  {
    if ( *(_QWORD *)(v4 + 344) )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v4 + 344))(*(_QWORD *)(v4 + 16), a1, a2);
      if ( (_DWORD)result != -1073741275 )
        break;
    }
    v4 = *(_QWORD *)v4;
  }
  return result;
}
