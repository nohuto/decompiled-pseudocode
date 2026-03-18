/*
 * XREFs of ?GetDevice@CCompSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1800FC3EC
 * Callers:
 *     ?GetDevice@CCompSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x1801095B0 (-GetDevice@CCompSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CCompSwapChain::GetDevice(CCompSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 45);
}
