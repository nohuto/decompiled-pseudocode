/*
 * XREFs of EditionComputeInjectorUIPI @ 0x1C011B280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionComputeInjectorUIPI(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx

  EnterCrit(0LL, 1LL);
  v5 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3, v2, v4) + 880);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(PsGetCurrentProcessWin32Process(v6, v5, v7) + 12) >> 31;
  return UserSessionSwitchLeaveCrit(v8);
}
