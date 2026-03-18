/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2@@YAEPEAX@Z @ 0x1C002AD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2(_DWORD *a1)
{
  a1[530] = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[57])(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 2696LL),
              a1 + 2);
  return 1;
}
