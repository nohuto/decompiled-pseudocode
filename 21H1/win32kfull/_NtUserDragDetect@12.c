/*
 * XREFs of _NtUserDragDetect@12 @ 0x160CE9
 * Callers:
 *     <none>
 * Callees:
 *     _xxxIsDragging@16 @ 0x1A68B7 (_xxxIsDragging@16.c)
 */

int __stdcall NtUserDragDetect(int a1, int a2, int a3)
{
  int IsDragging; // esi
  int v4; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  IsDragging = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v6 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v6;
    v7 = v4;
    HMLockObject(v4);
    IsDragging = xxxIsDragging(a2, a3);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return IsDragging;
}
