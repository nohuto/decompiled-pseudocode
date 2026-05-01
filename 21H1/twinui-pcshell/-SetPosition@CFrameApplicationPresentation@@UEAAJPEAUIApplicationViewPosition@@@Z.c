/*
 * XREFs of ?SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180071100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___ @ 0x180071174 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetPosition(
        CFrameApplicationPresentation *this,
        struct IApplicationViewPosition *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IApplicationViewPosition *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 8LL))(a2);
  v5[0] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 8LL))(a2);
  v5[1] = this;
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630___(this, v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return 0LL;
}
