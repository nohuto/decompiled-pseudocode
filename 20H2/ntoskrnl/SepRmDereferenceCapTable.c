/*
 * XREFs of SepRmDereferenceCapTable @ 0x140594960
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140223E30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140372D04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepRmDereferenceCap @ 0x140594940 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140596424 (SepRmReferenceFindCap.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepRmCapUpdateWrkr @ 0x1407C9AB0 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x140928868 (SepRmDestroyCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCapTable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return SepRmDestroyCapTable((PVOID)a1);
  }
  return result;
}
