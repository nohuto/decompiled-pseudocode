/*
 * XREFs of ApiSetQueryApiSetPresence @ 0x180076DA0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x18001A728 (ApiSetResolveToHost.c)
 */

__int64 __fastcall ApiSetQueryApiSetPresence(unsigned __int16 *a1, char *a2)
{
  void *ApiSetMap; // rbx
  int v5; // ebx
  unsigned __int16 v6; // cx
  _WORD v8[12]; // [rsp+30h] [rbp-18h] BYREF

  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  LdrpLogDllState(0, (__int64)a1, 0x14D0u);
  v5 = ApiSetResolveToHost((__int64)ApiSetMap, a1, 0LL, a2, (__int64)v8);
  if ( v5 >= 0 && *a2 )
  {
    if ( v8[0] )
      v6 = 5329;
    else
      v6 = 5330;
  }
  else
  {
    v6 = 5331;
  }
  LdrpLogDllState(0, (__int64)a1, v6);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( !v8[0] )
  {
    if ( *a2 )
      *a2 = 0;
  }
  return 0LL;
}
