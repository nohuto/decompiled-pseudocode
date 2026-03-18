/*
 * XREFs of ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x1801D5B50
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x1801D71E4 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateEdgyExperienceSource(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE *a3)
{
  unsigned int v4; // edx
  unsigned int v7; // edi
  __int64 Resource; // rax
  __int64 v9; // rdx
  int updated; // eax
  __int64 v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_DWORD *)a3 + 2);
  v7 = 0;
  if ( v4 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v4, 0x57u);
    v9 = Resource - 8;
    if ( !Resource )
      v9 = 0LL;
    if ( !v9 )
      ModuleFailFastForHRESULT(2147500036LL, retaddr);
    if ( !*((_DWORD *)a3 + 3) || !*((_WORD *)a3 + 8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_OWORD *)((char *)this + 568) = *(_OWORD *)((char *)a3 + 8);
    *(_OWORD *)((char *)this + 584) = *(_OWORD *)((char *)a3 + 24);
    *(_OWORD *)((char *)this + 600) = *(_OWORD *)((char *)a3 + 40);
    *(_OWORD *)((char *)this + 616) = *(_OWORD *)((char *)a3 + 56);
    *(_OWORD *)((char *)this + 632) = *(_OWORD *)((char *)a3 + 72);
    *(_OWORD *)((char *)this + 648) = *(_OWORD *)((char *)a3 + 88);
    *(_OWORD *)((char *)this + 664) = *(_OWORD *)((char *)a3 + 104);
    *(_OWORD *)((char *)this + 680) = *(_OWORD *)((char *)a3 + 120);
    *((_QWORD *)this + 87) = *((_QWORD *)a3 + 17);
    *((_DWORD *)this + 176) = *(_DWORD *)(v9 + 1696);
    updated = CManipulation::_UpdateEdgyExperienceInput(this);
    v7 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x2F8u, 0LL);
  }
  return v7;
}
