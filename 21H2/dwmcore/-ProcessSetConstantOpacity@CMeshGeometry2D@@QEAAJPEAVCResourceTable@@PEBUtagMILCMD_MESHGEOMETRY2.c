/*
 * XREFs of ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x180225290
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x180114510 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessSetConstantOpacity(
        CMeshGeometry2D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edi
  __int64 v7; // rax

  v3 = 0LL;
  v5 = 0;
  LODWORD(v7) = CMeshGeometry2D::GetVertexCount(this);
  if ( (_DWORD)v7 == *((_DWORD *)this + 38) >> 2 )
  {
    if ( (_DWORD)v7 )
    {
      v7 = (unsigned int)v7;
      do
      {
        *(_DWORD *)(v3 + *((_QWORD *)this + 20)) = *((_DWORD *)a3 + 2);
        v3 += 4LL;
        --v7;
      }
      while ( v7 );
    }
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0LL, -2003303421, 0x3Bu);
  }
  return v5;
}
