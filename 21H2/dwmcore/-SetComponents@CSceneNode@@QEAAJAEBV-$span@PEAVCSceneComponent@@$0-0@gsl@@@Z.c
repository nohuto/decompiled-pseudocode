/*
 * XREFs of ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x18023E540
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801A3F6C (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18025BAC8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 */

__int64 __fastcall CSceneNode::SetComponents(CSceneNode *this, _QWORD *a2)
{
  gsl::details **v2; // rbx
  gsl::details **v4; // rsi
  gsl::details **v6; // rdx
  gsl::details *v7; // rcx
  gsl::details **v8; // r8
  int appended; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  v2 = (gsl::details **)*((_QWORD *)this + 12);
  v4 = (gsl::details **)*((_QWORD *)this + 13);
  while ( v2 != v4 )
  {
    v6 = (gsl::details **)a2[1];
    v7 = *v2;
    v8 = &v6[*a2];
    if ( v6 > v8 )
    {
      gsl::details::terminate(v7);
      __debugbreak();
    }
    if ( v6 == v8 )
    {
LABEL_6:
      CSceneComponent::DehydrateSpectreResources(v7, this);
    }
    else
    {
      while ( *v6 != v7 )
      {
        if ( ++v6 == v8 )
          goto LABEL_6;
      }
    }
    ++v2;
  }
  appended = CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendComponents(
               (struct CResource ***)this,
               (__int64)a2,
               0);
  v11 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, appended, 0xA3u);
  else
    return 0;
  return v11;
}
