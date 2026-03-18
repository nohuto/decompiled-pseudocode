/*
 * XREFs of NtUserSetForegroundWindowForApplication @ 0x1C01203F0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00353FC (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserSetForegroundWindowForApplication(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  const struct tagWND *v7; // rbx
  int IsPartOfCompositeApplication; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (const struct tagWND *)v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v3 = (*(_WORD *)(v4 + 42) & 0x3FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v13;
      *((_QWORD *)&v13 + 1) = v2;
      HMLockObject(v2);
      IsPartOfCompositeApplication = CoreWindowProp::IsPartOfCompositeApplication(v7);
      v6 = (unsigned __int8)xxxSetForegroundWindowWithOptions(
                              v7,
                              2LL,
                              IsPartOfCompositeApplication != 0 ? 0x40 : 0,
                              1LL);
      ThreadUnlock1(v10, v9, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
