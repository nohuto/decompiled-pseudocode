/*
 * XREFs of ObInitProcess @ 0x140617FD0
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExCreateHandleTable @ 0x1405D03E8 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x1405D0570 (ExDupHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1405E9CC4 (ObReferenceProcessHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406190D0 (SeAuditingWithTokenForSubcategory.c)
 *     ExSweepHandleTable @ 0x14065C780 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x14065C8E8 (ExpRemoveHandleTable.c)
 *     ExpFreeHandleTable @ 0x14065C994 (ExpFreeHandleTable.c)
 *     ExEnumHandleTable @ 0x1406D7420 (ExEnumHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  unsigned int *v8; // rsi
  int v9; // ebp
  __int64 HandleTable; // rbp
  PVOID v12; // rbx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 1392) = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, 0LL) )
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
  v8 = (unsigned int *)ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable(a2, v8, a3, a4, (__int64 *)&P);
  if ( v9 >= 0 )
  {
    HandleTable = (__int64)P;
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
