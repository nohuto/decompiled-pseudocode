/*
 * XREFs of ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00D5188
 * Callers:
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00AAF1C (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00ABBFC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0013A10 (VidSchSuspendResumeDevice.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  _QWORD **v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *i; // rbx
  struct _LIST_ENTRY *v7; // rdi
  struct _LIST_ENTRY *Blink; // rax

  v2 = (_QWORD **)((char *)this + 44576);
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 44480));
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    v7 = (struct _LIST_ENTRY *)(i - 2);
    if ( !*(i - 2) && *(i - 23) )
    {
      VidSchSuspendResumeDevice((_KEVENT *)*(i - 22), 1, 0, 2);
      Blink = a2->Blink;
      if ( Blink->Flink != a2 )
        __fastfail(3u);
      v7->Flink = a2;
      v7->Blink = Blink;
      Blink->Flink = v7;
      a2->Blink = v7;
    }
  }
  if ( byte_1C006E941 < 0 )
    McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, v5, 8018);
}
