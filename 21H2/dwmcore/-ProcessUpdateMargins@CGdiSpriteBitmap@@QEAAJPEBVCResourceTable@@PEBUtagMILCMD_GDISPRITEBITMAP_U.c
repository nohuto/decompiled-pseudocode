/*
 * XREFs of ?ProcessUpdateMargins@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x180031688
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateMargins@CGdiSpriteBitmap@@AEBAXXZ @ 0x180033584 (-UpdateMargins@CGdiSpriteBitmap@@AEBAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800375A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateMargins(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_GDISPRITEBITMAP_UPDATEMARGINS *a3)
{
  int v3; // r9d
  unsigned int v4; // edi
  CGdiSpriteBitmap *v5; // rbx
  int v6; // eax
  int v7; // edx

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  v5 = this;
  if ( v3 < 0
    || (v6 = *((_DWORD *)a3 + 3), v6 < 0)
    || (LODWORD(this) = *((_DWORD *)a3 + 4), (int)this < 0)
    || (v7 = *((_DWORD *)a3 + 5), v7 < 0) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x14Fu, 0LL);
  }
  else if ( *((_DWORD *)v5 + 27) != v3
         || *((_DWORD *)v5 + 28) != v6
         || *((_DWORD *)v5 + 29) != (_DWORD)this
         || *((_DWORD *)v5 + 30) != v7 )
  {
    *(_OWORD *)((char *)v5 + 108) = *(_OWORD *)((char *)a3 + 8);
    CGdiSpriteBitmap::UpdateMargins(v5);
    CResource::NotifyOnChanged(v5, 0LL, 0LL);
  }
  return v4;
}
