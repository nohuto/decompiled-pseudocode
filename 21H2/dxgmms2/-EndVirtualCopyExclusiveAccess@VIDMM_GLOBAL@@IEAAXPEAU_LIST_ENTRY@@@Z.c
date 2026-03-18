/*
 * XREFs of ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00D64B4
 * Callers:
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00AAF1C (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00ABBFC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0013A10 (VidSchSuspendResumeDevice.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v6; // rdi
  struct _LIST_ENTRY *v7; // rbx

  if ( byte_1C006E941 < 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerExit, a3, 8018);
  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v6 = Flink;
    v7 = Flink;
    Flink = Flink->Flink;
    VidSchSuspendResumeDevice((_KEVENT *)v6[-10].Flink, 0, 0, 2);
    v7->Flink = 0LL;
    v6->Blink = 0LL;
  }
  ExReleasePushLockSharedEx((char *)this + 44480, 0LL);
  KeLeaveCriticalRegion();
}
