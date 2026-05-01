/*
 * XREFs of ?Uninitialize@CImmersiveApplicationTransitionHelper@@UEAAJXZ @ 0x1801651C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::Uninitialize(CImmersiveApplicationTransitionHelper *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 6);
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  return 0LL;
}
