/*
 * XREFs of ?PROBEDISPATBRUSH@@YGHPAU_BRUSHOBJ@@@Z @ 0x216579
 * Callers:
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall PROBEDISPATBRUSH(_DWORD *a1)
{
  int v2; // [esp+1Ch] [ebp-1Ch]

  v2 = 0;
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    a1 = (_DWORD *)_MmUserProbeAddress;
  if ( *a1 == -1 )
    return 1;
  return v2;
}
