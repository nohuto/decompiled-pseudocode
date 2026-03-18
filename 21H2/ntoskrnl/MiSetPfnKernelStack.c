/*
 * XREFs of MiSetPfnKernelStack @ 0x1402F50C0
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14029A2A0 (MiInPageSingleKernelStack.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     MiMarkKernelStack @ 0x1403C2D6C (MiMarkKernelStack.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x14036C804 (MiMarkPfnTradable.c)
 */

__int64 __fastcall MiSetPfnKernelStack(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = *a1 ^ (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *a1 = result;
  if ( a2 )
  {
    if ( (*(_BYTE *)a1 & 1) == 0 )
      return MiMarkPfnTradable(a1, 1LL);
  }
  return result;
}
