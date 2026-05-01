/*
 * XREFs of ?RuntimeClassInitialize@CCommonApplicationViewArrangePositionSnapshot@@QEAAJPEAUHWND__@@@Z @ 0x1800486DC
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x1800484F4 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CCommonApplicationViewArrangePositionSnapshot::RuntimeClassInitialize(struct tagRECT *this, HWND a2)
{
  const char *v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !GetWindowRect(a2, this + 1) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x27,
             (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\ApplicationViewPositionHwndHelpers.h",
             v4);
  if ( IsZoomed(a2) )
    v5 = 3;
  else
    v5 = 2 - IsIconic(a2);
  this[2].left = v5;
  return 0LL;
}
