/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800B4180
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x180036E98 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180037EB0 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x1800B4250 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x1800B4348 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800B4898 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        struct _LIST_ENTRY *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERDATA *a3,
        const void *a4,
        unsigned int a5)
{
  int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  int v13; // eax
  __int64 v14; // rcx
  int Handles; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx

  v9 = 0;
  CRenderData::DestroyRenderData(this);
  v11 = *((_DWORD *)a3 + 2);
  if ( !v11 )
    goto LABEL_2;
  if ( a5 != v11 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x59u, 0LL);
    goto LABEL_11;
  }
  CDataStreamWriter::Reset(this + 4);
  v13 = CDataStreamWriter::AddBlockData((CDataStreamWriter *)&this[4], a4, a5);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x61u, 0LL);
  }
  else
  {
    Handles = CRenderData::GetHandles((CRenderData *)this, a2);
    v9 = Handles;
    if ( Handles < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, Handles, 0x67u, 0LL);
    }
    else
    {
      v17 = CRenderData::CheckPrimitiveCount((CRenderData *)this);
      v9 = v17;
      if ( v17 >= 0 )
      {
LABEL_2:
        LOBYTE(this[16].Blink) = 1;
        CResource::NotifyOnChanged((__int64)this, 0, 0LL);
        goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x6Au, 0LL);
    }
  }
LABEL_3:
  if ( v9 < 0 )
LABEL_11:
    CRenderData::DestroyRenderData(this);
  return (unsigned int)v9;
}
