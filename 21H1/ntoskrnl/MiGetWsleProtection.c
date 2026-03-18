/*
 * XREFs of MiGetWsleProtection @ 0x1402233F0
 * Callers:
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     MiGetPfnProtection @ 0x1402ACBA0 (MiGetPfnProtection.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
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
