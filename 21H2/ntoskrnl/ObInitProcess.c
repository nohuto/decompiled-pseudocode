/*
 * XREFs of ObInitProcess @ 0x1406A6448
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     ExCreateHandleTable @ 0x1406A6378 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x1406A6520 (ExDupHandleTable.c)
 *     ExpFreeHandleTable @ 0x1406AC130 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406AC404 (ExpRemoveHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     ExSweepHandleTable @ 0x1407A2CB0 (ExSweepHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v8; // rdi
  int v9; // ebp
  __int64 HandleTable; // rbp
  PVOID v12; // rbx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v13 = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 1392) = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL) )
      {
        *(_QWORD *)&v13 = a2;
        *((_QWORD *)&v13 + 1) = a1;
        ExEnumHandleTable(
          HandleTable,
          (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))ObAuditInheritedHandleProcedure,
          (__int64)&v13,
          0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection(a1 + 139);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 1392) = 0LL;
      if ( v8 )
        ExReleaseRundownProtection(a1 + 139);
      return 3221225626LL;
    }
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable(a2, v8, a3, a4, (__int64)&P);
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
