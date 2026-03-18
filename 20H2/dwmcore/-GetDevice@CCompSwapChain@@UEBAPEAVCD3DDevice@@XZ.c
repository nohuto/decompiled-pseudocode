/*
 * XREFs of ?GetDevice@CCompSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1800DF2BC
 * Callers:
 *     ?GetDevice@CCompSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x1800F22E0 (-GetDevice@CCompSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CCompSwapChain::GetDevice(CCompSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 40);
}
