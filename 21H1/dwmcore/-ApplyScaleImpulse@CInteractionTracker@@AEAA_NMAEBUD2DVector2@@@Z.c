/*
 * XREFs of ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x1801CBEB0
 * Callers:
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x1801CE174 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801CBF78 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801D1014 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

char __fastcall CInteractionTracker::ApplyScaleImpulse(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3)
{
  int v3; // eax
  char v4; // di
  __int64 v7; // rax

  v3 = *((_DWORD *)this + 42);
  v4 = 0;
  if ( !v3 || (unsigned int)(v3 - 2) <= 1 )
  {
    v4 = 1;
    CInteractionTracker::TransitionToInertia(this, 2LL);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 320LL))(*((_QWORD *)this + 40));
      *(float *)(v7 + 40) = a2 + *(float *)(v7 + 40);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 312LL))(*((_QWORD *)this + 41));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 312LL))(*((_QWORD *)this + 42));
      *(_QWORD *)((char *)this + 524) = *(_QWORD *)a3;
    }
  }
  return v4;
}
