/*
 * XREFs of ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x1801CB7E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x1801C94B0 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionShift(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT *a3,
        char *a4)
{
  int v4; // edi
  float *i; // rbx
  int v8; // edx
  float v9; // xmm0_4
  unsigned int v10; // ebx

  v4 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    for ( i = (float *)(a4 + 4); ; i += 3 )
    {
      v8 = *((_DWORD *)i - 1);
      if ( v8 == 2 )
        break;
      if ( v8 )
        v9 = *((float *)this + 19);
      else
        v9 = *((float *)this + 18);
      if ( v9 >= i[1] )
        CInteractionTracker::ApplyPositionShift((__int64)this, v8, *i);
      if ( (unsigned int)++v4 >= *((_DWORD *)a3 + 2) )
        return 0;
    }
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x382u, 0LL);
  }
  else
  {
    return 0;
  }
  return v10;
}
