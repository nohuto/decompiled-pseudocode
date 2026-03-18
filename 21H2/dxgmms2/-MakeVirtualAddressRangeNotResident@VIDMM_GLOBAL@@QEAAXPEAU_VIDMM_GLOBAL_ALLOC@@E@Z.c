/*
 * XREFs of ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00AAB04
 * Callers:
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00AA760 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0085748 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C00A7158 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        void (*a3)(void *),
        void *a4)
{
  char v4; // r12
  char *v7; // rdi
  char *i; // rbx
  VIDMM_PROCESS ***j; // rsi

  v4 = (char)a3;
  if ( (*((_BYTE *)this + 40936) & 2) != 0 )
  {
    v7 = (char *)a2 + 272;
    for ( i = (char *)*((_QWORD *)a2 + 34); i != v7; i = *(char **)i )
    {
      for ( j = (VIDMM_PROCESS ***)*((_QWORD *)i - 2); j != (VIDMM_PROCESS ***)(i - 16); j = (VIDMM_PROCESS ***)*j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(this, j - 5);
    }
    if ( v4 )
    {
      VIDMM_GLOBAL::FlushPagingBuffer(this, 0, a3, a4);
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, a2);
    }
  }
}
