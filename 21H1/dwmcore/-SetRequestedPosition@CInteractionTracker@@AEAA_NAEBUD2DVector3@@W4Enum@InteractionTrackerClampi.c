/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1801D02D8
 * Callers:
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x1801CE8F4 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IN.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x1801CE974 (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801CCB20 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1801CCB50 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDBC (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CFF70 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D0F38 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801D42C8 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180215B54 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(__int64 a1, float *a2, int a3, int a4)
{
  char v5; // di
  int v6; // ecx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  struct CResource *v12; // rdx
  float v13; // eax
  unsigned __int32 v14; // xmm0_4
  double v15; // xmm2_8
  float v16; // xmm3_4
  __int64 v17; // rcx
  float v18; // xmm0_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  CInteractionTrackerBindingManager *v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-30h] BYREF
  float v25; // [rsp+28h] [rbp-28h]
  float v26[4]; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 168);
  if ( v6 )
  {
    v9 = v6 - 2;
    if ( !v9 )
      goto LABEL_12;
    if ( v9 != 1 )
      return v5;
    v10 = *(_QWORD *)(a1 + 344);
    v11 = *(_QWORD *)(a1 + 352);
    *(_BYTE *)(a1 + 533) &= ~2u;
    if ( a4 && v11 )
    {
      if ( a4 == 1 )
      {
        if ( v10 )
        {
          v12 = *(struct CResource **)(v10 + 16);
          if ( v12 )
          {
            *((_BYTE *)v12 + 208) &= ~1u;
            CResource::UnRegisterNotifierInternal((CResource *)a1, v12);
          }
          CInteractionTracker::ClearCustomAnimation((CInteractionTracker *)a1, 0);
        }
        *(_BYTE *)(a1 + 533) |= 2u;
      }
    }
    else
    {
LABEL_12:
      CInteractionTracker::TransitionToIdle((CInteractionTracker *)a1);
    }
  }
  v13 = a2[2];
  v24 = *(_QWORD *)a2;
  v25 = v13;
  if ( a3 )
  {
    v19 = v25;
    v18 = *((float *)&v24 + 1);
    v16 = *(float *)&v24;
  }
  else
  {
    v14 = CInteractionTracker::ClampValueToBoundary(a1, 0LL, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a2)).m128_u32[0];
    *(_QWORD *)&v15 = *((unsigned int *)a2 + 1);
    LODWORD(v24) = v14;
    v16 = *(float *)&v14;
    LODWORD(v18) = CInteractionTracker::ClampValueToBoundary(v17, 1LL, v15).m128_u32[0];
    v19 = 0.0;
    *((float *)&v24 + 1) = v18;
    v25 = 0.0;
  }
  v20 = v18 - *(float *)(a1 + 76);
  v21 = v19 - *(float *)(a1 + 80);
  v26[0] = v16 - *(float *)(a1 + 72);
  v26[1] = v20;
  v26[2] = v21;
  CInteractionTracker::SetPosition(a1, (__int64)&v24, 0);
  v22 = *(CInteractionTrackerBindingManager **)(a1 + 632);
  if ( v22 )
  {
    *(_BYTE *)(a1 + 533) |= 1u;
    CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
      v22,
      (struct CInteractionTracker *)a1,
      (const struct D2DVector3 *)v26,
      1);
    CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)a1, 0);
  }
  InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)(a1 + 192));
  return 1;
}
