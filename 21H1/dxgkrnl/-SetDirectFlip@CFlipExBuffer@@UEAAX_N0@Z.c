/*
 * XREFs of ?SetDirectFlip@CFlipExBuffer@@UEAAX_N0@Z @ 0x1C001B3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SetDirectFlip(CFlipExBuffer *this, char a2, char a3)
{
  *((_BYTE *)this + 571) = a2;
  *((_BYTE *)this + 573) = a3;
}
