/*
 * XREFs of ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x180048754
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800487B4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessInsertChildAt(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_INSERTCHILDAT *a3)
{
  struct CVisual *Resource; // rax
  unsigned int v6; // ecx
  int inserted; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx

  Resource = (struct CVisual *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 195LL);
  if ( Resource )
  {
    inserted = CVisual::InsertChildAt(this, Resource, *((_DWORD *)a3 + 3), 0);
    v9 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, inserted, 0xC42u, 0LL);
  }
  else
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0xC3Fu, 0LL);
  }
  return v9;
}
