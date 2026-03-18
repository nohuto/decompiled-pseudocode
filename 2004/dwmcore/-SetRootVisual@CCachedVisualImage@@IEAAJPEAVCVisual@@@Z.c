/*
 * XREFs of ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x1801AD26C
 * Callers:
 *     ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x1801AD0D4 (-SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A0618 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ @ 0x1800D0108 (-MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::SetRootVisual(CCachedVisualImage *this, struct CVisual *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( !*((_BYTE *)this + 1800) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 22);
    *((_QWORD *)this + 17) = a2;
    v5 = CResource::RegisterNotifier(this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2C9u, 0LL);
    }
    else
    {
      CCachedVisualImage::MarkAllTargetsDirty(this);
      CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    }
  }
  return v2;
}
