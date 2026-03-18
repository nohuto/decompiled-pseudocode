/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR@@YAEPEAX@Z @ 0x1C002B060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR(_DWORD *a1)
{
  a1[530] = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[44])(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 2672LL),
              a1 + 2);
  return 1;
}
