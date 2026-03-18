/*
 * XREFs of HalpIommuQueryAcpiDeviceMapping @ 0x14051B7E4
 * Callers:
 *     HalpIommuBlockDevice @ 0x14051A460 (HalpIommuBlockDevice.c)
 *     HalpIommuDmaRemappingCapable @ 0x14051A990 (HalpIommuDmaRemappingCapable.c)
 *     HalpIommuUnblockDevice @ 0x14051BA00 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140846E20 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
