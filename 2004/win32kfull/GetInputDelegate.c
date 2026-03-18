/*
 * XREFs of GetInputDelegate @ 0x1C00F9C98
 * Callers:
 *     AdjustPwndPtiPqForDelegation @ 0x1C00F9BD0 (AdjustPwndPtiPqForDelegation.c)
 *     EditionGetInputDelegate @ 0x1C01E1F40 (EditionGetInputDelegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputDelegate(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // r8d

  result = 0LL;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 260);
    if ( v3 )
    {
      if ( (v3 & a2) != 0 )
        return *(_QWORD *)(a1 + 264);
    }
  }
  return result;
}
