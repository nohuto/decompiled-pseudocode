/*
 * XREFs of _RtlEnumerateGenericTableLikeADirectory@28 @ 0x4B35E1B0
 * Callers:
 *     <none>
 * Callees:
 *     _FindNodeOrParent@12 @ 0x4B2A707D (_FindNodeOrParent@12.c)
 *     _RealSuccessor@4 @ 0x4B2AB895 (_RealSuccessor@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

PVOID __cdecl RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  _DWORD *v7; // esi
  ULONG v8; // edi
  _DWORD *v10; // ecx
  int NodeOrParent; // eax
  int v12; // ecx
  _DWORD *v13; // [esp+Ch] [ebp-4h] BYREF

  v7 = *RestartKey;
  v8 = 0;
  v13 = *RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *RestartKey = 0;
    return 0;
  }
  if ( !MatchFunction )
    MatchFunction = (PRTL_AVL_MATCH_FUNCTION)LdrSetAppCompatDllRedirectionCallback;
  v10 = v7;
  if ( *DeleteCount != Table->DeleteCount )
  {
    v7 = 0;
    v10 = 0;
    v13 = 0;
  }
  if ( v10 )
    goto LABEL_14;
  NodeOrParent = FindNodeOrParent((int)Table, (int)Buffer, &v13);
  if ( NodeOrParent == 1 )
  {
    v7 = v13;
LABEL_14:
    v8 = NextFlag;
LABEL_15:
    if ( v8 )
      v7 = RealSuccessor(v7);
    goto LABEL_17;
  }
  if ( NodeOrParent == 3 )
  {
    v7 = RealSuccessor(v13);
    goto LABEL_15;
  }
  v7 = v13;
LABEL_17:
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    v12 = ((int (__thiscall *)(PRTL_AVL_MATCH_FUNCTION, PRTL_AVL_TABLE, _DWORD *, PVOID))MatchFunction)(
            MatchFunction,
            Table,
            v7 + 4,
            MatchData);
    if ( v12 != -1073741198 )
      break;
    v7 = RealSuccessor(v7);
    if ( !v7 )
      return 0;
  }
  *RestartKey = v7;
  *DeleteCount = Table->DeleteCount;
  if ( v12 )
    return 0;
  return v7 + 4;
}
