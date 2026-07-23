/*
 * XREFs of ObInitProcess @ 0x1406970D4
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExEnumHandleTable @ 0x1405E3DF0 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x140622DE8 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x140695BF0 (ExDupHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406981E0 (SeAuditingWithTokenForSubcategory.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     ExpFreeHandleTable @ 0x1406F3AA8 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406F3C54 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x1406F3D00 (ExSweepHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, struct _KPROCESS *a2, unsigned int a3, _BYTE *a4)
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
    HandleTable = ExCreateHandleTable((__int64)a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      a2[1].AffinityPadding[8] = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(124LL) )
      {
        v13[0] = a2;
        v13[1] = a1;
        ExEnumHandleTable(
          HandleTable,
          (__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64))ObAuditInheritedHandleProcedure,
          (__int64)v13,
          0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection(a1 + 139);
      return 0LL;
    }
    else
    {
      a2[1].AffinityPadding[8] = 0LL;
      if ( v8 )
        ExReleaseRundownProtection(a1 + 139);
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
  ExReleaseRundownProtection(a1 + 139);
  v12 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, P, 0LL);
    ExpRemoveHandleTable(v12);
    ExpFreeHandleTable(v12);
  }
  return (unsigned int)v9;
}
