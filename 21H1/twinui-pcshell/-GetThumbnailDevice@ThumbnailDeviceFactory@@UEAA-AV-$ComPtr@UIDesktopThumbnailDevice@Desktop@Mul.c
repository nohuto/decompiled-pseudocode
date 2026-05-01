/*
 * XREFs of ?GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA?AV?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180353AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$call_once@V_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@@Z @ 0x180352A08 (--$call_once@V_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 */

_QWORD *__fastcall ThumbnailDeviceFactory::GetThumbnailDevice(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  std::call_once<_lambda_e8a8a3830e8b700b3909ca267e5ddf52_,>((struct std::once_flag *)(a1 + 56), (__int64)&v6);
  v4 = *(_QWORD *)(a1 + 48);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
