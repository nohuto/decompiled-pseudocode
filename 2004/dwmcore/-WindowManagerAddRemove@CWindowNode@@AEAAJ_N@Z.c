/*
 * XREFs of ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180097104
 * Callers:
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z @ 0x180097034 (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x1800970C8 (-Detach@CWindowNode@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180096EC0 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180097330 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 */

__int64 __fastcall CWindowNode::WindowManagerAddRemove(CWindowNode *this, char a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  CWindowManager *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( *((_QWORD *)this + 77) )
  {
    v3 = a2 == 0;
    v5 = *(CWindowManager **)(*((_QWORD *)this + 2) + 1192LL);
    if ( v3 )
    {
      CWindowManager::RemoveWindowNode(v5, this);
    }
    else
    {
      v6 = CWindowManager::AddWindowNode(v5, this);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x191u, 0LL);
    }
  }
  return v2;
}
