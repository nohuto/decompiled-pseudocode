/*
 * XREFs of __GetPointerDeviceCursors@12 @ 0x159AF3
 * Callers:
 *     _NtUserGetPointerDeviceCursors@12 @ 0x163E51 (_NtUserGetPointerDeviceCursors@12.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall _GetPointerDeviceCursors(int a1, unsigned int a2, int a3)
{
  unsigned int i; // esi

  for ( i = 0; i < a2; ++i )
  {
    *(_DWORD *)(a3 + 8 * i) = *(_DWORD *)(*(_DWORD *)(a1 + 860) + 12 * i + 4);
    *(_DWORD *)(a3 + 8 * i + 4) = *(_DWORD *)(12 * i + *(_DWORD *)(a1 + 860));
  }
  return 1;
}
