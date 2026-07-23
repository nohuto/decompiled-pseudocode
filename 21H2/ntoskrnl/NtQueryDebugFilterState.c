/*
 * XREFs of NtQueryDebugFilterState @ 0x140272960
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140272800 (vDbgPrintExWithPrefixInternal.c)
 *     DbgQueryDebugFilterState @ 0x1405857F0 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  ULONG v2; // r8d
  __int64 v3; // r9

  v2 = 3;
  if ( ComponentId < 0x9C )
    v2 = Level;
  v3 = 101LL;
  if ( ComponentId < 0x9C )
    v3 = ComponentId;
  if ( v2 <= 0x1F )
    v2 = 1 << v2;
  return (v2 & Kd_WIN2000_Mask) != 0 || (v2 & *(_DWORD *)*(&KdComponentTable + v3)) != 0;
}
