/*
 * XREFs of ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x180219358
 * Callers:
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x18021BA80 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180113E04 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18021E3F8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

char __fastcall CInteractionTracker::ApplyScaleImpulse(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3)
{
  int v3; // eax
  char v4; // di
  __int64 v7; // rax

  v3 = *((_DWORD *)this + 44);
  v4 = 0;
  if ( !v3 || (unsigned int)(v3 - 2) <= 1 )
  {
    v4 = 1;
    CInteractionTracker::TransitionToInertia(this, 2LL);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 328LL))(*((_QWORD *)this + 41));
      *(float *)(v7 + 40) = a2 + *(float *)(v7 + 40);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 320LL))(*((_QWORD *)this + 42));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 320LL))(*((_QWORD *)this + 43));
      *(_QWORD *)((char *)this + 532) = *(_QWORD *)a3;
    }
  }
  return v4;
}
