/*
 * XREFs of ?ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY@@@Z @ 0x180015F28
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessSetConstantOpacity(
        CAtlasedRectsMesh *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY *a3)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx

  v5 = *((_DWORD *)this + 17);
  if ( v5 == *((_DWORD *)this + 26) >> 2 )
  {
    if ( v5 )
    {
      v6 = 0LL;
      v7 = v5;
      do
      {
        *(_DWORD *)(v6 + *((_QWORD *)this + 14)) = *((_DWORD *)a3 + 2);
        v6 += 4LL;
        --v7;
      }
      while ( v7 );
    }
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    return 0;
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x2Eu, 0LL);
  }
  return v8;
}
