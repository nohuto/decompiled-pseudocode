/*
 * XREFs of ?CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@PEAPEAUITemporaryAppVisual@@@Z @ 0x18042C498
 * Callers:
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180426F18 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CreateInstance@CSimpleTempAppVisual@@SAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x18042C548 (-CreateInstance@CSimpleTempAppVisual@@SAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHW.c)
 */

__int64 __fastcall CSimpleTempAppVisual_CreateInstance(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        const enum TEMPORARY_APP_VISUAL_TYPE *a3,
        HWND *a4,
        HWND *a5,
        struct IApplicationView *a6,
        struct ITemporaryAppVisual **a7)
{
  int Instance; // ebx
  const struct _GUID *v13; // [rsp+30h] [rbp-28h]
  void *v14[3]; // [rsp+40h] [rbp-18h] BYREF

  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  Instance = CSimpleTempAppVisual::CreateInstance(a1, a2, a3, a4, a5, a6, v13, v14);
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v14);
    Instance = 0;
    *a7 = (struct ITemporaryAppVisual *)v14[0];
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  return (unsigned int)Instance;
}
