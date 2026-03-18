/*
 * XREFs of ?Detach@CWindowNode@@QEAAJXZ @ 0x1800927D8
 * Callers:
 *     ?ProcessDetach@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_DETACH@@@Z @ 0x1800927CC (-ProcessDetach@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_DETACH@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180093F04 (--1CWindowNode@@MEAA@XZ.c)
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800BA8C0 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180092814 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::Detach(CWindowNode *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CWindowNode::WindowManagerAddRemove(this, 0);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x898u, 0LL);
  else
    *((_QWORD *)this + 77) = 0LL;
  return v4;
}
