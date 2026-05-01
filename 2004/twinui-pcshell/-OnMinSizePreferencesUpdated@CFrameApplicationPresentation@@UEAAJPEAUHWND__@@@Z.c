/*
 * XREFs of ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x180074560
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d5792b3efce27c5fd9c84044f53d058___ @ 0x18007459C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_9d5792b3efce27c5fd9c84044f53d058___.c)
 *     ?_ShouldUpdateForHwnd@CFrameApplicationPresentation@@AEAA_NPEAUHWND__@@@Z @ 0x180074748 (-_ShouldUpdateForHwnd@CFrameApplicationPresentation@@AEAA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::OnMinSizePreferencesUpdated(
        CFrameApplicationPresentation *this,
        HWND a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !CFrameApplicationPresentation::_ShouldUpdateForHwnd(this, a2) )
    return 1LL;
  v5[1] = v2;
  v5[0] = v3;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d5792b3efce27c5fd9c84044f53d058___(v3, v5);
}
