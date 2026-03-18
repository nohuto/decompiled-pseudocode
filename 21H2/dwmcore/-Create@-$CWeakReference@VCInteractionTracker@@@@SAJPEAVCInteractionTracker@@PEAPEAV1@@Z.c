/*
 * XREFs of ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x180254384
 * Callers:
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802544DC (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1802643E4 (-Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A55C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWeakReference<CInteractionTracker>::Create(
        struct CResource *a1,
        struct CWeakResourceReference **a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct CWeakResourceReference *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = CWeakResourceReference::Get(a1, &v7);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x94u);
    if ( v7 )
      (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    *a2 = v7;
  }
  return v5;
}
