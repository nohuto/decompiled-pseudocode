/*
 * XREFs of _ApiSetQueryApiSetPresence@8 @ 0x4B2E6C90
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _ApiSetResolveToHost@20 @ 0x4B2D012C (_ApiSetResolveToHost@20.c)
 */

int __stdcall ApiSetQueryApiSetPresence(unsigned __int16 *a1, char *a2)
{
  void *ApiSetMap; // esi
  int v3; // esi
  int v4; // ecx
  _WORD v6[4]; // [esp+8h] [ebp-8h] BYREF

  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  LdrpLogDllState(0, (int)a1, 5328);
  v3 = ApiSetResolveToHost((int)ApiSetMap, a1, 0, a2, (int)v6);
  if ( v3 >= 0 && *a2 )
    v4 = (v6[0] == 0) + 5329;
  else
    v4 = 5331;
  LdrpLogDllState(0, (int)a1, v4);
  if ( v3 < 0 )
    return v3;
  if ( !v6[0] )
  {
    if ( *a2 )
      *a2 = 0;
  }
  return 0;
}
