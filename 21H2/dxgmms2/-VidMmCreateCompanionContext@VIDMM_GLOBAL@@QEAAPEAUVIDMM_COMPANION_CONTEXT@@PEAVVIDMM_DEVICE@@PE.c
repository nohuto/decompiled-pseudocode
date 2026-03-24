/*
 * XREFs of ?VidMmCreateCompanionContext@VIDMM_GLOBAL@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@PEAVVIDMM_DEVICE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00B6008
 * Callers:
 *     VidMmCreateCompanionContext @ 0x1C0022D20 (VidMmCreateCompanionContext.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F95C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

struct VIDMM_COMPANION_CONTEXT *__fastcall VIDMM_GLOBAL::VidMmCreateCompanionContext(
        VIDMM_GLOBAL *this,
        VIDMM_PROCESS **a2,
        struct _VIDSCH_CONTEXT *a3)
{
  char *v6; // rax
  _QWORD *v7; // rbx

  v6 = (char *)operator new[](0x38uLL, 0x39346956u, (POOL_TYPE)512);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *((_OWORD *)v6 + 1) = 0LL;
    *((_OWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    KeInitializeSemaphore((PRKSEMAPHORE)(v6 + 24), 128, 128);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v7[1] = a3;
    *v7 = VIDMM_PROCESS::GetVirtualAddressAllocator(a2[1], *(_DWORD *)(*((_QWORD *)this + 3) + 232LL), 0xFFFFFFFF);
    v7[2] = a2;
  }
  return (struct VIDMM_COMPANION_CONTEXT *)v7;
}
