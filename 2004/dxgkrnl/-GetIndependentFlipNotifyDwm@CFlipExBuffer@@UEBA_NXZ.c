/*
 * XREFs of ?GetIndependentFlipNotifyDwm@CFlipExBuffer@@UEBA_NXZ @ 0x1C001D1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExBuffer::GetIndependentFlipNotifyDwm(CFlipExBuffer *this)
{
  char v1; // dl

  v1 = 1;
  if ( *((int *)this + 88) >= 3 && !*((_BYTE *)this + 569) )
    return *((_BYTE *)this + 570) != 0;
  return v1;
}
