/*
 * XREFs of _NtUserDisableImmersiveOwner@4 @ 0x160BAA
 * Callers:
 *     <none>
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsImmersiveBandOrShellManaged@4 @ 0xADBB0 (_IsImmersiveBandOrShellManaged@4.c)
 *     _xxxDisableImmersiveOwner@4 @ 0x16F409 (_xxxDisableImmersiveOwner@4.c)
 */

int __stdcall NtUserDisableImmersiveOwner(int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // ecx
  int v6; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v1 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  EnterCrit(0, 1);
  v2 = (_DWORD *)ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v6 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v6;
    v7 = v2;
    HMLockObject(v2);
    if ( IsImmersiveBandOrShellManaged(v3)
      && _IsTopLevelWindow(v4)
      && !IsWindowBeingDestroyed(v3)
      && (*(_BYTE *)(v3[5] + 23) & 0x18) == 0x10
      && (IsImmersiveBroker(*(_DWORD *)(_gptiCurrent + 232))
       || *(_DWORD *)(_gptiCurrent + 232) == *(_DWORD *)(v3[2] + 232)) )
    {
      v1 = xxxDisableImmersiveOwner(v3);
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
