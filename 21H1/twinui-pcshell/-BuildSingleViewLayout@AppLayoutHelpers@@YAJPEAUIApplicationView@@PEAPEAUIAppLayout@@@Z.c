/*
 * XREFs of ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x1803EAB08
 * Callers:
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1803EBAC0 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 *     ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1804029D0 (-SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18045D63C (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AppLayoutHelpers::BuildSingleViewLayout(
        AppLayoutHelpers *this,
        struct IApplicationView *a2,
        struct IAppLayout **a3)
{
  const struct _GUID *v5; // rdx
  int v6; // ebx
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v6 = CAppLayout_CreateInstance(0LL, v5, &v8);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(void *, AppLayoutHelpers *, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 232LL))(
           v8,
           this,
           0LL,
           1LL,
           0LL);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IApplicationView *))v8)(
             v8,
             &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
             a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v6;
}
