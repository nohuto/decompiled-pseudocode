/*
 * XREFs of ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x1800365E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x180036540 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 *     ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180036588 (-RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800375A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3004 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::ProcessUpdate(
        CSolidColorLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SOLIDCOLORLEGACYMILBRUSH *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  struct CResourceTable *v8; // rdx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  __int64 Resource; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // ecx

  CSolidColorLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
  *((_DWORD *)this + 14) = *((_DWORD *)a3 + 2);
  v6 = *((unsigned int *)a3 + 3);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 60LL);
    *((_QWORD *)this + 8) = Resource;
    if ( !Resource )
    {
      v11 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003303421, 0x5ADu, 0LL);
LABEL_16:
      CSolidColorLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
      goto LABEL_8;
    }
  }
  else
  {
    *((_QWORD *)this + 8) = 0LL;
  }
  v7 = *((unsigned int *)a3 + 4);
  if ( !(_DWORD)v7 )
  {
    *((_QWORD *)this + 9) = 0LL;
    goto LABEL_5;
  }
  v15 = CResourceTable::GetResource(a2, v7, 185LL);
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
  v17 = CResourceTable::GetResource(a2, v8, 185LL);
  *((_QWORD *)this + 10) = v17;
  if ( !v17 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003303421, 0x5D2u, 0LL);
    goto LABEL_16;
  }
LABEL_7:
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a3 + 24);
  v9 = CSolidColorLegacyMilBrush::RegisterNotifiers((struct CResource **)this, v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5DDu, 0LL);
    goto LABEL_16;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v11;
}
