/*
 * XREFs of ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x1801ABBA4
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801F4E00 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x180032B4C (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800375A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x1801ABD3C (-SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetForDCompSnapshot(
        CCachedVisualImage *this,
        struct CVisual *a2,
        const struct D2D_SIZE_U *a3,
        char a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  signed int height; // eax

  v7 = CCachedVisualImage::SetRootVisual(this, a2);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x197u, 0LL);
  }
  else
  {
    *((_QWORD *)this + 11) = 0LL;
    *((float *)this + 24) = (float)(int)a3->width;
    *((float *)this + 25) = (float)(int)a3->height;
    *((double *)this + 14) = (float)(int)a3->width;
    height = a3->height;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 42) = 2;
    *((_BYTE *)this + 1803) = a4;
    *((double *)this + 15) = (float)height;
    CCachedVisualImage::ChoosePixelFormat(this);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return v9;
}
