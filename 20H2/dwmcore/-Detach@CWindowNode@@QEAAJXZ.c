/*
 * XREFs of ?Detach@CWindowNode@@QEAAJXZ @ 0x180042684
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180042174 (--1CWindowNode@@MEAA@XZ.c)
 *     ?ProcessDetach@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_DETACH@@@Z @ 0x180042678 (-ProcessDetach@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_DETACH@@@Z.c)
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800C01B0 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x1800426C0 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowNode::Detach(CWindowNode *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  v2 = CWindowNode::WindowManagerAddRemove(this, 0);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x78Bu, 0LL);
  else
    *((_QWORD *)this + 77) = 0LL;
  return v4;
}
