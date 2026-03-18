/*
 * XREFs of ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x180066110
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800425C8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x180066198 (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800ABF34 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::Channel_DuplicateHandleOnTarget(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET *a4)
{
  int AttachedChannel; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  struct CChannelContext *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, *((_DWORD *)a4 + 1), &v13);
  v9 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, AttachedChannel, 0x698u, 0LL);
  }
  else
  {
    v10 = CResourceTable::DuplicateHandle(a3, v13, *((_DWORD *)a4 + 2), a2, *((_DWORD *)a4 + 3));
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x6A0u, 0LL);
  }
  ReleaseInterface<CProcessAttribution>(&v13);
  return v9;
}
