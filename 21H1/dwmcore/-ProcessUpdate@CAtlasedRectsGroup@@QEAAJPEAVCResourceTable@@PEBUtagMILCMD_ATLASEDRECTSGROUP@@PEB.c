/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800922F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18002A6AC (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x180092400 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x1800C303C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 */

__int64 __fastcall CAtlasedRectsGroup::ProcessUpdate(
        CAtlasedRectsGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ATLASEDRECTSGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v9; // edx
  __int64 Resource; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  void *v19; // [rsp+70h] [rbp+18h] BYREF

  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  v9 = *((_DWORD *)a3 + 2);
  if ( v9 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v9, 0x53u);
    *((_QWORD *)this + 8) = Resource;
    if ( !Resource )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x3Bu, 0LL);
LABEL_14:
      CAtlasedRectsGroup::UnRegisterNotifiers(this);
      goto LABEL_8;
    }
  }
  else
  {
    *((_QWORD *)this + 8) = 0LL;
  }
  v13 = CResource::UnmarshalResourceArray(
          a4,
          a5,
          *((_DWORD *)a3 + 3),
          7u,
          (unsigned int *)this + 18,
          &v19,
          (__int64)a2,
          1);
  *((_QWORD *)this + 10) = v19;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, 0x4Eu, 0LL);
    goto LABEL_14;
  }
  v14 = CResource::RegisterNotifier(this, *((struct CResource **)this + 8));
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x64u, 0LL);
  }
  else
  {
    v16 = CResource::RegisterNNotifiersInternal(this, *((struct CResource ***)this + 10), *((unsigned int *)this + 18));
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x65u, 0LL);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v13, 0x51u, 0LL);
    goto LABEL_14;
  }
LABEL_8:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v13;
}
