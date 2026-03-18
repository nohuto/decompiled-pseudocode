/*
 * XREFs of KeQueryGroupAffinity_0 @ 0x1C002F279
 * Callers:
 *     IntPartIsInterruptSteerable @ 0x1C006CC48 (IntPartIsInterruptSteerable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KAFFINITY __stdcall KeQueryGroupAffinity_0(USHORT GroupNumber)
{
  return KeQueryGroupAffinity(GroupNumber);
}
