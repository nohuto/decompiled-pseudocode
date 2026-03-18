/*
 * XREFs of ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x1800C7AC8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1800C7B5C (-RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x1800C7BC0 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::ProcessUpdate(
        CSolidColorLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SOLIDCOLORLEGACYMILBRUSH *a3)
{
  unsigned int v6; // edx
  unsigned int v7; // edx
  struct CResourceTable *v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 Resource; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx

  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  *((_DWORD *)this + 14) = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 3);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x3Cu);
    *((_QWORD *)this + 8) = Resource;
    if ( !Resource )
    {
      v11 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003303421, 0x5ADu, 0LL);
LABEL_16:
      CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
      goto LABEL_8;
    }
  }
  else
  {
    *((_QWORD *)this + 8) = 0LL;
  }
  v7 = *((_DWORD *)a3 + 4);
  if ( !v7 )
  {
    *((_QWORD *)this + 9) = 0LL;
    goto LABEL_5;
  }
  v15 = CResourceTable::GetResource((__int64)a2, v7, 0xB9u);
  *((_QWORD *)this + 9) = v15;
  if ( !v15 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2003303421, 0x5C0u, 0LL);
    goto LABEL_16;
  }
LABEL_5:
  v8 = (struct CResourceTable *)*((unsigned int *)a3 + 5);
  if ( !(_DWORD)v8 )
  {
    *((_QWORD *)this + 10) = 0LL;
    goto LABEL_7;
  }
  v17 = CResourceTable::GetResource((__int64)a2, (unsigned int)v8, 0xB9u);
  *((_QWORD *)this + 10) = v17;
  if ( !v17 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003303421, 0x5D2u, 0LL);
    goto LABEL_16;
  }
LABEL_7:
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a3 + 24);
  v9 = CSolidColorLegacyMilBrush::RegisterNotifiers(this, v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5DDu, 0LL);
    goto LABEL_16;
  }
LABEL_8:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v11;
}
