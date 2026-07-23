/*
 * XREFs of PiIommuPutInterface @ 0x1407660B8
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407657A0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x140765838 (PiIommuGetInterface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PiIommuPutInterface(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 24);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 8));
  return result;
}
