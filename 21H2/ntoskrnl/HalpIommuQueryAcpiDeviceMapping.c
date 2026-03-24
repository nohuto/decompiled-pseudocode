/*
 * XREFs of HalpIommuQueryAcpiDeviceMapping @ 0x1404C9C64
 * Callers:
 *     HalpIommuDmaRemappingCapable @ 0x1403F0240 (HalpIommuDmaRemappingCapable.c)
 *     HalpIommuBlockDevice @ 0x1404C8E60 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1404C9E80 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x1408649C4 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
