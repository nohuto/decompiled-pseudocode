/*
 * XREFs of ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CD2F8
 * Callers:
 *     ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x1801CBF0C (-ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTR.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CD4B8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801CD7E0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A0060 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801CA988 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CD4B8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180213184 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetMaxPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  char v5; // cl
  bool v6; // zf
  float v7; // xmm1_4
  float v8; // xmm0_4
  _DWORD v9[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 12) != *(_QWORD *)a2 || *((_DWORD *)this + 26) != *((_DWORD *)a2 + 2) )
  {
    LODWORD(v3) = COERCE_UNSIGNED_INT(*((float *)this + 24) - *(float *)a2) & _xmm;
    LODWORD(v4) = COERCE_UNSIGNED_INT(*((float *)this + 25) - *((float *)a2 + 1)) & _xmm;
    *((_QWORD *)this + 12) = *(_QWORD *)a2;
    v5 = (v3 >= 0.0000011920929) + 4;
    v6 = (*((_BYTE *)this + 533) & 4) == 0;
    *((_DWORD *)this + 26) = *((_DWORD *)a2 + 2);
    if ( v6 )
    {
      if ( v4 >= 0.0000011920929 )
        v5 |= 2u;
      CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax((__int64)this, v5);
    }
    v7 = fminf(*((float *)this + 22), *((float *)this + 25));
    v9[0] = fminf(*((float *)this + 21), *((float *)this + 24));
    v8 = fminf(*((float *)this + 23), *((float *)this + 26));
    *(float *)&v9[1] = v7;
    *(float *)&v9[2] = v8;
    CInteractionTracker::SetMinPosition(this, (const struct D2DVector3 *)v9);
    if ( !*((_DWORD *)this + 42) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 192));
    CResource::InvalidateAnimationSources(this, 26);
  }
}
