/*
 * XREFs of ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x180035508
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180035588 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteImage(
        unsigned __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSPRITEIMAGE *a3)
{
  unsigned int v3; // r9d
  struct ISpriteImage *v5; // rdx
  CWindowNode *v6; // rbx
  __int64 Resource; // rax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  v6 = (CWindowNode *)this;
  if ( !v3 )
    goto LABEL_8;
  if ( v3 < *((_DWORD *)a2 + 7) )
  {
    this = v3 * *((_DWORD *)a2 + 6);
    LODWORD(v5) = *(_DWORD *)(this + *((_QWORD *)a2 + 5));
  }
  if ( (_DWORD)v5 == 63
    && ((Resource = CResourceTable::GetResource(a2, v3, 63LL)) == 0
      ? (v5 = 0LL)
      : (v5 = (struct ISpriteImage *)(Resource + 56)),
        v5) )
  {
LABEL_8:
    v8 = CWindowNode::SetSpriteImage(v6, v5);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1C2u, 0LL);
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, -2003303421, 0x1BEu, 0LL);
  }
  return v10;
}
