/*
 * XREFs of ?StartCompositionEarly@CFlipExBuffer@@UEBA_NXZ @ 0x1C0018F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExBuffer::StartCompositionEarly(CFlipExBuffer *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 571) && !*((_DWORD *)this + 88) && (*((_DWORD *)this + 60) == 2 || *((_BYTE *)this + 573)) )
    return 1;
  return result;
}
