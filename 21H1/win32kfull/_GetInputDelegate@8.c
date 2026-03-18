/*
 * XREFs of _GetInputDelegate@8 @ 0x47988
 * Callers:
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 *     _EditionGetInputDelegate@104 @ 0xF148E (_EditionGetInputDelegate@104.c)
 * Callees:
 *     <none>
 */

int __fastcall GetInputDelegate(int a1, int a2)
{
  int result; // eax
  int v3; // esi

  result = 0;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 152);
    if ( v3 )
    {
      if ( (v3 & a2) != 0 )
        return *(_DWORD *)(a1 + 156);
    }
  }
  return result;
}
