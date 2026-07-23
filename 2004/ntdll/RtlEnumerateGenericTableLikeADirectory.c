/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1800F75C0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18005BBDC (FindNodeOrParent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RealSuccessor @ 0x1800F7574 (RealSuccessor.c)
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
  bool v7; // zf
  PVOID *v9; // rsi
  _QWORD *v12; // rbx
  PULONG v14; // r14
  __int64 (__fastcall *v15)(PRTL_AVL_TABLE, _QWORD *, PVOID); // r15
  unsigned int v16; // eax
  _QWORD *v17; // rcx
  int NodeOrParent; // eax
  int v19; // ecx

  v7 = Table->NumberGenericTableElements == 0;
  v9 = RestartKey;
  v12 = *RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( v7 )
  {
    *v9 = 0LL;
    return 0LL;
  }
  v14 = DeleteCount;
  v15 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, _QWORD *, PVOID))WinSqmCheckEscalationSetString;
  v16 = Table->DeleteCount;
  v17 = v12;
  if ( MatchFunction )
    v15 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, _QWORD *, PVOID))MatchFunction;
  if ( *DeleteCount != v16 )
  {
    v12 = 0LL;
    RestartKey = 0LL;
    v17 = 0LL;
  }
  if ( v17 )
    goto LABEL_14;
  NodeOrParent = FindNodeOrParent((__int64)Table, (__int64)Buffer, &RestartKey);
  if ( NodeOrParent == 1 )
  {
    v12 = RestartKey;
LABEL_14:
    if ( NextFlag )
      v12 = RealSuccessor(v12);
    goto LABEL_16;
  }
  NextFlag = 0;
  if ( NodeOrParent == 3 )
  {
    v12 = RealSuccessor(RestartKey);
    goto LABEL_14;
  }
  v12 = RestartKey;
LABEL_16:
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v19 = v15(Table, v12 + 4, MatchData);
    if ( v19 != -1073741198 )
      break;
    v12 = RealSuccessor(v12);
    if ( !v12 )
      return 0LL;
  }
  *v9 = v12;
  *v14 = Table->DeleteCount;
  if ( v19 )
    return 0LL;
  return v12 + 4;
}
