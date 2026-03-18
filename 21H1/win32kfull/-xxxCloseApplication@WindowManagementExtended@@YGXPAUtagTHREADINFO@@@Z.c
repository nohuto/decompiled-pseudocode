/*
 * XREFs of ?xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z @ 0x19F8FE
 * Callers:
 *     _xxxDWP_ProcessVirtKey@4 @ 0xC5870 (_xxxDWP_ProcessVirtKey@4.c)
 * Callees:
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_8f4b63029e330354df5e58e7f72e89f8___ @ 0xF4F98 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_8f4b63029e330354df5e58e7f72e89f8___.c)
 */

void __thiscall WindowManagementExtended::xxxCloseApplication(_DWORD *ecx0)
{
  int *v2; // esi
  int v3; // ecx
  int v4; // eax
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *(int **)(ecx0[59] + 64);
  if ( v2
    && (*(_BYTE *)(*(_DWORD *)(v2[19] + 4) + 9) & 2) == 0
    && !anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_8f4b63029e330354df5e58e7f72e89f8___(v2, (int)ecx0) )
  {
    v3 = *(_DWORD *)(ecx0[59] + 60);
    if ( !v3 || (int *)GetNonChildAncestor(v3) != v2 )
    {
      v4 = ecx0[57];
      v5[2] = 0;
      v5[0] = v4;
      ecx0[57] = v5;
      v5[1] = v2;
      HMLockObject(v2);
      xxxSetFocus(v2);
      v2 = (int *)ThreadUnlock1();
    }
    if ( v2 )
      _PostMessage((int)v2, 274, 61536, 0);
  }
}
