/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180422840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IDragVisual,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  *((_DWORD *)Block + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Block + 2);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
