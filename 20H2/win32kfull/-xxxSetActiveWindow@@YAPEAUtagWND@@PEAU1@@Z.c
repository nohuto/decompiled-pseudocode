/*
 * XREFs of ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002B484
 * Callers:
 *     xxxActivateEnabledPopup @ 0x1C00070FC (xxxActivateEnabledPopup.c)
 *     NtUserSetActiveWindow @ 0x1C002B3B0 (NtUserSetActiveWindow.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall xxxSetActiveWindow(struct tagWND *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rdx

  if ( a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != *(_QWORD *)(gptiCurrent + 432LL) )
    return 0LL;
  v1 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
  v2 = v1 ? *v1 : 0LL;
  if ( !a1 )
    return 0LL;
  xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1LL);
  LOBYTE(v3) = 1;
  return (struct tagWND *)HMValidateHandleNoSecure(v2, v3);
}
