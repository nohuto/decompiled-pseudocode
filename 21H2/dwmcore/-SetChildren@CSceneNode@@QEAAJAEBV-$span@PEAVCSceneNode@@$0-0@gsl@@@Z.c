/*
 * XREFs of ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x18023E484
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x180202608 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801A3D34 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18023E5F4 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CSceneNode::SetChildren(CSceneNode *this, _QWORD *a2)
{
  gsl::details **v2; // rbx
  gsl::details **v4; // rsi
  gsl::details *v6; // rcx
  gsl::details **v7; // rdx
  gsl::details **v8; // r8
  int appended; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  v2 = (gsl::details **)*((_QWORD *)this + 9);
  v4 = (gsl::details **)*((_QWORD *)this + 10);
  while ( v2 != v4 )
  {
    v6 = *v2;
    if ( *((CSceneNode **)*v2 + 16) == this )
    {
      v7 = (gsl::details **)a2[1];
      v8 = &v7[*a2];
      if ( v7 > v8 )
      {
        gsl::details::terminate(v6);
        __debugbreak();
      }
      if ( v7 == v8 )
      {
LABEL_7:
        CSceneNode::SetParent(v6, 0LL);
      }
      else
      {
        while ( *v7 != v6 )
        {
          if ( ++v7 == v8 )
            goto LABEL_7;
        }
      }
    }
    ++v2;
  }
  appended = CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendChildren(
               (struct CResource ***)this,
               (__int64)a2,
               0);
  v11 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, appended, 0x7Cu);
  else
    return 0;
  return v11;
}
