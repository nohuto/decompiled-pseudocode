/*
 * XREFs of ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x1800C7510
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180044140 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1800C768C (-RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800C7740 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 */

__int64 __fastcall CImageLegacyMilBrush::ProcessUpdate(
        CImageLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_IMAGELEGACYMILBRUSH *a3)
{
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  struct CResourceTable *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 Resource; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx

  CImageLegacyMilBrush::UnRegisterNotifiers(this);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 3);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x3Cu);
    *((_QWORD *)this + 16) = Resource;
    if ( !Resource )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2003303421, 0x2D8u, 0LL);
      goto LABEL_28;
    }
  }
  else
  {
    *((_QWORD *)this + 16) = 0LL;
  }
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 )
  {
    v22 = CResourceTable::GetResource((__int64)a2, v7, 0xB9u);
    *((_QWORD *)this + 17) = v22;
    if ( !v22 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2003303421, 0x2EBu, 0LL);
      goto LABEL_28;
    }
  }
  else
  {
    *((_QWORD *)this + 17) = 0LL;
  }
  v8 = *((_DWORD *)a3 + 5);
  if ( v8 )
  {
    v24 = CResourceTable::GetResource((__int64)a2, v8, 0xB9u);
    *((_QWORD *)this + 18) = v24;
    if ( !v24 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2003303421, 0x2FDu, 0LL);
      goto LABEL_28;
    }
  }
  else
  {
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 7);
  *((_OWORD *)this + 10) = *((_OWORD *)a3 + 2);
  v9 = *((_DWORD *)a3 + 12);
  if ( v9 )
  {
    v18 = CResourceTable::GetResource((__int64)a2, v9, 0x8Cu);
    *((_QWORD *)this + 22) = v18;
    if ( !v18 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2003303421, 0x313u, 0LL);
      goto LABEL_28;
    }
  }
  else
  {
    *((_QWORD *)this + 22) = 0LL;
  }
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)((char *)a3 + 52);
  v10 = *((_DWORD *)a3 + 17);
  if ( v10 )
  {
    v26 = CResourceTable::GetResource((__int64)a2, v10, 0x8Cu);
    *((_QWORD *)this + 25) = v26;
    if ( !v26 )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2003303421, 0x328u, 0LL);
      goto LABEL_28;
    }
  }
  else
  {
    *((_QWORD *)this + 25) = 0LL;
  }
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 18);
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 19);
  *((_DWORD *)this + 54) = *((_DWORD *)a3 + 20);
  *((_DWORD *)this + 55) = *((_DWORD *)a3 + 21);
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 22);
  *((_DWORD *)this + 57) = *((_DWORD *)a3 + 23);
  *((_DWORD *)this + 58) = *((_DWORD *)a3 + 24);
  v11 = (struct CResourceTable *)*((unsigned int *)a3 + 25);
  if ( !(_DWORD)v11 )
  {
    *((_QWORD *)this + 30) = 0LL;
    goto LABEL_13;
  }
  v16 = CResourceTable::GetResource((__int64)a2, (unsigned int)v11, 0x53u);
  *((_QWORD *)this + 30) = v16;
  if ( !v16 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2003303421, 0x343u, 0LL);
LABEL_28:
    CImageLegacyMilBrush::UnRegisterNotifiers(this);
    goto LABEL_14;
  }
LABEL_13:
  v12 = CImageLegacyMilBrush::RegisterNotifiers(this, v11);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x34Cu, 0LL);
    goto LABEL_28;
  }
LABEL_14:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v14;
}
