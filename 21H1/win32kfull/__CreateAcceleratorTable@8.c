/*
 * XREFs of __CreateAcceleratorTable@8 @ 0xABA4E
 * Callers:
 *     _NtUserCreateAcceleratorTable@8 @ 0xAB9D4 (_NtUserCreateAcceleratorTable@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall _CreateAcceleratorTable(const void *a1, size_t a2)
{
  int v4; // esi

  if ( a2 + 18 < a2 )
    return 0;
  v4 = HMAllocObject(_gptiCurrent, 0, 8, a2 + 18);
  if ( !v4 )
    return 0;
  memcpy((void *)(v4 + 16), a1, a2);
  *(_DWORD *)(v4 + 12) = a2 / 6;
  *(_BYTE *)(6 * (a2 / 6) + v4 + 10) |= 0x80u;
  return v4;
}
