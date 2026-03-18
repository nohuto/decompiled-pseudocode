/*
 * XREFs of _NtGdiChangeGhostFont@8 @ 0x2121F6
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreChangeGhostFont@8 @ 0x1D89B9 (_GreChangeGhostFont@8.c)
 */

int __stdcall NtGdiChangeGhostFont(void **a1, int a2)
{
  int v2; // esi
  ULONG v3; // edi

  v2 = 1;
  v3 = (ULONG)(a1 + 1);
  if ( a1 + 1 < a1 || v3 > _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  if ( !GreChangeGhostFont(*a1, a2, v3) )
    return 0;
  return v2;
}
