/*
 * XREFs of ?ProcessUpdateMargins@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x1800C8DA0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMargins@CGdiSpriteBitmap@@AEBAXXZ @ 0x1800947A4 (-UpdateMargins@CGdiSpriteBitmap@@AEBAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
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
    || (this = (CGdiSpriteBitmap *)*((unsigned int *)a3 + 4), (int)this < 0)
    || (v7 = *((_DWORD *)a3 + 5), v7 < 0) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x14Fu, 0LL);
  }
  else if ( *((_DWORD *)v5 + 27) != v3
         || *((_DWORD *)v5 + 28) != v6
         || *(_QWORD *)((char *)v5 + 116) != __PAIR64__(v7, (unsigned int)this) )
  {
    *(_OWORD *)((char *)v5 + 108) = *(_OWORD *)((char *)a3 + 8);
    CGdiSpriteBitmap::UpdateMargins(v5);
    CResource::NotifyOnChanged((__int64)v5, 0, 0LL);
  }
  return v4;
}
