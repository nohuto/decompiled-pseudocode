/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x1800CD190
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A8270 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSPRITECLIP *a3)
{
  unsigned int v3; // edi
  struct CResource *v4; // rsi
  struct CResourceTable *v5; // r12
  char v8; // dl
  char v9; // bp
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 i; // r15
  __int64 v16; // rcx
  __int64 Resource; // rax
  __int64 v18; // rcx

  v3 = 0;
  v4 = 0LL;
  v5 = a2;
  v8 = *((_BYTE *)a3 + 8) != 0;
  v9 = 0;
  if ( v8 != *((_BYTE *)this + 913) )
  {
    *((_BYTE *)this + 913) = v8;
    v9 = 1;
    v14 = *((_QWORD *)this + 90);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 188); i = (unsigned int)(i + 1) )
    {
      LOBYTE(a2) = *((_BYTE *)this + 913);
      v16 = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * i);
      (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)v16 + 56LL))(v16, a2);
    }
  }
  v10 = *((_DWORD *)a3 + 3);
  if ( !v10
    || (Resource = CResourceTable::GetResource((__int64)v5, v10, 0x41u), (v4 = (struct CResource *)Resource) != 0LL)
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 56LL))(Resource, 142LL) )
  {
    if ( v4 != *((struct CResource **)this + 97) )
    {
      v11 = CResource::RegisterNotifier(this, v4);
      v3 = v11;
      if ( v11 >= 0 )
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 97));
        *((_QWORD *)this + 97) = v4;
LABEL_8:
        *((_BYTE *)this + 912) = 0;
        CVisual::PropagateFlags((__int64)this, 5u);
        return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x258u, 0LL);
    }
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003303421, 0x252u, 0LL);
  }
  if ( v9 )
    goto LABEL_8;
  return v3;
}
