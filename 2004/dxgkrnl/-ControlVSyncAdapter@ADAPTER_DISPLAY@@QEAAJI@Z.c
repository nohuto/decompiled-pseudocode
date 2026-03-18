/*
 * XREFs of ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0211048
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00F6310 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0152630 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0154530 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 * Callees:
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C00DE5A8 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ControlVSyncAdapter(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 48);
  if ( !v2 )
    return 3221225485LL;
  BLTQUEUE::EnableVSyncEventSignaling((BLTQUEUE *)(*(_QWORD *)(v2 + 8) + 2904LL * a2));
  return 0LL;
}
