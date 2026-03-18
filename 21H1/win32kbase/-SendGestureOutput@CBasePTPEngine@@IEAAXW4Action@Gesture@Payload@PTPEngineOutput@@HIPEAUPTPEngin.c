/*
 * XREFs of ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C01CA6B4
 * Callers:
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C01C8E40 (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x1C01CA784 (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

void *__fastcall CBasePTPEngine::SendGestureOutput(__int64 a1, int a2, int a3, unsigned int a4, void *Src)
{
  void *v5; // rdi

  *(_DWORD *)(a1 + 528) = a2;
  v5 = (void *)(a1 + 524);
  *(_DWORD *)(a1 + 540) = a4;
  *(_DWORD *)(a1 + 524) = 2;
  *(_DWORD *)(a1 + 532) = a3 != 0;
  memmove((void *)(a1 + 544), Src, 96LL * a4);
  (***(void (__fastcall ****)(_QWORD, void *))(a1 + 8))(*(_QWORD *)(a1 + 8), v5);
  return memset(v5, 0, 0x254uLL);
}
