/*
 * XREFs of IoMmuDetachDomainFromDevices @ 0x1C02CD288
 * Callers:
 *     DpiDestroyIoMmuContext @ 0x1C02CD42C (DpiDestroyIoMmuContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IoMmuDetachDomainFromDevices(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = *(unsigned int *)(a1 + 5880);
  if ( (result & 2) != 0 )
  {
    v3 = 0LL;
    if ( *(_DWORD *)(a1 + 504) )
    {
      if ( *(_DWORD *)(a1 + 2736) )
      {
        do
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00AFF40)(
                     *(_QWORD *)(a1 + 5752),
                     *(_QWORD *)(*(_QWORD *)(a1 + 2728) + 8 * v3),
                     0LL);
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (unsigned int)v3 < *(_DWORD *)(a1 + 2736) );
      }
    }
    else
    {
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00AFF40)(
               *(_QWORD *)(a1 + 5752),
               *(_QWORD *)(a1 + 32),
               0LL);
    }
  }
  return result;
}
