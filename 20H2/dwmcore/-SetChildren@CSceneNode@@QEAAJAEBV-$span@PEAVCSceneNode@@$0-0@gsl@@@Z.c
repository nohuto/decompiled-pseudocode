/*
 * XREFs of ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x1801EB014
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x1801EB7C8 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801717CC (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1801EB1B0 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CSceneNode::SetChildren(CSceneNode *this, __int64 *a2)
{
  CSceneNode **v2; // rbx
  CSceneNode **v4; // rbp
  CSceneNode *v6; // rcx
  __int64 v7; // rdx
  CSceneNode **v8; // r8
  CSceneNode **v9; // rax
  CSceneNode **v10; // r9
  int appended; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx

  v2 = (CSceneNode **)*((_QWORD *)this + 8);
  v4 = (CSceneNode **)*((_QWORD *)this + 9);
  while ( v2 != v4 )
  {
    v6 = *v2;
    if ( *((CSceneNode **)*v2 + 15) == this )
    {
      v7 = *a2;
      if ( *a2 < 0 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v8 = (CSceneNode **)a2[1];
      v9 = v8;
      v10 = &v8[v7];
      if ( v8 != v10 )
      {
        do
        {
          if ( *v9 == v6 )
            break;
          ++v9;
        }
        while ( v9 != v10 );
      }
      if ( v9 - v8 == v7 )
        CSceneNode::SetParent(v6, 0LL);
    }
    ++v2;
  }
  appended = CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendChildren((char **)this, (__int64)a2, 0);
  v13 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, appended, 0x7Cu, 0LL);
  else
    return 0;
  return v13;
}
