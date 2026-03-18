/*
 * XREFs of ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CD4B8
 * Callers:
 *     ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z @ 0x1801CBF88 (-ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTR.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CD2F8 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801CD7E0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A0060 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801CA8F8 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CD2F8 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180213184 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetMinPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  char v5; // cl
  bool v6; // zf
  float v7; // xmm1_4
  float v8; // xmm0_4
  _DWORD v9[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)((char *)this + 84) != *(_QWORD *)a2 || *((_DWORD *)this + 23) != *((_DWORD *)a2 + 2) )
  {
    LODWORD(v3) = COERCE_UNSIGNED_INT(*((float *)this + 21) - *(float *)a2) & _xmm;
    LODWORD(v4) = COERCE_UNSIGNED_INT(*((float *)this + 22) - *((float *)a2 + 1)) & _xmm;
    *(_QWORD *)((char *)this + 84) = *(_QWORD *)a2;
    v5 = (v3 >= 0.0000011920929) + 4;
    v6 = (*((_BYTE *)this + 533) & 4) == 0;
    *((_DWORD *)this + 23) = *((_DWORD *)a2 + 2);
    if ( v6 )
    {
      if ( v4 >= 0.0000011920929 )
        v5 |= 2u;
      CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin((__int64)this, v5);
    }
    v7 = fmaxf(*((float *)this + 22), *((float *)this + 25));
    v9[0] = fmaxf(*((float *)this + 21), *((float *)this + 24));
    v8 = fmaxf(*((float *)this + 23), *((float *)this + 26));
    *(float *)&v9[1] = v7;
    *(float *)&v9[2] = v8;
    CInteractionTracker::SetMaxPosition(this, (const struct D2DVector3 *)v9);
    if ( !*((_DWORD *)this + 42) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 192));
    CResource::InvalidateAnimationSources(this, 23);
  }
}
