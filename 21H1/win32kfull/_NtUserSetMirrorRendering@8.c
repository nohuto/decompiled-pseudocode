/*
 * XREFs of _NtUserSetMirrorRendering@8 @ 0x1699CF
 * Callers:
 *     <none>
 * Callees:
 *     _GreDisableMirrorRendering@8 @ 0x1E359E (_GreDisableMirrorRendering@8.c)
 *     _GreEnableMirrorRendering@8 @ 0x1E3682 (_GreEnableMirrorRendering@8.c)
 */

int __stdcall NtUserSetMirrorRendering(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    v4 = *(_WORD *)(*(_DWORD *)(v3 + 20) + 30) & 0x3FFF;
    if ( v4 != 669 && v4 != 671 )
    {
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v3;
      HMLockObject(v3);
      v5 = *(_DWORD *)(_gpDispInfo + 20);
      if ( a2 )
        v6 = GreEnableMirrorRendering(v5, a1);
      else
        v6 = GreDisableMirrorRendering(v5, a1);
      v2 = v6;
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
