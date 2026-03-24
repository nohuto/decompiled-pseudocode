/*
 * XREFs of ?QueryInterface@CPrimitiveGroup@@$4PPPPPPPM@CMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F5460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CPrimitiveGroup::QueryInterface((CPrimitiveGroup *)(a1 - *(int *)(a1 - 4) - 704), a2, a3);
}
