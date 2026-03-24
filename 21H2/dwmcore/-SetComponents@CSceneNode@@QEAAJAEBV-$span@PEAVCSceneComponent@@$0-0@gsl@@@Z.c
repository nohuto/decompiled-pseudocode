/*
 * XREFs of ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1801EBE24
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x180171E20 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18020B04C (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 */

__int64 __fastcall CSceneNode::SetComponents(CSceneNode *this, __int64 *a2)
{
  gsl::details **v2; // rbx
  gsl::details **v4; // rbp
  __int64 v6; // rdx
  gsl::details *v7; // rcx
  gsl::details **v8; // r8
  gsl::details **v9; // rax
  gsl::details **v10; // r9
  int appended; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx

  v2 = (gsl::details **)*((_QWORD *)this + 11);
  v4 = (gsl::details **)*((_QWORD *)this + 12);
  while ( v2 != v4 )
  {
    v6 = *a2;
    v7 = *v2;
    if ( *a2 < 0 )
    {
      `gsl::details::get_terminate_handler'::`2'::handler(v7);
      __debugbreak();
    }
    v8 = (gsl::details **)a2[1];
    v9 = v8;
    v10 = &v8[v6];
    if ( v8 != v10 )
    {
      do
      {
        if ( *v9 == v7 )
          break;
        ++v9;
      }
      while ( v9 != v10 );
    }
    if ( v9 - v8 == v6 )
      CSceneComponent::DehydrateSpectreResources(v7, this);
    ++v2;
  }
  appended = CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendComponents((char **)this, (__int64)a2, 0);
  v13 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, appended, 0xA3u, 0LL);
  else
    return 0;
  return v13;
}
