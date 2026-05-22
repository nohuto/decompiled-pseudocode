/*
 * XREFs of ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x180121924
 * Callers:
 *     ?OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x180121450 (-OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z.c)
 * Callees:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FA34 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FCE0 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x18011FD6C (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FE84 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x180120120 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x1801202A4 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180120420 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180120534 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     SignedNormalize @ 0x180122898 (SignedNormalize.c)
 */

__int64 __fastcall ControllerProcessor::SendGameControllerAsPointerAndManipulation(ControllerProcessor *this)
{
  float v2; // xmm8_4
  double v3; // xmm6_8
  float v4; // xmm8_4
  double v5; // xmm0_8
  float v6; // xmm9_4
  __int64 v7; // rcx
  double v8; // xmm0_8
  float v9; // xmm10_4
  double v10; // xmm0_8
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ecx
  int v15; // eax

  v2 = 0.0 - ((float (*)(void))SignedNormalize)();
  v3 = 0.0;
  v4 = v2 + ((float (*)(void))SignedNormalize)();
  v5 = ((double (*)(void))SignedNormalize)();
  v6 = *(float *)&v5;
  v8 = ((double (*)(void))SignedNormalize)();
  v9 = *(float *)&v8;
  v10 = 0.0;
  if ( *(_BYTE *)(v7 + 276) )
  {
    v11 = *(_DWORD *)(v7 + 208);
    if ( (v11 & 0x10) != 0 )
      *(_QWORD *)&v10 = *(unsigned int *)(v7 + 7760);
    if ( (v11 & 0x20) != 0 )
    {
      *(_QWORD *)&v10 = *(unsigned int *)(v7 + 7760);
      *(float *)&v10 = *(float *)&v10 * -1.0;
    }
    if ( (v11 & 0x40) != 0 )
    {
      *(_QWORD *)&v3 = *(unsigned int *)(v7 + 7760);
      *(float *)&v3 = *(float *)&v3 * -1.0;
    }
    if ( (v11 & 0x80u) != 0 )
      *(_QWORD *)&v3 = *(unsigned int *)(v7 + 7760);
  }
  else
  {
    v3 = ((double (*)(void))SignedNormalize)();
    *(_QWORD *)&v10 = *(unsigned int *)(v12 + 196);
    SignedNormalize();
  }
  v13 = *(_DWORD *)(v7 + 328);
  if ( (v13 & 1) != 0 )
  {
    ControllerProcessor::CalculateNavigationDelta((ControllerProcessor *)v7, v3, v10);
    v13 = *((_DWORD *)this + 82);
  }
  if ( *((_BYTE *)this + 1241) )
  {
    LOBYTE(v14) = v13;
    if ( (v13 & 8) != 0 )
    {
      ControllerProcessor::CalculateMarginPanDelta(this);
      v14 = *((_DWORD *)this + 82);
      LOBYTE(v13) = v14;
    }
    if ( (v14 & 0x84) != 0 )
    {
      ControllerProcessor::CalculatePanDelta(this, v6, v9);
      v13 = *((_DWORD *)this + 82);
      LOBYTE(v14) = v13;
    }
    if ( (v14 & 2) != 0 )
    {
      ControllerProcessor::CalculateZoomDelta(this, v4);
      v13 = *((_DWORD *)this + 82);
    }
  }
  if ( (v13 & 1) != 0 )
  {
    ControllerProcessor::ApplyNavigationDelta(this);
    v13 = *((_DWORD *)this + 82);
  }
  if ( (v13 & 0x80u) != 0 )
    ControllerProcessor::ApplyPanDeltaToScroll(this);
  if ( *((_BYTE *)this + 1241) )
  {
    v15 = *((_DWORD *)this + 82);
    if ( (v15 & 0xC) != 0 )
    {
      ControllerProcessor::ApplyPanDelta(this);
      v15 = *((_DWORD *)this + 82);
    }
    if ( (v15 & 2) != 0 )
      ControllerProcessor::ApplyZoomDelta(this);
  }
  return 0LL;
}
