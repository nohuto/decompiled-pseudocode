/*
 * XREFs of ?DestroyTable@MULTIFONT@@QAEXXZ @ 0x2017E6
 * Callers:
 *     ??1MULTIFONT@@QAE@XZ @ 0x201732 (--1MULTIFONT@@QAE@XZ.c)
 *     ?MulDestroyFont@@YGXPAU_FONTOBJ@@@Z @ 0x202E06 (-MulDestroyFont@@YGXPAU_FONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall MULTIFONT::DestroyTable(PVOID *this)
{
  if ( *this )
  {
    if ( this[1] )
    {
      EngFreeMem(this[1]);
      this[1] = 0;
    }
  }
}
