/*
 * XREFs of _NtUserSetForegroundWindowForApplication@4 @ 0xC57D2
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x18B9E (-IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 */

int __stdcall NtUserSetForegroundWindowForApplication(int a1)
{
  int v1; // edi
  _DWORD *v2; // eax
  void *v3; // esi
  int v4; // ecx
  BOOL IsPartOfCompositeApplication; // eax
  int v7; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v1 = 0;
  EnterCrit(0, 1);
  v2 = (_DWORD *)ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_WORD *)(v2[5] + 30) & 0x3FFF;
    if ( v4 != 669 && v4 != 671 )
    {
      v7 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v7;
      v8 = v2;
      HMLockObject(v2);
      IsPartOfCompositeApplication = CoreWindowProp::IsPartOfCompositeApplication(v3);
      v1 = (unsigned __int8)xxxSetForegroundWindowWithOptions(
                              (unsigned int *)v3,
                              2,
                              IsPartOfCompositeApplication ? 0x40 : 0,
                              1);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
