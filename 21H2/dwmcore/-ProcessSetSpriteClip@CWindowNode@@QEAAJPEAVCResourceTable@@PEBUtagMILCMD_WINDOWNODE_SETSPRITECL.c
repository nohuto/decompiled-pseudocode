/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x1800E38C8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSPRITECLIP *a3)
{
  unsigned int v3; // edi
  struct CResource *v4; // rsi
  const struct tagMILCMD_WINDOWNODE_SETSPRITECLIP *v5; // r11
  char v8; // al
  char v9; // bp
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  __int64 Resource; // rax
  __int64 v15; // rcx
  CPtrArrayBase *v16; // r14
  unsigned __int64 Count; // rax
  __int64 *v18; // rcx
  unsigned __int64 v19; // r10

  v3 = 0;
  v4 = 0LL;
  v5 = a3;
  v8 = *((_BYTE *)a3 + 8) != 0;
  v9 = 0;
  if ( v8 != *((_BYTE *)this + 913) )
  {
    *((_BYTE *)this + 913) = v8;
    v16 = (CWindowNode *)((char *)this + 800);
    v9 = 1;
    while ( 1 )
    {
      Count = CPtrArrayBase::GetCount(v16);
      if ( v19 >= Count )
        break;
      *(_BYTE *)(CPtrArrayBase::operator[](v18, v19) + 143) = *((_BYTE *)this + 913);
    }
  }
  v10 = *((_DWORD *)v5 + 3);
  if ( v10 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v10, 0x41u);
    v4 = (struct CResource *)Resource;
    if ( !Resource
      || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 56LL))(Resource, 141LL) )
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, -2003303421, 0x20Cu);
      goto LABEL_8;
    }
  }
  if ( v4 == *((struct CResource **)this + 102) )
    goto LABEL_8;
  v11 = CResource::RegisterNotifier(this, v4);
  v3 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x212u);
LABEL_8:
    if ( !v9 )
      return v3;
    goto LABEL_6;
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 102));
  *((_QWORD *)this + 102) = v4;
LABEL_6:
  *((_BYTE *)this + 912) = 0;
  CVisual::PropagateFlags((__int64)this, 5u);
  return v3;
}
