/*
 * XREFs of ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x1800DBD68
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180044140 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x1800DBDE8 (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x1800DCC80 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 */

__int64 __fastcall CVisualReferenceController::ProcessUpdate(
        CVisualReferenceController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALREFERENCECONTROLLER *a3)
{
  struct CResourceTable *v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  CVisualReferenceController::UnRegisterNotifiers(this);
  v6 = (struct CResourceTable *)*((unsigned int *)a3 + 2);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, (unsigned int)v6, 0xC3u);
    *((_QWORD *)this + 7) = Resource;
    if ( !Resource )
    {
      v11 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x709u, 0LL);
LABEL_8:
      CVisualReferenceController::UnRegisterNotifiers(this);
      goto LABEL_4;
    }
  }
  else
  {
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = CVisualReferenceController::RegisterNotifiers(this, v6);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x712u, 0LL);
    goto LABEL_8;
  }
LABEL_4:
  CResource::NotifyOnChanged((__int64)this, 0, (__int64)this);
  return v11;
}
