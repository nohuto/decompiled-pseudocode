/*
 * XREFs of _CalcTouchInputInfoSize@4 @ 0x149B5B
 * Callers:
 *     ?AllocTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IPBUtagTOUCHINPUT@@IPAK@Z @ 0x148FC5 (-AllocTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IPBUtagTOUCHINPUT@@IPAK@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 */

int __thiscall CalcTouchInputInfoSize(unsigned int *this)
{
  int v1; // esi
  int *v2; // ecx
  ULONG *v4; // [esp+0h] [ebp-8h]
  unsigned int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  v1 = 0;
  if ( this
    && ULongLongToULong(40LL * ((unsigned int)this - 1), v4) >= 0
    && (ULongAdd(0, 0x3Cu, v2, v5, 0) & 0x80000000) == 0 )
  {
    return v6;
  }
  return v1;
}
