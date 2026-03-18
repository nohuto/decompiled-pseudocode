/*
 * XREFs of ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CFBE8
 * Callers:
 *     ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x1801CE7FC (-ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTR.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CFDAC (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801D0120 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801CD288 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CFDAC (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180215B54 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetMaxPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v4; // rcx
  float v5; // xmm0_4
  float v6; // xmm2_4
  char v7; // dl
  float v8; // xmm1_4
  float v9; // xmm0_4
  _DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 12) - *(_QWORD *)a2;
  if ( !v4 )
    v4 = *((unsigned int *)this + 26) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v4 )
  {
    LODWORD(v5) = COERCE_UNSIGNED_INT(*((float *)this + 24) - *(float *)a2) & _xmm;
    LODWORD(v6) = COERCE_UNSIGNED_INT(*((float *)this + 25) - *((float *)a2 + 1)) & _xmm;
    *((_QWORD *)this + 12) = *(_QWORD *)a2;
    v7 = (v5 >= 0.0000011920929) + 4;
    *((_DWORD *)this + 26) = *((_DWORD *)a2 + 2);
    if ( v6 >= 0.0000011920929 )
      v7 = ((v5 >= 0.0000011920929) + 4) | 2;
    CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax((__int64)this, v7);
    v8 = fminf(*((float *)this + 22), *((float *)this + 25));
    v10[0] = fminf(*((float *)this + 21), *((float *)this + 24));
    v9 = fminf(*((float *)this + 23), *((float *)this + 26));
    *(float *)&v10[1] = v8;
    *(float *)&v10[2] = v9;
    CInteractionTracker::SetMinPosition(this, (const struct D2DVector3 *)v10);
    if ( !*((_DWORD *)this + 42) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 192));
    CResource::InvalidateAnimationSources(this);
  }
}
