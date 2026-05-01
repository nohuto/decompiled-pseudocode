/*
 * XREFs of ?GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180402000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180403C78 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 */

__int64 __fastcall CDragVisual::GetSimpleTempAppVisualArray(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  int v4; // ebx
  struct ITemporaryAppVisualArray *v5; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  struct ITemporaryAppVisualArray *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v4 = CDragVisual::_CreateTempAppVisuals((CDragVisual *)((char *)this - 48), &v8);
  if ( v4 >= 0 )
  {
    v5 = v8;
    (*(void (__fastcall **)(struct ITemporaryAppVisualArray *, int *))(*(_QWORD *)v8 + 24LL))(v8, &v7);
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
      *a2 = v5;
      v4 = 0;
    }
    else
    {
      v4 = -2147023728;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v4;
}
