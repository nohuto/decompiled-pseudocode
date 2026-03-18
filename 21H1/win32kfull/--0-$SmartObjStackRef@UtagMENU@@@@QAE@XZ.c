/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QAE@XZ @ 0x3EE60
 * Callers:
 *     _NtUserThunkedMenuItemInfo@24 @ 0x1D426 (_NtUserThunkedMenuItemInfo@24.c)
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _NtUserCreateWindowEx@68 @ 0x4221A (_NtUserCreateWindowEx@68.c)
 *     _NtUserThunkedMenuInfo@8 @ 0xC1340 (_NtUserThunkedMenuInfo@8.c)
 *     _NtUserGetMenuItemRect@16 @ 0x1637F2 (_NtUserGetMenuItemRect@16.c)
 *     _NtUserTrackPopupMenuEx@24 @ 0x16AB4F (_NtUserTrackPopupMenuEx@24.c)
 * Callees:
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_DWORD *this)
{
  PKTHREAD CurrentThread; // ebx
  int v3; // esi
  int *ThreadWin32Thread; // eax
  _DWORD *result; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  this[1] = 0;
  *this = gSmartObjNullRef;
  this[1] = *(_DWORD *)(v3 + 840);
  result = this;
  *(_DWORD *)(v3 + 840) = this + 1;
  this[2] = 0;
  return result;
}
