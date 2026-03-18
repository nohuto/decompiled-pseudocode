/*
 * XREFs of ?UseDelegationImplicitMouseCapture@@YGHPAUtagWND@@PAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14DE1E
 * Callers:
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 * Callees:
 *     <none>
 */

int __fastcall UseDelegationImplicitMouseCapture(int a1, _DWORD *a2)
{
  int v2; // esi

  v2 = 0;
  if ( a1 && (*(_BYTE *)(a1 + 152) & 6) != 0 && !*(_DWORD *)(*(_DWORD *)(a1 + 8) + 712) && a2 && (*a2 == 2 || *a2 == 18) )
    return 1;
  return v2;
}
