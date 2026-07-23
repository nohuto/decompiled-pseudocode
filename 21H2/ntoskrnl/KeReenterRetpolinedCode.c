/*
 * XREFs of KeReenterRetpolinedCode @ 0x1403F3110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char KeReenterRetpolinedCode()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int16 v1; // cx
  __int16 v3; // [rsp+0h] [rbp-8h]

  LOBYTE(CurrentPrcb) = KeGetPcr()->Prcb.BpbRetpolineState;
  if ( ((unsigned __int8)CurrentPrcb & 1) != 0 )
  {
    v1 = v3;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->BpbRetpolineState &= ~1u;
    if ( (v1 & 0x200) != 0 )
      _enable();
  }
  return (char)CurrentPrcb;
}
