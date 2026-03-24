/*
 * XREFs of PiIommuPutInterface @ 0x140765EF8
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407655E0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x140765678 (PiIommuGetInterface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PiIommuPutInterface(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 24);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 8));
  return result;
}
