/*
 * XREFs of _AlpcRegisterCompletionList@20 @ 0x4B33EC90
 * Callers:
 *     <none>
 * Callees:
 *     _NtAlpcSetInformation@16 @ 0x4B2F3250 (_NtAlpcSetInformation@16.c)
 */

int __stdcall AlpcRegisterCompletionList(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  _DWORD v6[4]; // [esp+4h] [ebp-10h] BYREF

  v6[1] = a3;
  v6[2] = a4;
  v6[3] = a5;
  v6[0] = a2;
  result = NtAlpcSetInformation(a1, 6, (int)v6, 16);
  if ( result >= 0 )
  {
    *(_DWORD *)(a2 + 320) = 0;
    return 0;
  }
  return result;
}
