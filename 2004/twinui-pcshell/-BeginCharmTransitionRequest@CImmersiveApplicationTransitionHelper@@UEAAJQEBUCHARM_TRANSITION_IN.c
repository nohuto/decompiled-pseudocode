/*
 * XREFs of ?BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_INFORMATION@@@Z @ 0x180164FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x1801653D4 (-_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?_BeginCharmPopupTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x1801655F0 (-_BeginCharmPopupTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 */

int __fastcall CImmersiveApplicationTransitionHelper::BeginCharmTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct CHARM_TRANSITION_INFORMATION *const a2)
{
  HWND v2; // rdi
  HWND v3; // rbx
  HWND v5; // rsi
  int result; // eax
  int v7; // r14d
  int v8; // r15d
  HWND v9; // r8

  v2 = (HWND)*((_QWORD *)a2 + 1);
  v3 = 0LL;
  v5 = *(HWND *)a2;
  if ( !*((_BYTE *)this + 16) )
    return -2147483638;
  v7 = (unsigned __int8)GetPropW(v2, L"AppWindowTransitionType") & 4;
  v8 = (unsigned __int8)GetPropW(v5, L"AppWindowTransitionType") & 4;
  result = CImmersiveApplicationTransitionHelper::_BeginCharmPopupTransitionRequest(
             (CImmersiveApplicationTransitionHelper *)((char *)this - 32),
             (HWND)((unsigned __int64)v2 & -(__int64)(v7 != 0)),
             (HWND)((unsigned __int64)v5 & -(__int64)(v8 != 0)));
  if ( result >= 0 )
  {
    v9 = 0LL;
    if ( !v8 )
      v9 = v5;
    if ( !v7 )
      v3 = v2;
    return CImmersiveApplicationTransitionHelper::_BeginCharmFlowTransitionRequest(
             (CImmersiveApplicationTransitionHelper *)((char *)this - 32),
             v3,
             v9);
  }
  return result;
}
