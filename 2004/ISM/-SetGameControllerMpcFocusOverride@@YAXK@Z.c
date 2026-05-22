/*
 * XREFs of ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x18008900C
 * Callers:
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x18006CA78 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x1800344F0 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall SetGameControllerMpcFocusOverride(int a1)
{
  GameControllerRawInputProvider *v2; // rbx
  RTL_SRWLOCK *v3; // rsi
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = GameControllerRawInputProvider::s_instance;
  v3 = (RTL_SRWLOCK *)((char *)GameControllerRawInputProvider::s_instance + 64);
  AcquireSRWLockExclusive((PSRWLOCK)GameControllerRawInputProvider::s_instance + 8);
  *((_DWORD *)v2 + 38) = a1;
  updated = GameControllerRawInputProvider::UpdateFocusPids(v2);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      885LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)updated);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
