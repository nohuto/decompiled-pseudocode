/*
 * XREFs of MiSetInPagePriority @ 0x1402FCA78
 * Callers:
 *     MiSetInPagePrefetchPriority @ 0x14028E1B4 (MiSetInPagePrefetchPriority.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiPfAllocateMdls @ 0x1406E8CA0 (MiPfAllocateMdls.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetInPagePriority(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( a3 >= 5 || a2 <= a3 )
    *(_DWORD *)(a1 + 192) &= ~0x80000u;
  else
    *(_DWORD *)(a1 + 192) |= 0x80000u;
  result = ((a3 & 7) << 12) | *(_DWORD *)(a1 + 192) & 0xFFFF81FF | ((a3 & 7) << 9) & 0x8FFF;
  *(_DWORD *)(a1 + 192) = result;
  return result;
}
