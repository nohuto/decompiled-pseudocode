/*
 * XREFs of sub_18002E7E0 @ 0x18002E7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002E7E0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  *a3 = 0LL;
  if ( (*a2 != 0x4496D6AD657804FALL || a2[1] != 0x894FAF522735608AuLL)
    && (*a2 != unk_180042888 || a2[1] != 0x46000000000000C0LL) )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  return 0LL;
}
