/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18008EE3C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ @ 0x18008EDE0 (-UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18008EFCC (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ @ 0x1800C8CF8 (-MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE *a3)
{
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 Resource; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx

  CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a3 + 8);
  v6 = *((_DWORD *)a3 + 10);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x8Cu);
    *((_QWORD *)this + 13) = Resource;
    if ( !Resource )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2003303421, 0xCDu, 0LL);
LABEL_26:
      CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_OWORD *)this + 7) = *(_OWORD *)((char *)a3 + 24);
  v7 = *((_DWORD *)a3 + 11);
  if ( !v7 )
  {
    *((_QWORD *)this + 16) = 0LL;
    goto LABEL_5;
  }
  v21 = CResourceTable::GetResource((__int64)a2, v7, 0xACu);
  *((_QWORD *)this + 16) = v21;
  if ( !v21 )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2003303421, 0xDEu, 0LL);
    goto LABEL_26;
  }
LABEL_5:
  v8 = *((_DWORD *)a3 + 12);
  if ( !v8 )
  {
    *((_QWORD *)this + 17) = 0LL;
    goto LABEL_11;
  }
  v9 = CResourceTable::GetResource((__int64)a2, v8, 0xC3u);
  *((_QWORD *)this + 17) = v9;
  if ( !v9 )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0xEFu, 0LL);
    goto LABEL_26;
  }
  if ( *((_BYTE *)this + 1801) )
  {
    *((_BYTE *)this + 1801) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
  if ( *((_BYTE *)this + 1800) )
  {
    *((_BYTE *)this + 1800) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
LABEL_11:
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 38) = *((unsigned __int8 *)a3 + 60);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 16);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 17);
  CCachedVisualImage::ChoosePixelFormat(this);
  v11 = CResource::RegisterNotifier(this, *((struct CResource **)this + 17));
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x8Au, 0LL);
  }
  else
  {
    v14 = CResource::RegisterNotifier(this, *((struct CResource **)this + 13));
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x8Bu, 0LL);
    }
    else
    {
      v16 = CResource::RegisterNotifier(this, *((struct CResource **)this + 16));
      v13 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x8Cu, 0LL);
    }
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v13, 0x110u, 0LL);
    goto LABEL_26;
  }
LABEL_16:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v13;
}
