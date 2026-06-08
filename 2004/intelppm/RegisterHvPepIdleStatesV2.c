/*
 * XREFs of RegisterHvPepIdleStatesV2 @ 0x1C0030A7C
 * Callers:
 *     RegisterHvIdleStates @ 0x1C00302B0 (RegisterHvIdleStates.c)
 * Callees:
 *     GetHvPpmCapabilities @ 0x1C002F8E8 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C002FB58 (RegisterHvCStates.c)
 *     RegisterVmIdleStates @ 0x1C0030FFC (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvPepIdleStatesV2(__int64 a1)
{
  int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v2 = RegisterHvCStates(a1);
  if ( v2 >= 0 )
  {
    GetHvPpmCapabilities(0LL, &v4, 0LL);
    if ( v4 )
      return (unsigned int)RegisterVmIdleStates(a1);
  }
  return (unsigned int)v2;
}
