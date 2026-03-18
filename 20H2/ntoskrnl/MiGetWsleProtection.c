/*
 * XREFs of MiGetWsleProtection @ 0x14028F860
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MiGetPfnProtection @ 0x1402D3C28 (MiGetPfnProtection.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
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
