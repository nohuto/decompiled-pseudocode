/*
 * XREFs of ?GetResizeDCompositionSynchronizationObject@@YGHPAUHWND__@@PAPAUCompositionObject@@@Z @ 0xA6A46
 * Callers:
 *     _NtUserGetResizeDCompositionSynchronizationObject@8 @ 0xA69B6 (_NtUserGetResizeDCompositionSynchronizationObject@8.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _GreGetWindowResizeDCompositionSynchronizationObject@8 @ 0xA6B0E (_GreGetWindowResizeDCompositionSynchronizationObject@8.c)
 */

int __fastcall GetResizeDCompositionSynchronizationObject(int a1, _DWORD *a2)
{
  int v2; // ebx
  int WindowResizeDCompositionSynchronizationObject; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  _DWORD *TopLevelWindow; // eax
  int v10; // [esp+Ch] [ebp-14h] BYREF
  int v11; // [esp+10h] [ebp-10h]
  int v12; // [esp+14h] [ebp-Ch]
  _DWORD *v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h] BYREF

  v13 = a2;
  v2 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  WindowResizeDCompositionSynchronizationObject = 1;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a1);
  v6 = v5;
  if ( !v5 || (v7 = *(_WORD *)(*(_DWORD *)(v5 + 20) + 30) & 0x3FFF, v7 == 669) || v7 == 671 )
  {
    WindowResizeDCompositionSynchronizationObject = 0;
    goto LABEL_10;
  }
  v10 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v10;
  v11 = v5;
  HMLockObject(v5);
  v14 = 0;
  TopLevelWindow = (_DWORD *)_GetTopLevelWindow(v6);
  if ( !TopLevelWindow || (*(_WORD *)(TopLevelWindow[5] + 30) & 0x3FFF) == 0x29D )
    goto LABEL_8;
  WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(
                                                    *TopLevelWindow,
                                                    &v14);
  if ( WindowResizeDCompositionSynchronizationObject )
  {
    v2 = v14;
LABEL_8:
    *v13 = v2;
  }
  ThreadUnlock1();
LABEL_10:
  UserSessionSwitchLeaveCrit();
  return WindowResizeDCompositionSynchronizationObject;
}
