/*
 * XREFs of ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x1800DBCBC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DBD48 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     McTemplateU0qqqxxpp_EventWriteTransfer @ 0x1801B3264 (McTemplateU0qqqxxpp_EventWriteTransfer.c)
 */

__int64 __fastcall CVisual::ProcessSetInteraction(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETINTERACTION *a3)
{
  char v4; // si
  unsigned int v5; // edx
  struct CInteraction *v6; // rdi
  __int64 Resource; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x57u);
    v4 = Resource;
    if ( Resource )
      v6 = (struct CInteraction *)(Resource - 8);
  }
  v10 = CVisual::SetInteraction(this, v6);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xD8Bu, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
  {
    McTemplateU0qqqxxpp_EventWriteTransfer(
      *((_DWORD *)a3 + 2),
      0,
      *((_DWORD *)a2 + 12),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      v4,
      (char)v6);
  }
  return v12;
}
