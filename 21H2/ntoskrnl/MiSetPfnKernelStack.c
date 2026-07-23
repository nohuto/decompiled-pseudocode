/*
 * XREFs of MiSetPfnKernelStack @ 0x1402964B8
 * Callers:
 *     MiInPageSingleKernelStack @ 0x140295F90 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiMarkPfnTradable @ 0x1402964F8 (MiMarkPfnTradable.c)
 */

__int64 __fastcall MiSetPfnKernelStack(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = *a1 ^ (*a1 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *a1 = result;
  if ( a2 )
  {
    if ( (*(_BYTE *)a1 & 1) == 0 )
      return MiMarkPfnTradable();
  }
  return result;
}
