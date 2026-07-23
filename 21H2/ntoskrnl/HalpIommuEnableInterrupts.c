/*
 * XREFs of HalpIommuEnableInterrupts @ 0x1403AD37C
 * Callers:
 *     HalpIommuInitSystem @ 0x14099C9D0 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpIommuEnableInterrupts()
{
  __int64 i; // rbx
  __int64 result; // rax

  if ( !HalpHvIommu )
  {
    for ( i = HalpIommuList; (__int64 *)i != &HalpIommuList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 288) )
        result = (*(__int64 (__fastcall **)(_QWORD))(i + 272))(*(_QWORD *)(i + 16));
    }
  }
  return result;
}
