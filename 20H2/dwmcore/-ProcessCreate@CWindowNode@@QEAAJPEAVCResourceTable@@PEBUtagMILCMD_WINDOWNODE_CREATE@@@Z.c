/*
 * XREFs of ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z @ 0x1800425F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x1800426C0 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18004270C (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowNode::ProcessCreate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_CREATE *a3)
{
  struct CProcessAttribution **v3; // rsi
  bool v4; // zf
  int ProcessAttribution; // eax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct CProcessAttribution **)((char *)this + 632);
  v4 = *((_QWORD *)this + 79) == 0LL;
  *((_QWORD *)this + 77) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 78) = *((_QWORD *)a3 + 1);
  if ( !v4 )
    RaiseFailFastException(0LL, 0LL, 0);
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(
                         lpMem,
                         *((_DWORD *)a3 + 8),
                         *((_QWORD *)a3 + 3),
                         v3);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
  v8 = CWindowNode::WindowManagerAddRemove(this, 1);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Eu, 0LL);
  return v10;
}
