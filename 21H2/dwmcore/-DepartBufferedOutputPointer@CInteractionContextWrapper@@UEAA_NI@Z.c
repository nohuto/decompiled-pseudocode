/*
 * XREFs of ?DepartBufferedOutputPointer@CInteractionContextWrapper@@UEAA_NI@Z @ 0x180230560
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x1802305E8 (-FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z.c)
 */

bool __fastcall CInteractionContextWrapper::DepartBufferedOutputPointer(
        CInteractionContextWrapper *this,
        unsigned int a2)
{
  struct CBufferedOutputPointer *BufferedOutputPointer; // rax

  BufferedOutputPointer = CInteractionContextWrapper::FindBufferedOutputPointer(this, a2);
  if ( BufferedOutputPointer )
  {
    *((_BYTE *)BufferedOutputPointer + 4) = 1;
    LOBYTE(BufferedOutputPointer) = 1;
  }
  return (char)BufferedOutputPointer;
}
