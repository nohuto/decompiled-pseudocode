/*
 * XREFs of ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C011ABE4
 * Callers:
 *     xxxActivateEnabledPopup @ 0x1C000725C (xxxActivateEnabledPopup.c)
 *     NtUserSetActiveWindow @ 0x1C011AB10 (NtUserSetActiveWindow.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall xxxSetActiveWindow(struct tagWND *a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // rbx

  if ( a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
    return 0LL;
  v1 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
  v2 = v1 ? *v1 : 0LL;
  if ( !a1 )
    return 0LL;
  xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1);
  return (struct tagWND *)HMValidateHandleNoSecure(v2, 1);
}
