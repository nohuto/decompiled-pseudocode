/*
 * XREFs of ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x1800CC800
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x1800CC868 (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateRails(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_UPDATERAILS *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  LOBYTE(a2) = *((_BYTE *)a3 + 8) != 0;
  v5 = CInteraction::SetRailsEnabled_RenderThread(this, a2, 0LL);
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v5, 0x1DBu, 0LL);
  }
  else
  {
    LOBYTE(v6) = *((_BYTE *)a3 + 9) != 0;
    v9 = CInteraction::SetRailsEnabled_RenderThread(this, v6, 1LL);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1DDu, 0LL);
  }
  return v8;
}
