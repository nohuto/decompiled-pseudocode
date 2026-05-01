/*
 * XREFs of ?AddItems@CTempAppVisualArray@@UEAAJPEAUIObjectArray@@@Z @ 0x180429810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z @ 0x180429650 (-AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z.c)
 */

__int64 __fastcall CTempAppVisualArray::AddItems(CTempAppVisualArray *this, struct IObjectArray *a2)
{
  int v4; // ebx
  unsigned int i; // edi
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF
  struct ITemporaryAppVisual *v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  ((void (__fastcall *)(struct IObjectArray *, unsigned int *))a2->lpVtbl->GetCount)(a2, &v7);
  for ( i = 0; i < v7; ++i )
  {
    if ( v4 < 0 )
      break;
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    v4 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct ITemporaryAppVisual **))a2->lpVtbl->GetAt)(
           a2,
           i,
           &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
           &v8);
    if ( v4 >= 0 )
      v4 = CTempAppVisualArray::AddItem(this, v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  return (unsigned int)v4;
}
