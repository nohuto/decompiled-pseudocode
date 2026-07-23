/*
 * XREFs of MiImageCanUseHighOverflowArea @ 0x1408D7E30
 * Callers:
 *     MiSelectImageBase @ 0x1406C2B74 (MiSelectImageBase.c)
 *     MiSelectOverflowDllBase @ 0x1408D7E5C (MiSelectOverflowDllBase.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiImageCanUseHighOverflowArea(__int64 a1, __int64 a2)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 44LL) & 0x20) != 0 && (unsigned __int64)(a2 - 0x80000000LL) <= 0x7FFFFFFF;
}
