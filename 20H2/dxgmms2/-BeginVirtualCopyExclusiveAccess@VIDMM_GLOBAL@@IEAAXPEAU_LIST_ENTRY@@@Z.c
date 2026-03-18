/*
 * XREFs of ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00AED9C
 * Callers:
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00B23FC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00B555C (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0010E40 (VidSchSuspendResumeDevice.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00115BC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  _QWORD **v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *i; // rbx
  struct _LIST_ENTRY *v7; // rdi
  struct _LIST_ENTRY *Blink; // rax

  v2 = (_QWORD **)((char *)this + 44568);
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 44472));
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    v7 = (struct _LIST_ENTRY *)(i - 2);
    if ( !*(i - 2) && *(i - 22) )
    {
      VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)*(i - 21), 1, 0, 2);
      Blink = a2->Blink;
      if ( Blink->Flink != a2 )
        __fastfail(3u);
      v7->Flink = a2;
      v7->Blink = Blink;
      Blink->Flink = v7;
      a2->Blink = v7;
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 8018);
}
