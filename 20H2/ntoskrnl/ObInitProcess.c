/*
 * XREFs of ObInitProcess @ 0x1406301EC
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406312F0 (SeAuditingWithTokenForSubcategory.c)
 *     ExSweepHandleTable @ 0x140631740 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406318A8 (ExpRemoveHandleTable.c)
 *     ExpFreeHandleTable @ 0x140631954 (ExpFreeHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x1406B11E0 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x1406F4004 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x1406F5040 (ExDupHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rsi
  int v9; // ebp
  PVOID HandleTable; // rbp
  PVOID v12; // rbx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (PVOID)ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 1392) = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL) )
      {
        v13[0] = a2;
        v13[1] = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, v13, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 139);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 1392) = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 139);
      return 3221225626LL;
    }
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable(a2, v8, a3, a4, (__int64)&P);
  if ( v9 >= 0 )
  {
    HandleTable = P;
    goto LABEL_5;
  }
  ExReleaseRundownProtection_0(a1 + 139);
  v12 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, P, 0LL);
    ExpRemoveHandleTable(v12);
    ExpFreeHandleTable(v12);
  }
  return (unsigned int)v9;
}
