/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180042DA0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x180042D50 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180046E80 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800E15E4 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 */

__int64 __fastcall CAtlasedRectsGroup::ProcessUpdate(
        CAtlasedRectsGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ATLASEDRECTSGROUP *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // edi
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // esi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 Resource; // rax
  unsigned int v19; // ecx
  unsigned int v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  v9 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v9 )
  {
    Resource = CResourceTable::GetResource(a2, v9, 83LL);
    *((_QWORD *)this + 9) = Resource;
    if ( !Resource )
    {
      v11 = -2003303421;
      v20 = 59;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, v20, 0LL);
      goto LABEL_14;
    }
  }
  else
  {
    *((_QWORD *)this + 9) = 0LL;
  }
  v11 = CResource::UnmarshalResourceArray(a4, a5, *((unsigned int *)a3 + 3), 7LL, (char *)this + 80, &v21, a2, 1);
  *((_QWORD *)this + 11) = v21;
  if ( v11 < 0 )
  {
    v20 = 78;
    goto LABEL_13;
  }
  v12 = CResource::RegisterNotifier(this, *((struct CResource **)this + 9));
  v14 = v12;
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x64u, 0LL);
    goto LABEL_11;
  }
  v15 = CResource::RegisterNNotifiersInternal(this, *((struct CResource ***)this + 11), *((unsigned int *)this + 20));
  v14 = v15;
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x65u, 0LL);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v14, 0x51u, 0LL);
LABEL_14:
    CAtlasedRectsGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v11;
}
