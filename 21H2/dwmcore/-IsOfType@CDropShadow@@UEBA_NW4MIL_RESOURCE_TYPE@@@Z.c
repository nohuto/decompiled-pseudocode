/*
 * XREFs of ?IsOfType@CDropShadow@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F0930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDropShadow::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 37) & 0xFFFFFFE7) == 0 && a2 != 61;
}
