/*
 * XREFs of ??0DCOBJ@@QAE@XZ @ 0x1D6F8A
 * Callers:
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 * Callees:
 *     <none>
 */

DCOBJ *__thiscall DCOBJ::DCOBJ(DCOBJ *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  return this;
}
