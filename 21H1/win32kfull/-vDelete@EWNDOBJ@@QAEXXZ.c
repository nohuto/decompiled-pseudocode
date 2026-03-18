/*
 * XREFs of ?vDelete@EWNDOBJ@@QAEXXZ @ 0x1E6521
 * Callers:
 *     _GreDeleteWnd@4 @ 0x1E6F47 (_GreDeleteWnd@4.c)
 * Callees:
 *     <none>
 */

void __thiscall EWNDOBJ::vDelete(EWNDOBJ *this)
{
  REGION *v2; // ecx

  if ( (*((_DWORD *)this + 35) & 0x10000000) != 0 )
    GreDeleteSemaphore(*((_DWORD *)this + 38));
  v2 = (REGION *)*((_DWORD *)this + 37);
  if ( v2 )
    REGION::vDeleteREGION(v2);
  RGNOBJ::vDeleteRGNOBJ((EWNDOBJ *)((char *)this + 48));
}
