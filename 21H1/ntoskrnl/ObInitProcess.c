/*
 * XREFs of ObInitProcess @ 0x14066F6F0
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExSweepHandleTable @ 0x1405D5FF0 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1405D6158 (ExpRemoveHandleTable.c)
 *     ExpFreeHandleTable @ 0x1405D6204 (ExpFreeHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406707F0 (SeAuditingWithTokenForSubcategory.c)
 *     ExDupHandleTable @ 0x140671090 (ExDupHandleTable.c)
 *     ExCreateHandleTable @ 0x14069F7F8 (ExCreateHandleTable.c)
 *     ExEnumHandleTable @ 0x1406B8320 (ExEnumHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, _KPROCESS *a2, int a3, int a4)
{
  unsigned __int64 v8; // rsi
  int v9; // ebp
  PVOID HandleTable; // rbp
  _DWORD *v12; // r9
  _QWORD *v13; // rbx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (PVOID)ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      a2[1].AffinityPadding[8] = (unsigned __int64)HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, 0LL) )
      {
        v14[0] = a2;
        v14[1] = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, v14, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 139);
      return 0LL;
    }
    else
    {
      a2[1].AffinityPadding[8] = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 139);
      return 3221225626LL;
    }
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable((_DWORD)a2, v8, a3, a4, (__int64)&P);
  if ( v9 >= 0 )
  {
    HandleTable = P;
    goto LABEL_5;
  }
  ExReleaseRundownProtection_0(a1 + 139);
  v13 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, (__int64)P, 0, v12);
    ExpRemoveHandleTable((__int64)v13);
    ExpFreeHandleTable(v13);
  }
  return (unsigned int)v9;
}
