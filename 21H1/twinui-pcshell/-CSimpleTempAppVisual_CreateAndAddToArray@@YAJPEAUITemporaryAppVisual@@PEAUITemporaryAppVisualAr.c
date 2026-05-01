/*
 * XREFs of ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x180409154
 * Callers:
 *     ?GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1803FF410 (-GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180403C78 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEAPEAUITemporaryAppVisual@@@Z @ 0x180408F0C (--$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsof.c)
 */

__int64 __fastcall CSimpleTempAppVisual_CreateAndAddToArray(
        struct ITemporaryAppVisual *a1,
        struct ITemporaryAppVisualArray *a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF
  CSimpleTempAppVisual *v7; // [rsp+50h] [rbp+30h] BYREF
  struct ITemporaryAppVisual *v8; // [rsp+58h] [rbp+38h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v6 = 0LL;
  v7 = 0LL;
  v8 = a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CSimpleTempAppVisual,CSimpleTempAppVisual,ITemporaryAppVisual * &>(
         &v7,
         &v8);
  if ( v4 >= 0 )
    v4 = (**(__int64 (__fastcall ***)(CSimpleTempAppVisual *, GUID *, __int64 *))v7)(
           v7,
           &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
           &v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisualArray *, __int64))(*(_QWORD *)a2 + 40LL))(a2, v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return (unsigned int)v4;
}
