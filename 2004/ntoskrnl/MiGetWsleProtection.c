/*
 * XREFs of MiGetWsleProtection @ 0x1402B6070
 * Callers:
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     MiGetPfnProtection @ 0x140253B70 (MiGetPfnProtection.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWsleProtection(unsigned __int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = (a2 >> 4) & 7;
  if ( ((a2 >> 4) & 7) != 0 )
  {
    v3 = *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v3 & 0x18) == 8 )
    {
      return (unsigned int)result | 0x18;
    }
    else if ( (v3 & 0x10) != 0 )
    {
      return (unsigned int)result | 8;
    }
  }
  return result;
}
