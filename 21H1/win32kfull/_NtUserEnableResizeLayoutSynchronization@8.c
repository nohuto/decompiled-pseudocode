/*
 * XREFs of _NtUserEnableResizeLayoutSynchronization@8 @ 0xAB2C0
 * Callers:
 *     <none>
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 */

int __stdcall NtUserEnableResizeLayoutSynchronization(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v7 = 0;
  v2 = 1;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( !v3 || (v5 = *(_WORD *)(*(_DWORD *)(v3 + 20) + 30) & 0x3FFF, v5 == 669) || v5 == 671 )
  {
    v2 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v7;
    v8 = v3;
    HMLockObject(v3);
    SetOrClrWF(a2 != 0, v4, 0x980u, 0);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
